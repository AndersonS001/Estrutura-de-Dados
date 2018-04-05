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
    Compromisso remove();
    int size();
    bool filaVazia();

private:
  No* primeiro;
  No* ultimo;
  Compromisso getValores();

  int n;
};

#endif // FILA_H
