#include "sensorePressione.h"

sensorePressione::sensorePressione(const QString &nome,const QString &id,const QString &descrizione, QVector<double> &pressione)
    : sensore(nome,id,descrizione), pressione(pressione) {}

/*void sensorUmidita::accept(SensorVisitor& visitor, QPushButton* button, int& codiceU) {
    visitor.visit(*this, button, codiceU);
}*/

QVector<double> sensorePressione::getPressione() const { return pressione; }







