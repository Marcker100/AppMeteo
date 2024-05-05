#include "sensorePressione.h"

sensorePressione::sensorePressione(const QString &nome,const QString &id,const QString &descrizione, QVector<double> &pressione)
    : sensore(nome,id,descrizione), pressione(pressione) {}

void sensorePressione::accept(sensoreVisitor& visitor) {
    visitor.visit(*this);
}
void sensorePressione::accept(sensoreVisitorConst& visitor ) const {
    visitor.visit(*this);
}
QVector<double> sensorePressione::getPressione() const { return pressione; }







