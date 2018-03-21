#ifndef NO_H
#define NO_H
#include "compromisso.h"

class No{
private:
    Compromisso *valor;
    No* proxEnd;
    No *endAnt;
public:
    No(Compromisso elemento);
    ~No();
    friend class LDDE;

};

#endif // NO_H
