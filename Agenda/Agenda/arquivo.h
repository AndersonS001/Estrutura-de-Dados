#ifndef ARQUIVO_H
#define ARQUIVO_H
#include <fstream>
#include<QString>
#include<fila.h>
#include<no.h>

class Arquivo
{
public:
    Arquivo();
    bool criaArquivo();
    QString leDadosInseridosArquivo();
    void insereArquivo(No* c);
    void insereArquivo(Compromisso c);
    vector<Compromisso> buscaArquivo();
    Fila f;
   // LDDE* lista;
    No* atual;
    No* obtemAtual();

    std::fstream file;
};

#endif // ARQUIVO_H
