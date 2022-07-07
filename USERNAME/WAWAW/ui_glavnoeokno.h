/********************************************************************************
** Form generated from reading UI file 'glavnoeokno.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GLAVNOEOKNO_H
#define UI_GLAVNOEOKNO_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_GLAVNOEOKNO
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QLabel *zag0;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout;
    QLabel *zag01;
    QPushButton *doPol;
    QPushButton *udPOLZ;
    QTableView *tableView;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *otpravk;
    QPushButton *sprG;
    QPushButton *vihod;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *GLAVNOEOKNO)
    {
        if (GLAVNOEOKNO->objectName().isEmpty())
            GLAVNOEOKNO->setObjectName(QString::fromUtf8("GLAVNOEOKNO"));
        GLAVNOEOKNO->resize(860, 637);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/img/Quentin/F024.ico"), QSize(), QIcon::Normal, QIcon::On);
        GLAVNOEOKNO->setWindowIcon(icon);
        GLAVNOEOKNO->setStyleSheet(QString::fromUtf8("background-color: rgb(243, 255, 244);"));
        GLAVNOEOKNO->setToolButtonStyle(Qt::ToolButtonIconOnly);
        centralwidget = new QWidget(GLAVNOEOKNO);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        zag0 = new QLabel(centralwidget);
        zag0->setObjectName(QString::fromUtf8("zag0"));
        QFont font;
        font.setFamily(QString::fromUtf8("MS Serif"));
        font.setPointSize(11);
        zag0->setFont(font);

        verticalLayout->addWidget(zag0);

        verticalSpacer = new QSpacerItem(20, 10, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout->addItem(verticalSpacer);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        zag01 = new QLabel(centralwidget);
        zag01->setObjectName(QString::fromUtf8("zag01"));
        QFont font1;
        font1.setFamily(QString::fromUtf8("MS Serif"));
        font1.setPointSize(9);
        zag01->setFont(font1);

        horizontalLayout->addWidget(zag01);

        doPol = new QPushButton(centralwidget);
        doPol->setObjectName(QString::fromUtf8("doPol"));
        QSizePolicy sizePolicy(QSizePolicy::Maximum, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(doPol->sizePolicy().hasHeightForWidth());
        doPol->setSizePolicy(sizePolicy);
        doPol->setFont(font);

        horizontalLayout->addWidget(doPol);

        udPOLZ = new QPushButton(centralwidget);
        udPOLZ->setObjectName(QString::fromUtf8("udPOLZ"));
        udPOLZ->setFont(font1);

        horizontalLayout->addWidget(udPOLZ);


        verticalLayout->addLayout(horizontalLayout);

        tableView = new QTableView(centralwidget);
        tableView->setObjectName(QString::fromUtf8("tableView"));
        tableView->setStyleSheet(QString::fromUtf8("font: 75 10pt \"MS Sans Serif\";"));

        verticalLayout->addWidget(tableView);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        otpravk = new QPushButton(centralwidget);
        otpravk->setObjectName(QString::fromUtf8("otpravk"));
        otpravk->setEnabled(true);
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(29);
        sizePolicy1.setVerticalStretch(29);
        sizePolicy1.setHeightForWidth(otpravk->sizePolicy().hasHeightForWidth());
        otpravk->setSizePolicy(sizePolicy1);
        otpravk->setMinimumSize(QSize(29, 0));
        otpravk->setSizeIncrement(QSize(29, 0));
        otpravk->setBaseSize(QSize(29, 0));
        QFont font2;
        font2.setFamily(QString::fromUtf8("MS Serif"));
        font2.setPointSize(10);
        otpravk->setFont(font2);
        otpravk->setStyleSheet(QString::fromUtf8("\n"
"image:url(:/img/Untitled.png);"));
#if QT_CONFIG(shortcut)
        otpravk->setShortcut(QString::fromUtf8(""));
#endif // QT_CONFIG(shortcut)

        horizontalLayout_2->addWidget(otpravk);

        sprG = new QPushButton(centralwidget);
        sprG->setObjectName(QString::fromUtf8("sprG"));
        sizePolicy.setHeightForWidth(sprG->sizePolicy().hasHeightForWidth());
        sprG->setSizePolicy(sizePolicy);
        sprG->setFont(font1);

        horizontalLayout_2->addWidget(sprG);

        vihod = new QPushButton(centralwidget);
        vihod->setObjectName(QString::fromUtf8("vihod"));
        vihod->setFont(font1);
        vihod->setStyleSheet(QString::fromUtf8("color:green;\n"
""));

        horizontalLayout_2->addWidget(vihod);


        verticalLayout->addLayout(horizontalLayout_2);

        GLAVNOEOKNO->setCentralWidget(centralwidget);
        menubar = new QMenuBar(GLAVNOEOKNO);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 860, 25));
        GLAVNOEOKNO->setMenuBar(menubar);
        statusbar = new QStatusBar(GLAVNOEOKNO);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        GLAVNOEOKNO->setStatusBar(statusbar);

        retranslateUi(GLAVNOEOKNO);

        QMetaObject::connectSlotsByName(GLAVNOEOKNO);
    } // setupUi

    void retranslateUi(QMainWindow *GLAVNOEOKNO)
    {
        GLAVNOEOKNO->setWindowTitle(QCoreApplication::translate("GLAVNOEOKNO", "\320\221\320\260\320\267\320\260 \320\264\320\260\320\275\320\275\321\213\321\205 \320\277\320\276\320\273\321\214\320\267\320\276\320\262\320\260\321\202\320\265\320\273\320\265\320\271", nullptr));
        zag0->setText(QCoreApplication::translate("GLAVNOEOKNO", "<html><head/><body><p align=\"center\"><span style=\" color:#00aa00;\">\320\241\320\237\320\230\320\241\320\236\320\232 \320\237\320\236\320\233\320\254\320\227\320\236\320\222\320\220\320\242\320\225\320\233\320\225\320\231</span></p></body></html>", nullptr));
        zag01->setText(QCoreApplication::translate("GLAVNOEOKNO", "<html><head/><body><p><span style=\" color:#00aa00;\">\320\237\320\236\320\233\320\254\320\227\320\236\320\222\320\220\320\242\320\225\320\233\320\230</span></p></body></html>", nullptr));
        doPol->setText(QCoreApplication::translate("GLAVNOEOKNO", "+", nullptr));
        udPOLZ->setText(QCoreApplication::translate("GLAVNOEOKNO", "\320\243\320\224\320\220\320\233\320\225\320\235\320\230\320\225 \320\237\320\236\320\233\320\254\320\227\320\236\320\222\320\220\320\242\320\225\320\233\320\225\320\231", nullptr));
        otpravk->setText(QString());
        sprG->setText(QCoreApplication::translate("GLAVNOEOKNO", "\320\241\320\237\320\240\320\220\320\222\320\232\320\220", nullptr));
        vihod->setText(QCoreApplication::translate("GLAVNOEOKNO", "\320\222\320\253\320\245\320\236\320\224", nullptr));
    } // retranslateUi

};

namespace Ui {
    class GLAVNOEOKNO: public Ui_GLAVNOEOKNO {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GLAVNOEOKNO_H
