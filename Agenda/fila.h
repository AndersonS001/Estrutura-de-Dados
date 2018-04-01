#ifndef FILA_H
#define FILA_H
#include "compromisso.h"
#include "no.h"
#include <fstream>

using namespace std;
class Fila
{
public:
    Fila();
    ~Fila();
    bool insere(Compromisso c);
    bool insere(No* c);
    No* getPrimeiro();
    bool remove();
    Compromisso getValores();

private:
  No* primeiro;
  No* ultimo;
};

#endif // FILA_H
