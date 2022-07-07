#ifndef OTCHET_H
#define OTCHET_H
#include<QDir>
#include <QDebug>
#include<QFile>
#include<QTextStream>


#include <QDialog>

namespace Ui {
class otchet;
}

class otchet : public QDialog
{
    Q_OBJECT

public:
    explicit otchet(QWidget *parent = nullptr);
    ~otchet();

private slots:

    void on_otprOTCH_clicked();

private:
    Ui::otchet *ui;
};

#endif // OTCHET_H
