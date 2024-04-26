#include "sensoreUmid.h"

sensoreUmid::sensoreUmid(const QString &nome,const QString &id,const QString &descrizione, QVector<double> &umidita)
    : sensore(nome,id,descrizione), umidita(umidita) {}

/*void sensorUmid::accept(SensorVisitor& visitor, QPushButton* button, int& codiceU) {
    visitor.visit(*this, button, codiceU);
}*/

QVector<double> sensoreUmid::getUmidita() const { return umidita; }
