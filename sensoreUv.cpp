#include "sensoreUv.h"

sensoreUv::sensoreUv(const QString &nome,const QString &id,const QString &descrizione, QVector<double> &uv)
    : sensore(nome,id,descrizione), uv(uv) {}

/*void sensorUmid::accept(SensorVisitor& visitor, QPushButton* button, int& codiceU) {
    visitor.visit(*this, button, codiceU);
}*/

QVector<double> sensoreUv::getUv() const { return uv; }
