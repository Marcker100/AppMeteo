#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include "gestoreSensori.h"
#include "sensore.h"
#include "sensoreGrafico.h"
#include "ui_mainWindow.h"
#include "addWin.h"

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


    void on_Add_clicked();

private:
    Ui::MainWindow *ui;
    gestoreSensori gestore;
    sensore* sensoreSelezionato=nullptr;
    QMap<sensore*, QPushButton*> mappaSens;
    QMap<sensore*, sensoreGrafico*> mappaGrafici;
    AddWin *mAddWindow;

};
#endif // MAINWINDOW_H
