#ifndef SPRAVKA_H
#define SPRAVKA_H

#include <QDialog>

namespace Ui {
class spravka;
}

class spravka : public QDialog
{
    Q_OBJECT

public:
    explicit spravka(QWidget *parent = nullptr);
    ~spravka();

private slots:
    void on_pushButton_clicked();

private:
    Ui::spravka *ui;
};

#endif // SPRAVKA_H
