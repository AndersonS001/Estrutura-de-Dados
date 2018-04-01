#ifndef NO_H
#define NO_H
#include "compromisso.h"

class No{
private:
    Compromisso valor;
    No* proxEnd;
    No *endAnt;
public:
    No(Compromisso elemento);
    ~No();
    Compromisso getValor();
    friend class LDDE;
    friend class Fila;

};

#endif // NO_H
