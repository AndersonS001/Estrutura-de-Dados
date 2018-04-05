#ifndef LDDE_H
#define LDDE_H
#include "compromisso.h"
#include "no.h"
#include <fstream>

class Iterador;

class LDDE{
private:
    No* primeiro;
    No* ultimo;
    void atualizaLista();
    int n;
public:
    LDDE();
    ~LDDE();
    bool Inserir(Compromisso newAppointment);
    bool Remover(Compromisso remover, int flag);
    bool Imprimir();
    bool Imprimir(Compromisso compromisso);
    bool Buscar(Iterador& achou,Compromisso buscar);
    /*  Para nao quebrar a logica da LDDE ser ordenada na insercao, o "Alterar" vai
     *  deletar o no e inserir um novo.
     */
    bool Alterar(Compromisso removido, Compromisso novo);
};

class Iterador{
private:
    No* it;
    /*  as funcoes abaixo serao usadas na LDDE com o objetivo de tirar a LDDE como classe amiga do No.
     *  Os metodos da LDDE que precisarao das funcoes abaixo sao:
     *  Inserir e Remover. */
    No* getEnderecoAnterior(){ return it->endAnt;}
    No* getProximoEndereco(){ return it->proxEnd;}
    No* getEnderecoAtual(){ return it; }
    void setProximoEndereco(No* proximoEnd){ it->proxEnd = proximoEnd;}
    void setEnderecoAnterior(No* enderecoAnterior){ it->endAnt = enderecoAnterior;}
    void setIt(No *no){it =no;}
public:
    friend bool LDDE::Inserir(Compromisso newAppointment);
    friend bool LDDE::Remover(Compromisso remover, int flag);
    friend LDDE::~LDDE();
    Iterador();
    Iterador(No* no);
    ~Iterador();

    void fim();
    //iterador aponta para o proximo no
    bool avancar();
    //iterador aponta para o no anterior
    bool voltar();
    //iterador aponta para o primeiro no
    //verifica se o iterador esta apontando para um no que existe
    bool noExiste();

    Compromisso getValor()const;

    //sobrecarga de operadoes para fazer o iterador avancar ou voltar
    Iterador& operator++(int um);
    Iterador& operator--(int um);
    bool operator!();
};

#endif // LDDE_H
