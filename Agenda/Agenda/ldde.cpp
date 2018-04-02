#include "ldde.h"
#include <iostream>
#include "compromisso.h"
#include "arquivo.h"
#include "fila.h"
#include <QMessageBox>
#include <QString>
#include<vector>

#define FLAG 0

using namespace std;

LDDE::LDDE(){
    primeiro = nullptr;
    ultimo = nullptr;

    /* Arquivo x;
    vector<Compromisso> v = x.buscaArquivo();

    for(int i=0;i<v.size(); i++){
      this->Inserir(v[i]);
    }*/
}

LDDE::~LDDE(){
    Iterador atual(primeiro);
    Iterador backup;
//    Arquivo x;

    while(atual.noExiste()){
//      x.insereArquivo(atual);
        backup.setIt(atual.getProximoEndereco());
        delete atual.getEnderecoAtual();
        atual = backup;
    }
}

bool LDDE::Imprimir(Compromisso compromisso){

    Iterador imprimir;
    Buscar(imprimir,compromisso);
    if (!imprimir.noExiste())
        return false;
    QMessageBox::information(nullptr,"Compromisso",imprimir.getValor().getTitulo() +" no dia " +
                             imprimir.getValor().getData()+" ás "+
                             imprimir.getValor().getHora()+"\n\nDescrição: "+
                             imprimir.getValor().getDescricao());
    return true;
}

bool LDDE::Imprimir(){
    Iterador atual(this->primeiro);
    //No *atual = primeiro;

    if(!atual.noExiste()){
        QMessageBox::information(nullptr,"Erro", "Você não tem nenhum compromisso registrado");
        return false;
    }
    while(atual.noExiste()){
        QMessageBox::information(nullptr,"Compromisso",atual.getValor().getTitulo() +" no dia " +
                                 atual.getValor().getData() +" ás "+
                                 atual.getValor().getHora()+"\n\nDescrição: "+
                                 atual.getValor().getDescricao());
        atual++;
    }
    return true;
}

bool LDDE::Buscar(Iterador& achou,Compromisso buscar){
    Iterador atual(primeiro);
    if(!atual.noExiste()){
        QMessageBox::information(nullptr,"Erro", "Você não tem nenhum compromisso registrado");
        return false;
    }

    while(atual.noExiste() && atual.getValor().getQuando() < buscar.getQuando())
        atual++;
    if(atual.noExiste() && atual.getValor().getQuando() == buscar.getQuando()){
        achou = atual;
        return true;
    }
    QMessageBox::information(nullptr,"Erro","Não foi encontrado nenhum compromisso no dia " +
                             buscar.getData() +" às " + buscar.getHora());
    return false;
}

// falta testar essa função
bool LDDE::Remover(Compromisso remover, int flag){
    Iterador removido;
    this->Buscar(removido, remover);
    if(!removido.noExiste())
        return false;
    Iterador proximo(removido.getProximoEndereco()); // removido->proxEnd;
    Iterador anterior(removido.getEnderecoAnterior()); //= removido->endAnt;

    if(anterior.noExiste())
        anterior.setProximoEndereco(proximo.getEnderecoAtual()); //->proxEnd = proximo;
    else
        primeiro = proximo.getEnderecoAtual();

    if(proximo.noExiste())
        proximo.setEnderecoAnterior(anterior.getEnderecoAtual());//->endAnt = anterior;
    else
        ultimo = anterior.getEnderecoAtual();
    if(flag !=0){
        QMessageBox::information(nullptr,"Deletando o compromisso",removido.getValor().getTitulo() +" no dia " +
                             removido.getValor().getData()+" ás "+
                             removido.getValor().getHora()+"\n\nDescrição: "+
                             removido.getValor().getDescricao());
    }
    delete removido.getEnderecoAtual();
    return true;
}

bool LDDE::Inserir(Compromisso newAppointment){
    No* novo = new No(newAppointment);
    Iterador novoNo(novo);
    if(!novo){
        QMessageBox::information(nullptr,"Dunno","Não foi possível alocar memória");
        return false;
    }
    Iterador atual(primeiro);
    Iterador anterior;
    while(atual.noExiste() && atual.getValor().getQuando() <= newAppointment.getQuando()){
        if(novoNo.getValor().getQuando() == atual.getValor().getQuando()){
            QMessageBox::information(nullptr,"Erro","Não é possível inserir dois compromissos na mesma data e hora!");
            return false;
        }
        anterior = atual;
        atual++;
    }
    if(anterior.noExiste()){
        anterior.setProximoEndereco(novo);
    }
    else{
        primeiro = novoNo.getEnderecoAtual();
    }
    if(atual.noExiste()){
        atual.setEnderecoAnterior(novo);
    }
    else{
        ultimo = novoNo.getEnderecoAtual();
    }
    novoNo.setEnderecoAnterior( anterior.getEnderecoAtual());
    novoNo.setProximoEndereco( atual.getEnderecoAtual());
    return true;
}

bool LDDE::Alterar(Compromisso removido, Compromisso novo){
   //Se deletar o removido, vai retornar true
    if(!this->Remover(removido, FLAG))
       return false;
    this->Inserir(novo);
    QMessageBox::information(nullptr,"Funfou","Valor alterado");
    return true;
}
