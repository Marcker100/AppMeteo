#ifndef RANDOMVALUEGENERATOR_H
#define RANDOMVALUEGENERATOR_H

#include "sensoreVisitorConst.h"
#include <QVector>
#include <QtGlobal>

class RandomValueGenerator : public sensoreVisitorConst {
public:
    QVector<double> values;

    void visit(const sensorePolveri& sens) override;
    void visit(const sensorePressione& sens) override;
    void visit(const sensoreTemp& sens) override;
    void visit(const sensoreUmid& sens) override;
    void visit(const sensoreUv& sens) override;

private:
    QVector<double> generateRandomValues(qreal lowerBound, qreal upperBound, int numValori);
};

#endif // RANDOMVALUEGENERATOR_H
