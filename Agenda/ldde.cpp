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
        this->Inserir(v.remove(),FLAG);
        n++;
    }
}
LDDE::~LDDE(){
    Iterador atual(primeiro);
    Iterador backup;
    Arquivo x;
    int i=0;
    if(!atual.noExiste())
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

bool LDDE::Inicio(Iterador &comeco){
    Iterador atual(this->primeiro);
    if(!atual.noExiste())
        return false;
    comeco = atual;
    return true;
}

bool LDDE::Fim(Iterador &fim){
    Iterador existe(this->ultimo);
    if(!existe.noExiste())
        return false;
    fim = existe;
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

bool LDDE::Remover(Iterador &removido, int flag){
    if(!removido.noExiste())
        return false;
    Iterador proximo(removido.getProximoEndereco());
    Iterador anterior(removido.getEnderecoAnterior());

    if(anterior.noExiste())
        anterior.setProximoEndereco(proximo.getEnderecoAtual());
    else
        primeiro = proximo.getEnderecoAtual();

    if(proximo.noExiste())
        proximo.setEnderecoAnterior(anterior.getEnderecoAtual());
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

bool LDDE::Inserir(Compromisso newAppointment, int flag){
    No* novo = new No(newAppointment);
    Iterador novoNo(novo);
    if(!novo){
        QMessageBox::information(nullptr,"Dunno","Não foi possível alocar memória");
        return false;
    }
    Iterador atual(primeiro);
    Iterador anterior;
    while(atual.noExiste() && atual.getValor().getQuando() <= newAppointment.getQuando()){
        if(novoNo.getValor().getQuando() == atual.getValor().getQuando() && flag !=0){
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
    if(flag != 0)
        QMessageBox::information(nullptr,novoNo.getValor().getTitulo(),"Compromisso inserido com sucesso");
    return true;
}

bool LDDE::alterarCompromisso(Iterador removido, Compromisso novo){
    //Se deletar o removido, vai retornar true
    if(!Remover(removido, FLAG))
        return false;
    this->Inserir(novo, FLAG);
    QMessageBox::information(nullptr,"Alteração","Valor alterado");
    return true;
}
