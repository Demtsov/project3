#ifndef GLAVNOEOKNO_H
#define GLAVNOEOKNO_H
#include"sprpolzovat.h"
#include "otchet.h"
#include <QMainWindow>
#include <QDialog>
#include<QString>
#include <QtCore>
#include <QtGui>
#include <QSqlDatabase>
#include <QDebug>
#include <QSqlQuery>
#include<QSqlTableModel>
#include"../qq/qq.h"
QT_BEGIN_NAMESPACE
namespace Ui { class GLAVNOEOKNO; }
QT_END_NAMESPACE
class GLAVNOEOKNO : public QMainWindow
{
    Q_OBJECT
public:
    GLAVNOEOKNO(QWidget *parent = nullptr);
    ~GLAVNOEOKNO();
private slots:
    void on_sprG_clicked();
    void on_udPOLZ_clicked();
    void on_doPol_clicked();
    void on_tableView_clicked(const QModelIndex &index);
    void on_otpravk_clicked();
    void on_vihod_clicked();
    void on_obnn_clicked();

private:
    Ui::GLAVNOEOKNO *ui;
    SPRPOLZOVAT *window;
    otchet *oott;
    int row; //НОМЕР СТРОКИ ТАБЛИЦЫ
    //QStandardItemModel *model;
    QSqlDatabase db;
    QSqlQuery *query;
    QSqlTableModel *model;
    Qq *o;
    Qq *p;
};
#endif // GLAVNOEOKNO_H
