#ifndef LDDE_H
#define LDDE_H
#include "compromisso.h"
#include "no.h"
#include <fstream>

/*
 * última edição: 21/03 por Felipe.
 */

class LDDE{
private:
    No* primeiro;
    No* ultimo;
public:
    LDDE();
    ~LDDE();

    bool Inserir(Compromisso newAppointment);
    bool Inserir(No* novo);
    bool Remover(Compromisso newAppointment);
    bool Imprimir();
    bool Imprimir(Compromisso newAppointment);
    void setPrimeiro(No*);
    No* getPrimeiro();
    No* retornaAtual();
    No* Buscar(Compromisso newAppointment);
};

#endif // LDDE_H
