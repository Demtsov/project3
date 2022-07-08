#include "glavnoeokno.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    GLAVNOEOKNO w;
    w.show();
    return a.exec();
}
