#ifndef LDDE_H
#define LDDE_H
#include "compromisso.h"
#include "no.h"

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
    bool Remover(Compromisso newAppointment);
    bool Imprimir();
    bool Imprimir(Compromisso newAppointment);
    No* Buscar(Compromisso newAppointment);
};

#endif // LDDE_H
