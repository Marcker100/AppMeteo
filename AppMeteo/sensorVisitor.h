#ifndef SENSORVISITOR_H
#define SENSORVISITOR_H

#include "qpushbutton.h"
#include "sensoreTemp.h"
#include "sensorePolveri.h"
#include "sensoreUmid.h"
#include "sensoreUv.h"
#include "sensorePressione.h"



// Interfaccia Visitor
class sensoreVisitor {
public:
    virtual void visit(const sensoreTemp& temp, QPushButton* button, int& codiceT) = 0;
    virtual void visit(const sensoreUmid& umid, QPushButton* button, int& codiceU) = 0;
    virtual void visit(const sensorePolveri& polv, QPushButton* button, int& codiceP) = 0;
    virtual void visit(const sensoreUv& temp, QPushButton* button, int& codiceT) = 0;
    virtual void visit(const sensorePressione& temp, QPushButton* button, int& codiceT) = 0;
};


#endif // SENSORVISITOR_H
