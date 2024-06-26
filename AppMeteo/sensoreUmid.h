#ifndef SENSOREUMID_H
#define SENSOREUMID_H
#include "sensore.h"

class sensoreUmid : public sensore {
public:
    sensoreUmid(const QString &nome,const QString &id,const QString &descrizione, QVector<double> &umidita);
    //void accept(SensorVisitor& visitor, QPushButton* button, int& codiceU) override;
    QVector<double> getUmidita() const;

private:
    QVector<double> umidita;

};

#endif // SENSOREUMID_H
