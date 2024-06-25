#include "mainWindow.h"
#include "addWin.h"
#include <QLabel>
#include "ui_mainWindow.h"
#include "sensoreGrafico.h"
#include "Json/Reader.h"
#include "Json/json.h"
#include "Json/jsonFile.h"
#include "gestoreSensori.h"
#include "RandomValueGenerator.h"



void mainWindow::updateButtons(sensore* nuovoSensore)
{
    qDebug() << "updateButtons called with sensore: " << nuovoSensore->getNome();
    QPushButton* temp = nullptr;

    // Cerca se esiste già un bottone per il nuovo sensore
    for (int i = 0; i < containerLayout->count(); ++i) {
        QWidget* widget = containerLayout->itemAt(i)->widget();
        if (widget != nullptr && widget->objectName() == nuovoSensore->getNome()) {
            temp = qobject_cast<QPushButton*>(widget);
            break;
        }
    }

    // Se non esiste un bottone esistente, creane uno nuovo
    if (temp == nullptr) {
        temp = new QPushButton(nuovoSensore->getNome());
        temp->setFixedWidth(175);
        temp->setFixedHeight(75);
        containerLayout->setAlignment(Qt::AlignHCenter | Qt::AlignTop);
        temp->setObjectName(nuovoSensore->getNome()); // Imposta il nome dell'oggetto per facilitare la ricerca

        temp->setStyleSheet(
            "QPushButton {"
            "   background-color: #1abc9c;"
            "   color: white;"
            "   padding: 10px;"
            "   border-radius: 5px;"
            "}"
            "QPushButton:hover {"
            "   background-color: #16a085;"
            "}"
            "QPushButton:pressed {"
            "   background-color: #148f77;"
            "}"
            );

        containerLayout->addWidget(temp);
    }

    // Rendi visibile il bottone
    temp->setVisible(true);


   connect(temp, &QPushButton::clicked, this, [this, nuovoSensore]() {
        this->pulsanteSelezionato(nuovoSensore);
    });
    connect(temp, &QPushButton::clicked, this, [this, nuovoSensore]() {
        QString nomeSensore = nuovoSensore->getNome();
        if (!sensoriGrafici.contains(nomeSensore)) {
            // Se non esiste un grafico per questo sensore, creane uno nuovo
            sensoriGrafici[nomeSensore] = new sensoreGrafico(nuovoSensore, ui->grafico);
            chartViews[nomeSensore] = sensoriGrafici[nomeSensore]->getChartView();
            ui->grafico->layout()->addWidget(chartViews[nomeSensore]);
        }
        // Nascondi tutti i grafici
        for (auto chartView : chartViews) {
            chartView->hide();
        }
        // Mostra il grafico del sensore selezionato
        chartViews[nomeSensore]->show();
    });
}


void mainWindow::pulsanteSelezionato(sensore* sensoreScelto)
{
    qDebug() << "pulsanteSelezionato called with sensore: " << sensoreScelto->getNome();

    ui->nome_sensore->setText(sensoreScelto->getNome());
    ui->parametri->setText(sensoreScelto->getDescrizione());

    ui->nome_sensore->update(); // Forza l'aggiornamento della QLabel
    ui->parametri->update();

    // Aggiorna il widget genitore
    if (ui->nome_sensore->parentWidget()) {
        ui->nome_sensore->parentWidget()->update();
    }
    if (ui->parametri->parentWidget()) {
        ui->parametri->parentWidget()->update();
    }
    sensoreSelezionato=sensoreScelto;
}

