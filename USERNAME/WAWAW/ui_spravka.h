/********************************************************************************
** Form generated from reading UI file 'spravka.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SPRAVKA_H
#define UI_SPRAVKA_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_spravka
{
public:
    QLabel *label;
    QPushButton *pushButton;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;

    void setupUi(QDialog *spravka)
    {
        if (spravka->objectName().isEmpty())
            spravka->setObjectName(QString::fromUtf8("spravka"));
        spravka->resize(747, 504);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/img/Quentin/F002.ico"), QSize(), QIcon::Normal, QIcon::On);
        spravka->setWindowIcon(icon);
        spravka->setStyleSheet(QString::fromUtf8("background-color: rgb(243, 255, 244);"));
        label = new QLabel(spravka);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(440, 40, 291, 391));
        QFont font;
        font.setFamily(QString::fromUtf8("MS Serif"));
        font.setPointSize(12);
        label->setFont(font);
        pushButton = new QPushButton(spravka);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(570, 420, 161, 61));
        QFont font1;
        font1.setFamily(QString::fromUtf8("MS Serif"));
        font1.setPointSize(11);
        pushButton->setFont(font1);
        pushButton->setStyleSheet(QString::fromUtf8("color:green;"));
        label_2 = new QLabel(spravka);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(240, 90, 181, 191));
        label_2->setPixmap(QPixmap(QString::fromUtf8(":/img/img/2022-07-01_01-50-10.png")));
        label_3 = new QLabel(spravka);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(10, 30, 141, 151));
        label_3->setPixmap(QPixmap(QString::fromUtf8(":/img/img/2022-07-01_01-50-44.png")));
        label_4 = new QLabel(spravka);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(250, 310, 161, 171));
        label_4->setPixmap(QPixmap(QString::fromUtf8(":/img/img/2022-07-01_01-58-55.png")));
        label_5 = new QLabel(spravka);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(50, 160, 261, 201));
        label_5->setPixmap(QPixmap(QString::fromUtf8(":/img/img/2022-07-01_01-55-12.png")));
        label_6 = new QLabel(spravka);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(0, 330, 181, 141));
        label_6->setPixmap(QPixmap(QString::fromUtf8(":/img/img/2022-07-01_01-52-01.png")));
        label_7 = new QLabel(spravka);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(80, 10, 601, 21));
        QFont font2;
        font2.setFamily(QString::fromUtf8("MS Serif"));
        font2.setPointSize(9);
        label_7->setFont(font2);

        retranslateUi(spravka);
        QObject::connect(pushButton, SIGNAL(clicked()), spravka, SLOT(close()));

        QMetaObject::connectSlotsByName(spravka);
    } // setupUi

    void retranslateUi(QDialog *spravka)
    {
        spravka->setWindowTitle(QCoreApplication::translate("spravka", "\320\241\320\277\321\200\320\260\320\262\320\272\320\260", nullptr));
        label->setText(QCoreApplication::translate("spravka", "<html><head/><body><p>\320\225\321\201\320\273\320\270 \321\200\320\265\321\210\320\270\321\210\321\214,</p><p>\320\234\320\276\320\266\320\265\321\210\321\214 \321\202\321\213 \321\201\321\202\320\260\321\202\321\214,</p><p>\320\236\320\264\320\275\320\276\320\271 \320\270\320\267 \320\275\320\260\321\201.</p><p>\320\222\320\270\320\275\320\272\321\201, \321\202\320\276\320\273\321\214\320\272\320\276 \320\262\320\274\320\265\321\201\321\202\320\265 \320\274\321\213 \321\201\320\270\320\273\321\214\320\275\321\213,</p><p>\320\247\321\203\320\264\320\265\321\201\320\260 \321\202\320\262\320\276\321\200\320\270\321\202\321\214 \320\262\320\276\320\273\321\214\320\275\321\213,</p><p>\320\230 \320\262\321\201\320\265\320\263\320\264\320\260 \321\203\321\201\321\202\321\200\320\265\320\274\320\273\320\265\320\275\321\213</p><p>\320\232 \320\277\320\276\320\261\320\265\320\264\320\265.</p><p>\320\222\320\270\320\275\320\272\321\201, \320\262\320\276\320\273\321\210\320\265\320\261\321\201\321\202\320\262\321\203 \321"
                        "\203 \320\275\320\260\321\201 \321\203\321\207\320\270\321\201\321\214,</p><p>\320\234\321\213\321\201\320\273\321\217\320\274 \320\264\320\276\320\261\321\200\321\213\320\274 \321\203\320\273\321\213\320\261\320\275\320\270\321\201\321\214,</p><p>\320\221\320\265\320\267 \320\276\320\263\320\273\321\217\320\264\320\272\320\270 \320\262 \320\277\321\203\321\202\321\214 \320\277\321\203\321\201\321\202\320\270\321\201\321\214,</p><p>\320\232\320\260\320\272 \320\262\320\265\321\202\320\265\321\200.</p></body></html>", nullptr));
        pushButton->setText(QCoreApplication::translate("spravka", "\320\247\320\220\320\236-\320\232\320\220\320\232\320\220\320\236!", nullptr));
        label_2->setText(QString());
        label_3->setText(QString());
        label_4->setText(QString());
        label_5->setText(QString());
        label_6->setText(QString());
        label_7->setText(QCoreApplication::translate("spravka", "<html><head/><body><p><span style=\" color:#008600;\">\320\224\320\220\320\235\320\235\320\220\320\257 \320\221\320\220\320\227\320\220 \320\224\320\220\320\235\320\235\320\253\320\245 \320\221\320\253\320\233\320\220 \320\241\320\236\320\227\320\224\320\220\320\235\320\220 \320\255\320\242\320\230\320\234\320\230 \320\236\320\242\320\250\320\225\320\233\320\254\320\235\320\230\320\232\320\220\320\234\320\230</span></p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class spravka: public Ui_spravka {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SPRAVKA_H
