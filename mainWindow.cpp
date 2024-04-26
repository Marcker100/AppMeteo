#include "mainWindow.h"
#include "addWin.h"

#include "ui_mainWindow.h"
#include "sensoreGrafico.h"


int codiceT=0,codiceU=0, codiceP=0;

mainWindow::mainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    // connect(&gestore, &gestoreSensori::sensorAggiunto, this, &mainWindow::aggiungiPulsantesensor);
    // bool connected = connect(&gestore, &gestoreSensori::sensorAggiunto, this, &mainWindow::aggiungiPulsantesensor);
    // if (!connected) {
    //     qWarning() << "CONNESSIONE FALLITA";
    // }
    QFrame *grafico= ui->grafico;
    sensoreGrafico *sensore = new sensoreGrafico("Temperatura", grafico,this);
    sensore->updateChart();

}
mainWindow::~mainWindow()
{
    delete ui;
}
void mainWindow::on_Find_textChanged(const QString &arg1)
{
    QList<QPushButton*> buttonList = this->findChildren<QPushButton*>();
    QList<QPushButton*> trova;
    QPushButton* foundButton = nullptr;
    for(QPushButton* button : buttonList) {
        button->hide();
        if(button->objectName().contains(arg1,Qt::CaseInsensitive)) {
            foundButton = button;
            trova.push_back(foundButton);
        }
    }
    for(QPushButton* button : trova){
        button->show();
    }
}
void mainWindow::on_actionQuit_triggered()
{
    qApp->exit();
}


void mainWindow::on_Add_clicked()
{
    AddWin *addForm = new AddWin(this);
    addForm->show();
}