mainWindow::mainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{

    ui->setupUi(this);
    ui->parametri->setFixedWidth(600);



    gestore = new gestoreSensori();

    QWidget* containerWidget = new QWidget();
    containerLayout = new QVBoxLayout();
    containerLayout->setAlignment(Qt::AlignHCenter | Qt::AlignTop);
    containerWidget->setLayout(containerLayout);



    QScrollArea* scroll_area = new QScrollArea();
    scroll_area->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    scroll_area->setVerticalScrollBarPolicy(Qt::ScrollBarAsNeeded);
    scroll_area->setWidgetResizable(true);
    scroll_area->setFixedWidth(210);
    scroll_area->setWidget(containerWidget);




    if (!ui->lista->layout()) {
        ui->lista->setLayout(new QVBoxLayout());
    }
    ui->lista->setFixedWidth(220);
     ui->lista->layout()->addWidget(scroll_area);


     connect(gestore, &gestoreSensori::sensorAggiunto, this, &mainWindow::updateButtons);


     nome_sensore = new QLabel;
     parametri = new QLabel;

     // Aggiungi nome_sensore al layout del QFrame "primo"
     if (ui->primo->layout()) {
         ui->primo->layout()->addWidget(nome_sensore);
     } else {
         QVBoxLayout* primoLayout = new QVBoxLayout();
         primoLayout->addWidget(nome_sensore);
         ui->primo->setLayout(primoLayout);
     }

     // Aggiungi parametri al layout del QFrame "descrizione"
     if (ui->descrizione->layout()) {
         ui->descrizione->layout()->addWidget(parametri);
     } else {
         QVBoxLayout* descrizioneLayout = new QVBoxLayout();
         descrizioneLayout->addWidget(parametri);
         ui->descrizione->setLayout(descrizioneLayout);
     }

}
mainWindow::~mainWindow()
{
    delete ui;
}



void mainWindow::on_Find_textChanged(const QString &searchText)
{
    // Nascondi tutti i bottoni esistenti
    for (int i = 0; i < containerLayout->count(); ++i) {
        QWidget* widget = containerLayout->itemAt(i)->widget();
        if (widget != nullptr) {
            widget->setVisible(false);
        }
    }

    QVector<sensore*> needToWidget = gestore->getSensori();
    for (auto p = needToWidget.begin(); p != needToWidget.end(); p++) {
        QPushButton* temp = nullptr;

        // Cerca un bottone esistente con lo stesso nome del sensore
        for (int i = 0; i < containerLayout->count(); ++i) {
            QWidget* widget = containerLayout->itemAt(i)->widget();
            if (widget != nullptr && widget->objectName() == (*p)->getNome()) {
                temp = qobject_cast<QPushButton*>(widget);
                break;
            }
        }

        // Se il testo di ricerca è vuoto o il nome del sensore contiene il testo di ricerca (senza distinzione tra maiuscole e minuscole)
        if (temp && (searchText.isEmpty() || temp->text().contains(searchText, Qt::CaseInsensitive))) {
            temp->setVisible(true);
        }
    }
}
void mainWindow::on_actionQuit_triggered()
{
    qApp->exit();
}


void mainWindow::on_Add_clicked()
{
     qInfo() << "sono dentro";
    // Crea un oggetto della finestra AddWin
    addWin *addForm = new addWin(this, gestore);


    // Mostra la finestra AddWin
    addForm->show();
}



void mainWindow::on_actionSave_triggered()
{

    QString path = QFileDialog::getSaveFileName(
        this,
        "Creates new JSON",
        "./",
        "JSON files *.json"
        );
    if (path.isEmpty()) {
        return;
    }
    if(!path.contains(".json")){
        path.append(".json");
    }

    Reader reader;
    Json converter(reader);
    jsonFile filejson(path, converter);
    filejson.store(gestore->getSensori());
}




void mainWindow::on_simula_clicked()
{
    if (sensoreSelezionato == nullptr) {
        return;
    }

    QString nomeSensore = sensoreSelezionato->getNome();

    if (sensoriGrafici.contains(nomeSensore)) {
        sensoriGrafici[nomeSensore]->updateChartWithNewData();
    } else {
        sensoreGrafico* nuovoGrafico = new sensoreGrafico(sensoreSelezionato, ui->grafico);
        sensoriGrafici[nomeSensore] = nuovoGrafico;
        chartViews[nomeSensore] = nuovoGrafico->getChartView();

        // Rimuovi il vecchio grafico dal layout
        QLayoutItem* item;
        while ((item = ui->grafico->layout()->takeAt(0)) != nullptr) {
            item->widget()->hide();
            delete item;
        }

        // Aggiungi il nuovo grafico al layout
        ui->grafico->layout()->addWidget(chartViews[nomeSensore]);

        // Genera i dati iniziali
        nuovoGrafico->updateChartWithNewData();
    }

    // Nascondi tutti i grafici
    for (auto chartView : chartViews) {
        chartView->hide();
    }
    // Mostra il grafico del sensore selezionato
    chartViews[nomeSensore]->show();
}






