#include "jsonVisitor.h"

#include <QJsonArray>


QJsonObject JsonVisitor::getObject() const {
    return object;
}

void JsonVisitor::visit(const sensorePolveri& sens) {
    QJsonObject sens_obj;
    sens_obj.insert("type", QJsonValue::fromVariant("polveri sottili"));
    sens_obj.insert("id", QJsonValue::fromVariant(sens.getId()));
    sens_obj.insert("name", QJsonValue::fromVariant(sens.getName()));
    sens_obj.insert("description", QJsonValue::fromVariant(sens.getDesc()));
    QJsonArray records;
    for (QVector<double>::const_iterator it = sens.getPolveri().begin(); it != sens.getPolveri().end(); ++it){
        records.append(QJsonValue(*it));
    }
    sens_obj.insert("records", records);
    object=sens_obj;
}

void JsonVisitor::visit(const sensorePressione& sens) {
    QJsonObject sens_obj;
    sens_obj.insert("type", QJsonValue::fromVariant("pressione"));
    sens_obj.insert("id", QJsonValue::fromVariant(sens.getId()));
    sens_obj.insert("name", QJsonValue::fromVariant(sens.getName()));
    sens_obj.insert("description", QJsonValue::fromVariant(sens.getDesc()));
    QJsonArray records;
    for (QVector<double>::const_iterator it = sens.getPressione().begin(); it != sens.getPressione().end(); ++it){
        records.append(QJsonValue(*it));
    }
    sens_obj.insert("records", records);
    object=sens_obj;
}

void JsonVisitor::visit(const sensoreTemp& sens) {
    QJsonObject sens_obj;
    sens_obj.insert("type", QJsonValue::fromVariant("temperatura"));
    sens_obj.insert("id", QJsonValue::fromVariant(sens.getId()));
    sens_obj.insert("name", QJsonValue::fromVariant(sens.getName()));
    sens_obj.insert("description", QJsonValue::fromVariant(sens.getDesc()));
    QJsonArray records;
    for (QVector<double>::const_iterator it = sens.getTemp().begin(); it != sens.getTemp().end(); ++it){
        records.append(QJsonValue(*it));
    }
    sens_obj.insert("records", records);
    object=sens_obj;
}

void JsonVisitor::visit(const sensoreUmid& sens) {
    QJsonObject sens_obj;
    sens_obj.insert("type", QJsonValue::fromVariant("umidità"));
    sens_obj.insert("id", QJsonValue::fromVariant(sens.getId()));
    sens_obj.insert("name", QJsonValue::fromVariant(sens.getName()));
    sens_obj.insert("description", QJsonValue::fromVariant(sens.getDesc()));
    QJsonArray records;
    for (QVector<double>::const_iterator it = sens.getUmid().begin(); it != sens.getUmid().end(); ++it){
        records.append(QJsonValue(*it));
    }
    sens_obj.insert("records", records);
    object=sens_obj;
}

void JsonVisitor::visit(const sensoreUv& sens) {
    QJsonObject sens_obj;
    sens_obj.insert("type", QJsonValue::fromVariant("raggi uv"));
    sens_obj.insert("id", QJsonValue::fromVariant(sens.getId()));
    sens_obj.insert("name", QJsonValue::fromVariant(sens.getName()));
    sens_obj.insert("description", QJsonValue::fromVariant(sens.getDesc()));
    QJsonArray records;
    for (QVector<double>::const_iterator it = sens.getUv().begin(); it != sens.getUv().end(); ++it){
        records.append(QJsonValue(*it));
    }
    sens_obj.insert("records", records);
    object=sens_obj;
}
