#include "mainWindow.h"
#include "addWin.h"
#include "modWin.h"
#include <QLabel>
#include "ui_mainWindow.h"
#include "sensoreGrafico.h"
#include "Json/Reader.h"
#include "Json/json.h"
#include "Json/jsonFile.h"
#include "gestoreSensori.h"

void mainWindow::updateUI() {
    if (sensoreSelezionato) {
        ui->nome_sensore->setText(sensoreSelezionato->getNome());
        ui->parametri->setText(sensoreSelezionato->getDescrizione());

        // Aggiorna il pulsante corrispondente nella lista
        for (int i = 0; i < containerLayout->count(); ++i) {
            QWidget* widget = containerLayout->itemAt(i)->widget();
            if (QPushButton* button = qobject_cast<QPushButton*>(widget)) {
                if (button->property("sensore_id") == sensoreSelezionato->getId()) {
                    button->setText(sensoreSelezionato->getNome());
                    button->setObjectName(sensoreSelezionato->getNome());
                    button->update(); // Forza l'aggiornamento visuale
                    qDebug() << "Pulsante aggiornato:" << button->text() << "con ID:" << sensoreSelezionato->getId();
                    break;
                }
            }
        }

        // Aggiorna il grafico se esiste
        if (sensoriGrafici.contains(sensoreSelezionato->getId())) {
            sensoriGrafici[sensoreSelezionato->getId()]->updateChartWithNewData();
        }
    }
}

void mainWindow::updateButtons(sensore* nuovoSensore)
{
    qDebug() << "updateButtons called with sensore: " << nuovoSensore->getNome();
    QPushButton* temp = nullptr;

    // Cerca se esiste già un bottone per il sensore
    for (int i = 0; i < containerLayout->count(); ++i) {
        QWidget* widget = containerLayout->itemAt(i)->widget();
        if (widget != nullptr && widget->property("sensore_id") == nuovoSensore->getId()) {
            temp = qobject_cast<QPushButton*>(widget);
            break;
        }
    }

    // Se non esiste un bottone, creane uno nuovo
    if (temp == nullptr) {
        temp = new QPushButton(nuovoSensore->getNome());
        temp->setFixedWidth(175);
        temp->setFixedHeight(75);
        temp->setObjectName(nuovoSensore->getNome());
        temp->setProperty("sensore_id", nuovoSensore->getId());

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
    } else {
        // Se il bottone esiste già, aggiorna solo il testo
        temp->setText(nuovoSensore->getNome());
    }

    // Rendi visibile il bottone
    temp->setVisible(true);

    // Disconnetti eventuali connessioni esistenti
    temp->disconnect();

    // Crea una nuova connessione
    connect(temp, &QPushButton::clicked, this, [this, nuovoSensore]() {
        this->pulsanteSelezionato(nuovoSensore);

        QString nomeSensore = nuovoSensore->getNome();
        if (!sensoriGrafici.contains(nomeSensore)) {
            sensoriGrafici[nomeSensore] = new sensoreGrafico(nuovoSensore, ui->grafico);
            chartViews[nomeSensore] = sensoriGrafici[nomeSensore]->getChartView();
            ui->grafico->layout()->addWidget(chartViews[nomeSensore]);
        }
        for (auto chartView : chartViews) {
            chartView->hide();
        }
        chartViews[nomeSensore]->show();
    });
}

void mainWindow::pulsanteSelezionato(sensore* sensoreScelto)
{
    if (sensoreScelto) {
        sensoreSelezionato = sensoreScelto;
        ui->modifica->setEnabled(true);
        ui->nome_sensore->setText(sensoreScelto->getNome());
        ui->parametri->setText(sensoreScelto->getDescrizione());

        qDebug() << "pulsanteSelezionato: " << sensoreScelto->getNome();

        ui->nome_sensore->update();
        ui->parametri->update();

        if (ui->nome_sensore->parentWidget()) {
            ui->nome_sensore->parentWidget()->update();
        }
        if (ui->parametri->parentWidget()) {
            ui->parametri->parentWidget()->update();
        }
    } else {
        qDebug() << "Errore: sensoreScelto è nullo";
    }
}

