#include "ldde.h"
#include <iostream>
#include "compromisso.h"
#include <QMessageBox>
#include <QString>

/*
 *  ultima edição 21/03 por Felipe
 */


using namespace std;

LDDE::LDDE(){
    primeiro =nullptr;
    ultimo = nullptr;
}

LDDE::~LDDE(){
    No *atual = primeiro;
    No *backup = nullptr;
    while(atual){
        backup = atual->proxEnd;
        delete atual;
        atual = backup;
    }
}
bool LDDE::Imprimir(Compromisso newAppointment){
   No *imprimir = Buscar(newAppointment);
   if (!imprimir)
       return false;
   QMessageBox::information(nullptr,"Compromisso",imprimir->valor->titulo +" no dia " +
                            imprimir->valor->quando.date().toString("dd.MM.yyyy")+" ás "+
                            imprimir->valor->quando.time().toString("hh:mm")+"\n\nDescrição: "+
                            imprimir->valor->descricao);
   return true;
}

bool LDDE::Imprimir(){
    No *atual = primeiro;
    if(!atual){
        QMessageBox::information(nullptr,"Erro", "Você não tem nenhum compromisso registrado");
        return false;
    }
    while(atual){
        QMessageBox::information(nullptr,"Compromisso",atual->valor->titulo +" no dia " +
                                 atual->valor->quando.date().toString("dd.MM.yyyy")+" ás "+
                                 atual->valor->quando.time().toString("hh:mm")+"\n\nDescrição: "+
                                 atual->valor->descricao);
        atual = atual->proxEnd;
    }
    return true;
}

No* LDDE::Buscar(Compromisso newAppointment){
    No *atual = primeiro;
    if(!atual){
        QMessageBox::information(nullptr,"Erro", "Você não tem nenhum compromisso registrado");
        return nullptr;
    }
    while(atual && atual->valor->quando < newAppointment.quando)
        atual = atual->proxEnd;
    if(atual && atual->valor->quando == newAppointment.quando)
        return atual;
    QMessageBox::information(nullptr,"Erro","Não foi encontrado nenhum compromisso no dia " +
                             newAppointment.quando.date().toString("dd.MM.yyyy") +" às " +
                             newAppointment.quando.time().toString("hh:mm"));
    return nullptr;
}

// falta testar essa função
bool LDDE::Remover(Compromisso newAppointment){
    No *removido = Buscar(newAppointment);
    if(!removido)
        return false;
    No *proximo = removido->proxEnd;
    No *anterior = removido->endAnt;
    if(anterior)
        anterior->proxEnd = proximo;
    else
        primeiro =proximo;
    if(proximo)
        proximo->endAnt = anterior;
    else
        ultimo = anterior;
    QMessageBox::information(nullptr,"Deletando o compromisso",removido->valor->titulo +" no dia " +
                             removido->valor->quando.date().toString("dd.MM.yyyy")+" ás "+
                             removido->valor->quando.time().toString("hh:mm")+"\n\nDescrição: "+
                             removido->valor->descricao);
    delete removido;
    return true;
}

bool LDDE::Inserir(Compromisso newAppointment){
    No* novo = new No(newAppointment);
    if(!novo){
         QMessageBox::information(nullptr,"Dunno","Não foi possível alocar memória");
        return false;
    }

   No *atual = primeiro;
   No *anterior = nullptr;
   while(atual && atual->valor->quando < newAppointment.quando){
        anterior = atual;
        atual = atual->proxEnd;
   }
   if(anterior){
       anterior->proxEnd = novo;
   }
   else{
       primeiro = novo;
   }
   if(atual){
       atual->endAnt = novo;
   }
   else{
       ultimo = novo;
   }
   novo->endAnt = anterior;
   novo->proxEnd = atual;
   return true;
}
