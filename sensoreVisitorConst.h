#ifndef SENSORVISITORCONST_H
#define SENSORVISITORCONST_H

#include "QPushButton"

class sensoreTemp;
class sensorePolveri;
class sensoreUmid;
class sensoreUv;
class sensorePressione;


    // Interfaccia Visitor
    class sensoreVisitorConst {
public:
        virtual void visit(const sensorePolveri& sens)=0;
        virtual void visit(const sensorePressione& sens)=0;
        virtual void visit(const sensoreTemp& sens)=0;
        virtual void visit(const sensoreUmid& sens)=0;
        virtual void visit(const sensoreUv& sens)=0;
};



#endif // SENSORVISITORCONST_H