mainWindow::mainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
    , sensoreSelezionato(nullptr)
{
    ui->setupUi(this);
    ui->parametri->setFixedWidth(600);
    ui->modifica->setEnabled(false);

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

    if (ui->primo->layout()) {
        ui->primo->layout()->addWidget(nome_sensore);
    } else {
        QVBoxLayout* primoLayout = new QVBoxLayout();
        primoLayout->addWidget(nome_sensore);
        ui->primo->setLayout(primoLayout);
    }

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
    for (int i = 0; i < containerLayout->count(); ++i) {
        QWidget* widget = containerLayout->itemAt(i)->widget();
        if (widget != nullptr) {
            widget->setVisible(false);
        }
    }

    QVector<sensore*> needToWidget = gestore->getSensori();
    for (auto p = needToWidget.begin(); p != needToWidget.end(); p++) {
        QPushButton* temp = nullptr;

        for (int i = 0; i < containerLayout->count(); ++i) {
            QWidget* widget = containerLayout->itemAt(i)->widget();
            if (widget != nullptr && widget->objectName() == (*p)->getNome()) {
                temp = qobject_cast<QPushButton*>(widget);
                break;
            }
        }

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
    addWin *addForm = new addWin(this, gestore);
    addForm->show();
}
//SAVE LOAD
void mainWindow::on_actionSave_triggered() {
    QString path = QFileDialog::getSaveFileName(
        this,
        "Creates new JSON",
        "./",
        "JSON files *.json"
        );
    if (path.isEmpty()) {
        return;
    }
    if (!path.contains(".json")) {
        path.append(".json");
    }

    gestore->saveSensoriToJson(path);
}
void mainWindow::on_actionLoad_triggered() {
    QString path = QFileDialog::getOpenFileName(
        this,
        "Open JSON",
        "./",
        "JSON files *.json"
        );
    if (path.isEmpty()) {
        return;
    }

    gestore->loadSensoriFromJson(path);
    updateUI();
}
void mainWindow::on_simula_clicked()
{
    if (sensoreSelezionato == nullptr) {
        return;
    }

    QString sensorId = sensoreSelezionato->getId();

    if (sensoriGrafici.contains(sensorId)) {
        sensoriGrafici[sensorId]->updateChartWithNewData();
    } else {
        sensoreGrafico* nuovoGrafico = new sensoreGrafico(sensoreSelezionato, ui->grafico);
        sensoriGrafici[sensorId] = nuovoGrafico;
        chartViews[sensorId] = nuovoGrafico->getChartView();

        QLayoutItem* item;
        while ((item = ui->grafico->layout()->takeAt(0)) != nullptr) {
            item->widget()->hide();
            delete item;
        }

        ui->grafico->layout()->addWidget(chartViews[sensorId]);
        nuovoGrafico->updateChartWithNewData();
    }

    for (auto chartView : chartViews) {
        chartView->hide();
    }
    chartViews[sensorId]->show();
}

void mainWindow::on_modifica_clicked() {
    if (sensoreSelezionato) {
        modWin *mod = new modWin(this, sensoreSelezionato, gestore);
        connect(mod, &modWin::sensoreModificato, this, &mainWindow::updateUI);
        if (mod->exec() == QDialog::Accepted) {
            QMessageBox::information(this, "Successo", "Valori salvati");
            updateUI();
        }
        delete mod;
    } else {
        QMessageBox::warning(this, "Errore", "Nessun sensore selezionato.");
    }
}

void mainWindow::on_cancella_clicked() {
    if (sensoreSelezionato) {
        QMessageBox::StandardButton reply;
        reply = QMessageBox::question(this, "Conferma cancellazione",
                                      "Sei sicuro di voler cancellare questo sensore?",
                                      QMessageBox::Yes|QMessageBox::No);
        if (reply == QMessageBox::Yes) {
            QString nomeSensore = sensoreSelezionato->getNome();
            QString sensorId = sensoreSelezionato->getId();

            gestore->delSens(sensoreSelezionato);

            // Rimuovi il pulsante corrispondente
            for (int i = 0; i < containerLayout->count(); ++i) {
                QWidget* widget = containerLayout->itemAt(i)->widget();
                if (QPushButton* button = qobject_cast<QPushButton*>(widget)) {
                    if (button->property("sensore_id").toString() == sensorId) {
                        containerLayout->removeWidget(button);
                        delete button;
                        break;
                    }
                }
            }

            // Rimuovi il grafico se esiste
            if (sensoriGrafici.contains(sensorId)) {
                delete sensoriGrafici[sensorId];
                sensoriGrafici.remove(sensorId);
                chartViews.remove(sensorId);
            }

            sensoreSelezionato = nullptr;
            ui->nome_sensore->clear();
            ui->parametri->clear();
            ui->modifica->setEnabled(false);

            QMessageBox::information(this, "Successo", "Sensore cancellato con successo");
        }
    } else {
        QMessageBox::warning(this, "Errore", "Nessun sensore selezionato.");
    }
}



