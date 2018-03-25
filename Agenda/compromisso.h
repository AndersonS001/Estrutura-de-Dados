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
    void setQuando(const QDateTime &value);

    friend class No;
    friend class LDDE;
    friend class Agenda;
};

#endif // COMPROMISSO_H
