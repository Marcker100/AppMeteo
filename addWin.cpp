#include "addWin.h"
#include "sensoreTemp.h"
#include "sensorePolveri.h"
#include "sensoreUmid.h"
#include "sensorePressione.h"
#include "sensoreUv.h"
#include "ui_addWin.h"
#include "gestoreSensori.h"
#include "sensore.h"

addWin::addWin(QWidget *parent, gestoreSensori *gestore)
    : QDialog(parent), ui(new Ui::Dialog), gestore(gestore)
{
    ui->setupUi(this);

    connect(ui->buttonBox, &QDialogButtonBox::rejected, this, &addWin::on_buttonBox_rejected);
    connect(ui->buttonBox, &QDialogButtonBox::accepted, this, &addWin::on_buttonBox_accepted);
}

addWin::~addWin() {
    delete ui;
}

void addWin::on_buttonBox_accepted() {
    QString descrizione = ui->descrizione->text();
    QString nome = ui->nome_2->text();
    QString id = ui->spinBox->text();
    int pos = ui->scelta->currentIndex();
    QVector<double> dati;

    sensore *temp = nullptr;

    switch (pos) {
    case 0: temp = new sensorePolveri(nome, id, descrizione, dati); break;
    case 1: temp = new sensorePressione(nome, id, descrizione, dati); break;
    case 2: temp = new sensoreTemp(nome, id, descrizione, dati); break;
    case 3: temp = new sensoreUmid(nome, id, descrizione, dati); break;
    case 4: temp = new sensoreUv(nome, id, descrizione, dati); break;
    }

    if (temp) {
        gestore->addSens(temp);
        emit gestore->sensorAggiunto(temp);
    }

    this->close();
}

void addWin::on_buttonBox_rejected() {
    this->close();
}
