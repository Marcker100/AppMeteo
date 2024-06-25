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
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QSpinBox>

QT_BEGIN_NAMESPACE

class Ui_Dialog
{
public:
    QFormLayout *formLayout;
    QLabel *id;
    QLabel *tipo;
    QComboBox *scelta;
    QLabel *descr;
    QLineEdit *descrizione;
    QDialogButtonBox *buttonBox;
    QLabel *nome;
    QLineEdit *nome_2;
    QSpinBox *spinBox;

    void setupUi(QDialog *Dialog)
    {
        if (Dialog->objectName().isEmpty())
            Dialog->setObjectName("Dialog");
        Dialog->resize(624, 230);
        formLayout = new QFormLayout(Dialog);
        formLayout->setObjectName("formLayout");
        id = new QLabel(Dialog);
        id->setObjectName("id");

        formLayout->setWidget(1, QFormLayout::LabelRole, id);

        tipo = new QLabel(Dialog);
        tipo->setObjectName("tipo");

        formLayout->setWidget(2, QFormLayout::LabelRole, tipo);

        scelta = new QComboBox(Dialog);
        scelta->addItem(QString());
        scelta->addItem(QString());
        scelta->addItem(QString());
        scelta->addItem(QString());
        scelta->addItem(QString());
        scelta->setObjectName("scelta");

        formLayout->setWidget(2, QFormLayout::FieldRole, scelta);

        descr = new QLabel(Dialog);
        descr->setObjectName("descr");

        formLayout->setWidget(3, QFormLayout::LabelRole, descr);

        descrizione = new QLineEdit(Dialog);
        descrizione->setObjectName("descrizione");

        formLayout->setWidget(3, QFormLayout::FieldRole, descrizione);

        buttonBox = new QDialogButtonBox(Dialog);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        formLayout->setWidget(4, QFormLayout::FieldRole, buttonBox);

        nome = new QLabel(Dialog);
        nome->setObjectName("nome");

        formLayout->setWidget(0, QFormLayout::LabelRole, nome);

        nome_2 = new QLineEdit(Dialog);
        nome_2->setObjectName("nome_2");

        formLayout->setWidget(0, QFormLayout::FieldRole, nome_2);

        spinBox = new QSpinBox(Dialog);
        spinBox->setObjectName("spinBox");

        formLayout->setWidget(1, QFormLayout::FieldRole, spinBox);


        retranslateUi(Dialog);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, Dialog, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, Dialog, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(Dialog);
    } // setupUi

    void retranslateUi(QDialog *Dialog)
    {
        Dialog->setWindowTitle(QCoreApplication::translate("Dialog", "Dialog", nullptr));
        id->setText(QCoreApplication::translate("Dialog", "id:", nullptr));
        tipo->setText(QCoreApplication::translate("Dialog", "Tipo sensore:", nullptr));
        scelta->setItemText(0, QCoreApplication::translate("Dialog", "Polveri Sottili", nullptr));
        scelta->setItemText(1, QCoreApplication::translate("Dialog", "Pressione Atmosferica", nullptr));
        scelta->setItemText(2, QCoreApplication::translate("Dialog", "Temperatura", nullptr));
        scelta->setItemText(3, QCoreApplication::translate("Dialog", "Umidit\303\240", nullptr));
        scelta->setItemText(4, QCoreApplication::translate("Dialog", "Raggi UV", nullptr));

        descr->setText(QCoreApplication::translate("Dialog", "Descrizione:", nullptr));
        nome->setText(QCoreApplication::translate("Dialog", "Nome:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Dialog: public Ui_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDWIN_H
