/********************************************************************************
** Form generated from reading UI file 'modwin.ui'
**
** Created by: Qt User Interface Compiler version 6.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MODWIN_H
#define UI_MODWIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>

QT_BEGIN_NAMESPACE

class Ui_modWin
{
public:
    QDialogButtonBox *buttonBox;
    QLineEdit *desc;
    QLabel *label_3;
    QLabel *titolo;
    QLabel *label;
    QLineEdit *nome;

    void setupUi(QDialog *modWin)
    {
        if (modWin->objectName().isEmpty())
            modWin->setObjectName("modWin");
        modWin->resize(400, 300);
        buttonBox = new QDialogButtonBox(modWin);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setGeometry(QRect(30, 240, 341, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        desc = new QLineEdit(modWin);
        desc->setObjectName("desc");
        desc->setGeometry(QRect(120, 120, 241, 91));
        label_3 = new QLabel(modWin);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(20, 120, 71, 16));
        titolo = new QLabel(modWin);
        titolo->setObjectName("titolo");
        titolo->setGeometry(QRect(170, 10, 61, 16));
        label = new QLabel(modWin);
        label->setObjectName("label");
        label->setGeometry(QRect(20, 60, 49, 16));
        nome = new QLineEdit(modWin);
        nome->setObjectName("nome");
        nome->setGeometry(QRect(120, 50, 113, 24));

        retranslateUi(modWin);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, modWin, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, modWin, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(modWin);
    } // setupUi

    void retranslateUi(QDialog *modWin)
    {
        modWin->setWindowTitle(QCoreApplication::translate("modWin", "Dialog", nullptr));
        label_3->setText(QCoreApplication::translate("modWin", "Descrizione", nullptr));
        titolo->setText(QCoreApplication::translate("modWin", "MODIFICA", nullptr));
        label->setText(QCoreApplication::translate("modWin", "Nome", nullptr));
    } // retranslateUi

};

namespace Ui {
    class modWin: public Ui_modWin {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MODWIN_H
