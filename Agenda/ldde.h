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
    /*Os argumentos "flag" são apenas para identificar onde serão usados
     * um QMessageBox*/
    bool Inserir(Compromisso newAppointment, int flag);
    bool Remover(Iterador &removido, int flag);

    bool Imprimir();
    bool Imprimir(Compromisso compromisso);
    bool Buscar(Iterador& achou,Compromisso buscar);
    /*  Para não quebrar a lógica da LDDE ser ordenada na inserção, o "Alterar" vai
     *  deletar o nó buscado e inserir um novo se o valor buscado existir.*/
    bool alterarCompromisso(Iterador removido, Compromisso novo);
};

class Iterador{
private:
    No* it;
    /*  as funções abaixo serão usadas na LDDE com o objetivo de tirar a LDDE como classe amiga do Nó.
     *  Os métodos da LDDE que precisarão das funçõess abaixo são:
     *  Inserir, Remover e o destrutor. */
    No* getEnderecoAnterior();
    No* getProximoEndereco();
    No* getEnderecoAtual();
    void setProximoEndereco(No* proximoEnd);
    void setEnderecoAnterior(No* enderecoAnterior);
    void setIt(No *no);
public:
    friend bool LDDE::Inserir(Compromisso newAppointment, int flag);
    friend bool LDDE::Remover(Iterador &removido, int flag);
    friend LDDE::~LDDE();
    Iterador();
    Iterador(No* no);
    ~Iterador();

    //iterador aponta para o proximo no
    bool avancar();
    //iterador aponta para o no anterior
    bool voltar();
    //verifica se o iterador esta apontando para um no que existe
    bool noExiste();
    /*  a ideia é usar essa funcão nas classe Alterar.
     *  Se as funçõess de alterar e remover retornarem true, vou resetar o meu
     *  iterador para a condição inicial - it = nullptr*/
    bool setNulo(bool sucesso);

    Compromisso getValor()const;
    //sobrecarga de operadoes para fazer o iterador avançar ou voltar
    Iterador& operator++(int um);
    Iterador& operator--(int um);
    bool operator!();
};

#endif // LDDE_H
