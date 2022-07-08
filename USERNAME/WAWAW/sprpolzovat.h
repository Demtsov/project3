#ifndef SPRPOLZOVAT_H
#define SPRPOLZOVAT_H
#include"spravka.h"
#include"sspravkapol.h"
#include <QDialog>

namespace Ui {
class SPRPOLZOVAT;
}

class SPRPOLZOVAT : public QDialog
{
    Q_OBJECT

public:
    explicit SPRPOLZOVAT(QWidget *parent = nullptr);
    ~SPRPOLZOVAT();

private slots:
    void on_pushButton_2_clicked();

    void on_pushButton_clicked();

private:
    Ui::SPRPOLZOVAT *ui;
    spravka *t;
    sspravkapol *m;
};

#endif // SPRPOLZOVAT_H
