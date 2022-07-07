#include "sspravkapol.h"
#include "ui_sspravkapol.h"

sspravkapol::sspravkapol(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::sspravkapol)
{
    ui->setupUi(this);
}

sspravkapol::~sspravkapol()
{
    delete ui;
}
