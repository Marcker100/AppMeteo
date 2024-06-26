#ifndef ADDWIN_H
#define ADDWIN_H

#include <QDialog>

namespace Ui {
class Dialog;
}

class gestoreSensori;

class addWin : public QDialog {
    Q_OBJECT

public:
    explicit addWin(QWidget *parent = nullptr, gestoreSensori *gestore = nullptr);
    ~addWin();

private slots:
    void on_buttonBox_accepted();
    void on_buttonBox_rejected();

private:
    Ui::Dialog *ui;
    gestoreSensori *gestore;
};

#endif // ADDWIN_H
