#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include "gestoreSensori.h"
#include "sensore.h"
#include "sensoreGrafico.h"
#include "ui_mainWindow.h"
#include "addWin.h"
#include <QtCharts/QChartView>
#include <QtCharts/QLineSeries>

#include <QMainWindow>
#include <QMap>
#include <QPushButton>

QT_BEGIN_NAMESPACE
namespace Ui {
class mainWindow;
}
QT_END_NAMESPACE

class mainWindow : public QMainWindow
{
    Q_OBJECT

public:
    mainWindow(QWidget *parent = nullptr);
    ~mainWindow();

private slots:

    void on_Find_textChanged(const QString &arg1);
    void on_actionQuit_triggered();

    void updateButtons(sensore* nuovoSensore);
    void on_Add_clicked();

    void on_actionSave_triggered();

    void pulsanteSelezionato(sensore* sensoreScelto);


    void on_simula_clicked();

    void on_modifica_clicked();

    void updateUI();

    void on_cancella_clicked();

    void on_actionLoad_triggered();

private:
    QLabel *nome_sensore;
    QLabel *parametri;

    Ui::MainWindow *ui;
    gestoreSensori *gestore;
    sensore* sensoreSelezionato=nullptr;
    QMap<sensore*, QPushButton*> mappaSens;
    QMap<QString, sensoreGrafico*> sensoriGrafici;
    QMap<QString, QChartView*> chartViews;
    addWin *mAddWindow;
    QVBoxLayout* containerLayout;

};
#endif // MAINWINDOW_H
