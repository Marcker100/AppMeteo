/********************************************************************************
** Form generated from reading UI file 'addWin.ui'
**
** Created by: Qt User Interface Compiler version 6.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDWIN_H
#define UI_ADDWIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>

QT_BEGIN_NAMESPACE

class Ui_Dialog
{
public:
    QDialogButtonBox *buttonBox;
    QComboBox *scelta;

    void setupUi(QDialog *Dialog)
    {
        if (Dialog->objectName().isEmpty())
            Dialog->setObjectName("Dialog");
        Dialog->resize(682, 441);
        buttonBox = new QDialogButtonBox(Dialog);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setGeometry(QRect(320, 400, 341, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        scelta = new QComboBox(Dialog);
        scelta->addItem(QString());
        scelta->addItem(QString());
        scelta->addItem(QString());
        scelta->addItem(QString());
        scelta->addItem(QString());
        scelta->setObjectName("scelta");
        scelta->setGeometry(QRect(70, 80, 131, 24));

        retranslateUi(Dialog);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, Dialog, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, Dialog, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(Dialog);
    } // setupUi

    void retranslateUi(QDialog *Dialog)
    {
        Dialog->setWindowTitle(QCoreApplication::translate("Dialog", "Dialog", nullptr));
        scelta->setItemText(0, QCoreApplication::translate("Dialog", "Polveri Sottili", nullptr));
        scelta->setItemText(1, QCoreApplication::translate("Dialog", "Pressione Atmosferica", nullptr));
        scelta->setItemText(2, QCoreApplication::translate("Dialog", "Temperatura", nullptr));
        scelta->setItemText(3, QCoreApplication::translate("Dialog", "Umidit\303\240", nullptr));
        scelta->setItemText(4, QCoreApplication::translate("Dialog", "Raggi UV", nullptr));

    } // retranslateUi

};

namespace Ui {
    class Dialog: public Ui_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDWIN_H
