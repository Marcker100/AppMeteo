#include "sensoreTemp.h"

sensoreTemp::sensoreTemp(const QString &nome,const QString &id,const QString &descrizione, QVector<double> &temperatura)
    : sensore(nome,id,descrizione), temperatura(temperatura) {}

void sensoreTemp::accept(sensoreVisitor& visitor) {
    visitor.visit(*this);
}
void sensoreTemp::accept(sensoreVisitorConst& visitor ) const {
    visitor.visit(*this);

void sensoreTemp::setData(QVector<double> v){
    temperatura = v;
}
    
}
QVector<double> sensoreTemp::getTemperatura() const { return temperatura; }





