#ifndef SENSORETEMP_H
#define SENSORETEMP_H
#include "sensore.h"

class sensoreTemp : public sensore {
public:
    sensoreTemp(const QString &nome,const QString &id,const QString &descrizione, QVector<double> &temperatura);
    //void accept(SensorVisitor& visitor, QPushButton* button, int& codiceT) override;
    QVector<double> getTemperatura() const;
private:
    QVector<double> temperatura;

};

#endif // SENSORETEMP_H
