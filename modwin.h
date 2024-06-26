#ifndef MODWIN_H
#define MODWIN_H

#include <QDialog>

namespace Ui {
class modWin;
}

class sensore;
class gestoreSensori;

class modWin : public QDialog
{
    Q_OBJECT

public:
    explicit modWin(QWidget *parent = nullptr, sensore* sensoreSelezionato = nullptr, gestoreSensori *gestore = nullptr);
    ~modWin();

signals:
    void sensoreModificato(sensore* sensore);

private slots:
    void on_buttonBox_accepted();
    void on_buttonBox_rejected();

private:
    Ui::modWin *ui;
    sensore* sensoreSelezionato;
    gestoreSensori* gestore;
};

#endif // MODWIN_H
