#include "Reader.h"

#include <QJsonArray>
#include "sensorePolveri.h"
#include "sensorePressione.h"
#include "sensoreTemp.h"
#include "sensoreUmid.h"
#include "sensoreUv.h"

sensore* Reader::read(const QJsonObject& object) {
    sensore* res = 0;
    QJsonValue type = object.value("type");
    if (type.toString().compare("polveri sottili") == 0) {
        res = readPolveri(object);
    }
    else if (type.toString().compare("pressione") == 0) {
        res = readPressione(object);
    }
    else if (type.toString().compare("temperatura") == 0) {
        res = readTemp(object);
    }
    else if (type.toString().compare("umidità") == 0) {
        res = readUmid(object);
    }
    else if (type.toString().compare("raggi uv") == 0) {
        res = readUv(object);
    }
    return res;
}

sensore* Reader::readPolveri(const QJsonObject& object) const {
    QVector<double> records;
    QJsonArray json_records = object.value("records").toArray();
    for (int i = 0; i < json_records.size(); ++i){
        records.append(json_records[i].toDouble());
    }
    return new sensorePolveri(
        object.value("id").toInt(),
        object.value("name").toString(),
        object.value("description").toString(),
        records
        );
}

sensore* Reader::readPressione(const QJsonObject& object) const {
    QVector<double> records;
    QJsonArray json_records = object.value("records").toArray();
    for (int i = 0; i < json_records.size(); ++i){
        records.append(json_records[i].toDouble());
    }
    return new sensorePressione(
        object.value("id").toInt(),
        object.value("name").toString(),
        object.value("description").toString(),
        records
        );
}

sensore* Reader::readTemp(const QJsonObject& object) const {
    QVector<double> records;
    QJsonArray json_records = object.value("records").toArray();
    for (int i = 0; i < json_records.size(); ++i){
        records.append(json_records[i].toDouble());
    }
    return new sensoreTemp(
        object.value("id").toInt(),
        object.value("name").toString(),
        object.value("description").toString(),
        records
        );
}

sensore* Reader::readUmid(const QJsonObject& object) const {
    QVector<double> records;
    QJsonArray json_records = object.value("records").toArray();
    for (int i = 0; i < json_records.size(); ++i){
        records.append(json_records[i].toDouble());
    }
    return new sensoreUmid(
        object.value("id").toInt(),
        object.value("name").toString(),
        object.value("description").toString(),
        records
        );
}

sensore* Reader::readUv(const QJsonObject& object) const {
    QVector<double> records;
    QJsonArray json_records = object.value("records").toArray();
    for (int i = 0; i < json_records.size(); ++i){
        records.append(json_records[i].toDouble());
    }
    return new sensoreUv(
        object.value("id").toInt(),
        object.value("name").toString(),
        object.value("description").toString(),
        records
        );
}
