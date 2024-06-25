#include "addWin.h"
#include "sensoreTemp.h"
#include "sensorePolveri.h"
#include "sensoreUmid.h"
#include "sensorePressione.h"
#include "sensoreUv.h"
#include "ui_addWin.h"
#include "gestoreSensori.h"
#include "sensore.h"
addWin::addWin(QWidget *parent, gestoreSensori *gestore) : QMainWindow(parent), gestore(gestore)
{
    QDialog *dialog = new QDialog;
    ui = new Ui::Dialog;
    ui->setupUi(dialog);
    setCentralWidget(dialog);
    resize(500, 300);
    connect(ui->buttonBox, &QDialogButtonBox::rejected, this, &addWin::on_buttonBox_rejected);
    connect(ui->buttonBox, &QDialogButtonBox::accepted, this, &addWin::on_buttonBox_accepted);
}
addWin::~addWin()
{
    delete ui;
}


void addWin::on_buttonBox_accepted()
{
    QString descrizione, nome, id;
    int pos;
    QVector<double> dati;


    qDebug()<<"sono accetatto";

    id = ui->spinBox->text();
    descrizione = ui->descrizione->text();
    nome = ui->nome_2->text();
    pos = ui->scelta->currentIndex();

    sensore *temp;

    if(pos == 0)  temp = new sensorePolveri(nome,id,descrizione,dati);
    else if(pos ==1)  temp = new sensorePressione(nome,id,descrizione,dati);
    else if(pos ==2)  temp = new sensoreTemp(nome,id,descrizione,dati);
    else if(pos ==3)  temp = new sensoreUmid(nome,id,descrizione,dati);
    else if(pos ==4)  temp = new sensoreUv(nome,id,descrizione,dati);

    qDebug()<<"pos: "<<pos;

    gestore->addSens(temp);

    emit gestore->sensorAggiunto(temp);

    this->close();

}


void addWin::on_buttonBox_rejected()
{
    qDebug()<<"sono negro";



    this->close();

}

