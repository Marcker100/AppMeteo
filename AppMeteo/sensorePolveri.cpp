#include "sensorePolveri.h"

sensorePolveri::sensorePolveri(const QString &nome,const QString &id,const QString &descrizione, QVector<double> &concentrazione)
    : sensore(nome,id,descrizione), concentrazione(concentrazione) {}

QVector<double> sensorePolveri::getConcentrazione() const { return concentrazione; }
