#ifndef SENSORVISITORCONST_H
#define SENSORVISITORCONST_H

#include "QPushButton"
#include "sensoreTemp.h"
#include "sensorePolveri.h"
#include "sensoreUmid.h"
#include "sensoreUv.h"
#include "sensorePressione.h"


    // Interfaccia Visitor
    class sensoreVisitorConst {
public:
    virtual void visit(const sensoreTemp& temp, QPushButton* button, int& codiceT) = 0;
    virtual void visit(const sensoreUmid& umid, QPushButton* button, int& codiceU) = 0;
    virtual void visit(const sensorePolveri& polv, QPushButton* button, int& codiceP) = 0;
    virtual void visit(const sensoreUv& temp, QPushButton* button, int& codiceT) = 0;
    virtual void visit(const sensorePressione& temp, QPushButton* button, int& codiceT) = 0;
};



#endif // SENSORVISITORCONST_H
