#ifndef SENSOREUV_H
#define SENSOREUV_H
#include "sensore.h"

class sensoreUv : public sensore {
public:
    sensoreUv(const QString &nome,const QString &id,const QString &descrizione, QVector<double> &uv);
    void accept(sensoreVisitor& visitor) override;
    void accept(sensoreVisitorConst& visitor) const override;
    QVector<double> getUv() const;

private:
    QVector<double> uv;

};

#endif // SENSOREUV_H
