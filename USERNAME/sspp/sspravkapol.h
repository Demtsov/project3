#ifndef SSPRAVKAPOL_H
#define SSPRAVKAPOL_H

#include <QDialog>

namespace Ui {
class sspravkapol;
}

class sspravkapol : public QDialog
{
    Q_OBJECT

public:
    explicit sspravkapol(QWidget *parent = nullptr);
    ~sspravkapol();

private:
    Ui::sspravkapol *ui;
};

#endif // SSPRAVKAPOL_H
