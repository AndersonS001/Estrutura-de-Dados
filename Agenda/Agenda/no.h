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
    Compromisso getValor()const;
 //   friend class LDDE;
    friend class Fila;
    friend class Iterador;
    friend class LDDE;
};
#endif // NO_H
