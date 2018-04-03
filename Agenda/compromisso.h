#ifndef COMPROMISSO_H
#define COMPROMISSO_H
#include <QDateTime>
#include <QString>

class Compromisso{
private:
    QDateTime quando;
    QString descricao, titulo;

public:
    Compromisso();
    Compromisso(QDate _data,QTime _horario, QString _descricao, QString _titulo);
    Compromisso(QDateTime _quando, QString _descricao, QString _titulo);
    ~Compromisso();

    QString getTitulo() const;
    QString getDescricao() const;

    void setDescricao(const QString &value);
    void setTitulo(const QString &value);

    QDateTime getQuando() const;
    QString getData() const;
    QString getHora() const;
    void setQuando(const QDateTime &value);
    void setQuando(QDate data, QTime hora);
};

#endif // COMPROMISSO_H
