#include "agenda.h"
#include <QApplication>
#include "ldde.h"
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Agenda w;
    w.show();
    return a.exec();
}
