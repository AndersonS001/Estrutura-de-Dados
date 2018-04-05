#include "ldde.h"
#include <iostream>
#include "compromisso.h"
#include "arquivo.h"
#include "fila.h"
#include <QMessageBox>
#include <QString>

#define FLAG 0

LDDE::LDDE(){
    primeiro = nullptr;
    ultimo = nullptr;

    Arquivo x;
    Fila v = x.buscaArquivo();
    n=0;

    while(v.size()){
        this->Inserir(v.remove(),true);
        n++;
    }
}

LDDE::~LDDE(){
    Iterador atual(primeiro);
    Iterador backup;

    Arquivo x;
    int i=0;
    if(!atual)
        x.arquivoLimpo();

    while(atual.noExiste()){
        x.insereArquivo(atual,i);
        i++;

        backup.setIt(atual.getProximoEndereco());
        delete atual.getEnderecoAtual();
        atual = backup;
    }
}

void LDDE::atualizaLista(){
    Arquivo x;
    Fila v = x.buscaArquivo();

    while(v.size()){
        this->Inserir(v.remove(), true);
    }
}

bool LDDE::Imprimir(Compromisso compromisso){

    atualizaLista();
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
    atualizaLista();
    Iterador atual(this->primeiro);

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
    atualizaLista();
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

bool LDDE::Inserir(Compromisso newAppointment, bool arq = false){
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
            if(!arq){
                QMessageBox::information(nullptr,"Erro","Não é possível inserir dois compromissos na mesma data e hora!");
            }
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
    //atualizaLista();
    //Se deletar o removido, vai retornar true
    if(!this->Remover(removido, FLAG))
        return false;
    this->Inserir(novo,false);
    QMessageBox::information(nullptr,"Alteração","Valor alterado");
    return true;
}
