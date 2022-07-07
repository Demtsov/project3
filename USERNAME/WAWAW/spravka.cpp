#include "spravka.h"
#include "ui_spravka.h"
#include <QMessageBox>

spravka::spravka(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::spravka)
{
    ui->setupUi(this);
}

spravka::~spravka()
{
    delete ui;
}

void spravka::on_pushButton_clicked()
{

}
