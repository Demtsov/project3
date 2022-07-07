#include "otchet.h"
#include<QMessageBox>
#include "ui_otchet.h"
#include<QDir>
#include <QDebug>
#include<QFile>
#include<QTextStream>
otchet::otchet(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::otchet)
{
    ui->setupUi(this);
}
otchet::~otchet()
{
    delete ui;
}
void otchet::on_otprOTCH_clicked()//СОЗДАНИЕ ТЕКСТОВОГО ДОКУМЕНТА И СОХРАНЕНИЕ ЕГО В ФАЙЛ
{
    QFile M("OOOOOOOOTCHET.txt");
    if(!M.open(QFile::WriteOnly | QFile::Text) ){
        QMessageBox::information(this,"ОШИБКА","НЕВОЗМОЖНО СОЗДАТЬ ");
        return;
    }
    QTextStream out(&M);
    out << "___OTCHET PRODELANNOI RABOTI____________________________"<<"\n\n";
    out <<"\t"<< ui-> soobOTCH->text() << "\n";
    out <<"\t"<< ui-> impolOTCH->text() << "\n";
    out <<"\t\t\t\t                        "<< ui-> dataotch->text() << "\n";
    out << "________________________________________________________";
    M.close();
    QMessageBox::information(this,"Отчет.","Отправление отчета успешно завершено!");
    close();
}
