#include "sensoreTemp.h"

sensoreTemp::sensoreTemp(const QString &nome,const QString &id,const QString &descrizione, QVector<double> &temperatura)
    : sensore(nome,id,descrizione), temperatura(temperatura) {}

/*void sensoreTemp::accept(SensorVisitor& visitor, QPushButton* button, int& codiceT) {
    visitor.visit(*this, button, codiceT);
}*/

QVector<double> sensoreTemp::getTemperatura() const { return temperatura; }





