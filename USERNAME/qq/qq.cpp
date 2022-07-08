#include "qq.h"

Qq::Qq()
{
}
void Qq::clos(){
    qApp->quit();

}

void Qq::obn(){
    QProcess::startDetached(qApp->arguments()[0], qApp->arguments());
    qApp->quit();
}
