#ifndef ARQUIVO_H
#define ARQUIVO_H
#include <fstream>
#include<QString>

class arquivo
{
public:
    arquivo();
    bool criaArquivo();
    QString leDadosInseridosArquivo();
    void insereArquivo(Compromisso c);
    void buscaArquivo();

    std::fstream file;
};

#endif // ARQUIVO_H
