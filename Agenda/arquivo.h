#ifndef ARQUIVO_H
#define ARQUIVO_H
#include <fstream>
#include<QString>

class arquivo
{
public:
    arquivo();
    bool criaArquivo();
    QString leArquivo();
    void insereArquivo(Compromisso c);

    std::fstream file;
};

#endif // ARQUIVO_H
