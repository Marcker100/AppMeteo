#ifndef SENSORVISITOR_H
#define SENSORVISITOR_H



class sensoreTemp;
class sensorePolveri;
class sensoreUmid;
class sensoreUv;
class sensorePressione;



// Interfaccia Visitor
class sensoreVisitor {
public:
    virtual void visit(const sensorePolveri& sens)=0;
    virtual void visit(const sensorePressione& sens)=0;
    virtual void visit(const sensoreTemp& sens)=0;
    virtual void visit(const sensoreUmid& sens)=0;
    virtual void visit(const sensoreUv& sens)=0;
};


#endif // SENSORVISITOR_H
