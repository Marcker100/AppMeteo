#include "sensoreUv.h"

sensoreUv::sensoreUv(const QString &nome,const QString &id,const QString &descrizione, QVector<double> &uv)
    : sensore(nome,id,descrizione), uv(uv) {}

void sensoreUv::accept(sensoreVisitor& visitor) {
    visitor.visit(*this);
}
void sensoreUv::accept(sensoreVisitorConst& visitor ) const {
    visitor.visit(*this);
    
void sensoreUv::setData(QVector<double> v){
    uv = v;
}
    
}
QVector<double> sensoreUv::getUv() const { return uv; }
