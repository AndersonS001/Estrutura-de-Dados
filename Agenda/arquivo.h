#ifndef ARQUIVO_H
#define ARQUIVO_H
#include <fstream>
#include<QString>
#include<ldde.h>
#include<fila.h>
#include<no.h>

class Arquivo
{
public:
    Arquivo();
    bool criaArquivo();
    QString leDadosInseridosArquivo();
    void insereArquivo(Iterador& c, int i);
    void insereArquivo(Compromisso c, int i);
  //  vector<Compromisso> buscaArquivo();
    Fila buscaArquivo();
    void arquivoLimpo();
    No* atual;
    No* obtemAtual();

    std::fstream file;
};

#endif // ARQUIVO_H
