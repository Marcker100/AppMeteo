#ifndef SENSORETEMP_H
#define SENSORETEMP_H
#include "sensore.h"

class sensoreTemp : public sensore {
public:
    sensoreTemp(const QString &nome,const QString &id,const QString &descrizione, QVector<double> &temperatura);
    void accept(sensoreVisitor& visitor) override;
    void accept(sensoreVisitorConst& visitor) const override;
    QVector<double> getTemperatura() const;
    void setTemperatura(const QVector<double>& newTemperatura) { temperatura = newTemperatura; }

    void setData(QVector<double> v);

private:
    QVector<double> temperatura;

};

#endif // SENSORETEMP_H
