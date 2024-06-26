#ifndef SENSOREPRESSIONE_H
#define SENSOREPRESSIONE_H
#include "sensore.h"

class sensorePressione : public sensore {
public:
    sensorePressione(const QString &nome,const QString &id,const QString &descrizione, QVector<double> &pressione);
    void accept(sensoreVisitor& visitor) override;
    void accept(sensoreVisitorConst& visitor) const override;
    QVector<double> getPressione() const;
    void setPressione(const QVector<double>& newPressione) { pressione = newPressione; }

    void setData(QVector<double> v);

private:
    QVector<double> pressione;
};

#endif // SENSOREPRESSIONE_H
