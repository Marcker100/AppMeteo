#ifndef SENSOREPOLVERI_H
#define SENSOREPOLVERI_H
#include "sensore.h"


class sensorePolveri : public sensore {
public:
    sensorePolveri(const QString &nome,const QString &id,const QString &descrizione, QVector<double> &concentrazione);
    void accept(sensoreVisitor& visitor) override;
    void accept(sensoreVisitorConst& visitor) const override;
    QVector<double> getConcentrazione() const;

private:
    QVector<double> concentrazione;

};

#endif // SENSOREPOLVERI_H
