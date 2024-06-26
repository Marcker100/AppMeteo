#include "modwin.h"
#include "ui_modwin.h"
#include "gestoreSensori.h"
#include "sensore.h"
#include <QMessageBox>

modWin::modWin(QWidget *parent, sensore* sensoreSelezionato, gestoreSensori *gestore)
    : QDialog(parent)
    , ui(new Ui::modWin), sensoreSelezionato(sensoreSelezionato), gestore(gestore)
{
    ui->setupUi(this);
    connect(ui->buttonBox, &QDialogButtonBox::rejected, this, &modWin::on_buttonBox_rejected);
    connect(ui->buttonBox, &QDialogButtonBox::accepted, this, &modWin::on_buttonBox_accepted);

    // Inizializza i campi con i valori attuali del sensore
    if (sensoreSelezionato) {
        ui->nome->setText(sensoreSelezionato->getNome());
        ui->desc->setText(sensoreSelezionato->getDescrizione());
    }
}

modWin::~modWin()
{
    delete ui;
}

void modWin::on_buttonBox_accepted() {
    QString nuovoNome = ui->nome->text();
    QString nuovaDesc = ui->desc->text();

    if (!nuovoNome.isEmpty() && !nuovaDesc.isEmpty()) {
        sensoreSelezionato->setNome(nuovoNome);
        sensoreSelezionato->setDescrizione(nuovaDesc);

        gestore->modificaSensore(sensoreSelezionato);
        emit sensoreModificato(sensoreSelezionato);
        qDebug() << "Sensore modificato: " << nuovoNome;
        accept();
    } else {
        QMessageBox::warning(this, "Errore", "Tutti i campi devono essere compilati.");
    }
}

void modWin::on_buttonBox_rejected() {
    reject();
}
