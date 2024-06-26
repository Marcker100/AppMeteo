#include "RandomValueGenerator.h"
#include "sensoreTemp.h"
#include "sensorePolveri.h"
#include "sensoreUmid.h"
#include "sensoreUv.h"
#include "sensorePressione.h"
#include <QRandomGenerator>

void RandomValueGenerator::visit(const sensorePolveri& sens) {
    values = generateRandomValues(5.0, 30.0, 24);
    sens->setData(values);
}

void RandomValueGenerator::visit(const sensorePressione& sens) {
    values = generateRandomValues(990.0, 1030.0, 24);
    sens->setData(values);
}

void RandomValueGenerator::visit(const sensoreTemp& sens) {
    values = generateRandomValues(-10.0, 40.0, 24);
    sens->setData(values);
}

void RandomValueGenerator::visit(const sensoreUmid& sens) {
    values = generateRandomValues(20.0, 100.0, 24);
    sens->setData(values);
}

void RandomValueGenerator::visit(const sensoreUv& sens) {
    values = generateRandomValues(1.0, 10.0, 24);
    sens->setData(values);
}

QVector<double> RandomValueGenerator::generateRandomValues(qreal lowerBound, qreal upperBound, int numValori) {
    QVector<double> valori;

    for (int i = 0; i < 24; ++i) {
        double value = lowerBound + QRandomGenerator::global()->bounded(upperBound - lowerBound);
        valori.append(value);
        qInfo() << "Valore generato: " << value;

    }
    return valori;
}
