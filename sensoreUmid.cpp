#include "sensoreUmid.h"

sensoreUmid::sensoreUmid(const QString &nome,const QString &id,const QString &descrizione, QVector<double> &umidita)
    : sensore(nome,id,descrizione), umidita(umidita) {}

void sensoreUmid::accept(sensoreVisitor& visitor) {
    visitor.visit(*this);
}
void sensoreUmid::accept(sensoreVisitorConst& visitor ) const {
    visitor.visit(*this);
}
QVector<double> sensoreUmid::getUmidita() const { return umidita; }
