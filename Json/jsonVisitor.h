#ifndef JSON_VISITOR_H
#define JSON_VISITOR_H

#include <QJsonObject>
#include "sensoreVisitorConst.h"
#include "sensorePolveri.h"
#include "sensorePressione.h"
#include "sensoreTemp.h"
#include "sensoreUmid.h"
#include "sensoreUv.h"

class JsonVisitor: public sensoreVisitorConst {
private:
    QJsonObject object;

public:
    QJsonObject getObject() const;
    void visit(const sensorePolveri& sens);
    void visit(const sensorePressione& sens);
    void visit(const sensoreTemp& sens);
    void visit(const sensoreUmid& sens);
    void visit(const sensoreUv& sens);
};

#endif
