/********************************************************************************
** Form generated from reading UI file 'otchet.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_OTCHET_H
#define UI_OTCHET_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_otchet
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *zag30;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout_3;
    QLabel *zag31;
    QLineEdit *soobOTCH;
    QHBoxLayout *horizontalLayout;
    QLabel *zag32;
    QLineEdit *impolOTCH;
    QHBoxLayout *horizontalLayout_2;
    QLabel *zag33;
    QLineEdit *dataotch;
    QSpacerItem *verticalSpacer_3;
    QHBoxLayout *horizontalLayout_4;
    QPushButton *otprOTCH;

    void setupUi(QDialog *otchet)
    {
        if (otchet->objectName().isEmpty())
            otchet->setObjectName(QString::fromUtf8("otchet"));
        otchet->resize(400, 300);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/img/Quentin/F093.ico"), QSize(), QIcon::Normal, QIcon::On);
        otchet->setWindowIcon(icon);
        verticalLayout = new QVBoxLayout(otchet);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        zag30 = new QLabel(otchet);
        zag30->setObjectName(QString::fromUtf8("zag30"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Maximum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(zag30->sizePolicy().hasHeightForWidth());
        zag30->setSizePolicy(sizePolicy);
        QFont font;
        font.setFamily(QString::fromUtf8("MS Serif"));
        font.setPointSize(9);
        zag30->setFont(font);

        verticalLayout->addWidget(zag30);

        verticalSpacer = new QSpacerItem(20, 15, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout->addItem(verticalSpacer);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        zag31 = new QLabel(otchet);
        zag31->setObjectName(QString::fromUtf8("zag31"));
        QFont font1;
        font1.setFamily(QString::fromUtf8("MS Serif"));
        font1.setPointSize(8);
        zag31->setFont(font1);

        horizontalLayout_3->addWidget(zag31);

        soobOTCH = new QLineEdit(otchet);
        soobOTCH->setObjectName(QString::fromUtf8("soobOTCH"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Minimum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(soobOTCH->sizePolicy().hasHeightForWidth());
        soobOTCH->setSizePolicy(sizePolicy1);
        soobOTCH->setFont(font1);

        horizontalLayout_3->addWidget(soobOTCH);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        zag32 = new QLabel(otchet);
        zag32->setObjectName(QString::fromUtf8("zag32"));
        zag32->setFont(font1);

        horizontalLayout->addWidget(zag32);

        impolOTCH = new QLineEdit(otchet);
        impolOTCH->setObjectName(QString::fromUtf8("impolOTCH"));
        sizePolicy1.setHeightForWidth(impolOTCH->sizePolicy().hasHeightForWidth());
        impolOTCH->setSizePolicy(sizePolicy1);
        impolOTCH->setFont(font1);

        horizontalLayout->addWidget(impolOTCH);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        zag33 = new QLabel(otchet);
        zag33->setObjectName(QString::fromUtf8("zag33"));
        QSizePolicy sizePolicy2(QSizePolicy::Maximum, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(zag33->sizePolicy().hasHeightForWidth());
        zag33->setSizePolicy(sizePolicy2);
        zag33->setFont(font1);

        horizontalLayout_2->addWidget(zag33);

        dataotch = new QLineEdit(otchet);
        dataotch->setObjectName(QString::fromUtf8("dataotch"));
        QSizePolicy sizePolicy3(QSizePolicy::Maximum, QSizePolicy::Maximum);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(dataotch->sizePolicy().hasHeightForWidth());
        dataotch->setSizePolicy(sizePolicy3);
        dataotch->setFont(font1);

        horizontalLayout_2->addWidget(dataotch);


        verticalLayout->addLayout(horizontalLayout_2);

        verticalSpacer_3 = new QSpacerItem(20, 15, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout->addItem(verticalSpacer_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        otprOTCH = new QPushButton(otchet);
        otprOTCH->setObjectName(QString::fromUtf8("otprOTCH"));
        QSizePolicy sizePolicy4(QSizePolicy::Minimum, QSizePolicy::Maximum);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(otprOTCH->sizePolicy().hasHeightForWidth());
        otprOTCH->setSizePolicy(sizePolicy4);
        otprOTCH->setFont(font);
        otprOTCH->setStyleSheet(QString::fromUtf8("color:green;\n"
""));

        horizontalLayout_4->addWidget(otprOTCH);


        verticalLayout->addLayout(horizontalLayout_4);


        retranslateUi(otchet);

        QMetaObject::connectSlotsByName(otchet);
    } // setupUi

    void retranslateUi(QDialog *otchet)
    {
        otchet->setWindowTitle(QCoreApplication::translate("otchet", "\320\236\321\202\321\207\320\265\321\202", nullptr));
        zag30->setText(QCoreApplication::translate("otchet", "<html><head/><body><p align=\"center\"><span style=\" color:#007100;\">\320\237\320\220\320\240\320\220\320\234\320\225\320\242\320\240\320\253 \320\236\320\242\320\237\320\240\320\220\320\222\320\233\320\225\320\235\320\230\320\225 \320\236\320\242\320\247\320\225\320\242\320\220</span></p></body></html>", nullptr));
        zag31->setText(QCoreApplication::translate("otchet", "<html><head/><body><p align=\"center\">\320\235\320\220\320\237\320\230\320\250\320\230\320\242\320\225 \320\241\320\236\320\236\320\221\320\251\320\225\320\235\320\230\320\225 \320\236</p><p align=\"center\">\320\237\320\240\320\236\320\224\320\225\320\233\320\220\320\235\320\235\320\236\320\231 \320\240\320\220\320\221\320\236\320\242\320\225</p></body></html>", nullptr));
        zag32->setText(QCoreApplication::translate("otchet", "<html><head/><body><p align=\"center\">\320\222\320\222\320\225\320\224\320\230\320\242\320\225 \320\230\320\234\320\257 </p><p align=\"center\">\320\237\320\236\320\233\320\254\320\227\320\236\320\222\320\220\320\242\320\225\320\233\320\257</p></body></html>", nullptr));
        zag33->setText(QCoreApplication::translate("otchet", "<html><head/><body><p align=\"center\">\320\222\320\222\320\225\320\224\320\230\320\242\320\225 \320\224\320\220\320\242\320\243 \320\236\320\242\320\237\320\240\320\220\320\222\320\233\320\225\320\235\320\230\320\257</p><p align=\"center\"> \320\241\320\236\320\236\320\221\320\251\320\225\320\235\320\230\320\257</p></body></html>", nullptr));
        otprOTCH->setText(QCoreApplication::translate("otchet", "\320\236\320\242\320\237\320\240\320\220\320\222\320\230\320\242\320\254", nullptr));
    } // retranslateUi

};

namespace Ui {
    class otchet: public Ui_otchet {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_OTCHET_H
