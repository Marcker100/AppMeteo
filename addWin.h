// addWin.h

#ifndef ADDWIN_H
#define ADDWIN_H

#include <QWidget> // Includi gli header necessari per la tua classe
#include <QMainWindow>
#include "gestoreSensori.h"
#include "ui_addWin.h"

QT_BEGIN_NAMESPACE
namespace Ui {
class addWin;
}
QT_END_NAMESPACE

class addWin : public QMainWindow
{
    Q_OBJECT
public:
    explicit addWin(QWidget *parent = nullptr, gestoreSensori *gestore = nullptr);
    ~addWin();
private:
    Ui::Dialog *ui;
    gestoreSensori *gestore;

signals:

public slots:
              // Aggiungi qui i tuoi metodi pubblici o slot personalizzati
private slots:
    void on_buttonBox_accepted();
    void on_buttonBox_rejected();
};

#endif // ADDWIN_H
