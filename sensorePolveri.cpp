#include "sensorePolveri.h"

sensorePolveri::sensorePolveri(const QString &nome,const QString &id,const QString &descrizione, QVector<double> &concentrazione)
    : sensore(nome,id,descrizione), concentrazione(concentrazione) {}

void sensorePolveri::accept(sensoreVisitor& visitor) {
    visitor.visit(*this);
}
void sensorePolveri::accept(sensoreVisitorConst& visitor ) const {
    visitor.visit(*this);
}

void sensorePolveri::setData(QVector<double> v){
    concentrazione = v;
}

QVector<double> sensorePolveri::getConcentrazione() const { return concentrazione; }
