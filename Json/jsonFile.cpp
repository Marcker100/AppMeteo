#include "jsonFile.h"
#include <iostream>
#include <QFile>
#include <QJsonDocument>
#include <QJsonArray>
#include <Reader.h>
#include <json.h>

jsonFile::jsonFile(const QString& path, Json& converter)
    : path(path), converter(converter)
{
}

jsonFile jsonFile::fromPath(const QString& path) {
    Reader reader;
    Json converter(reader);
    jsonFile data_mapper(path, converter);
    return data_mapper;
}

const QString& jsonFile::getPath() const {
    return path;
}

jsonFile& jsonFile::setPath(const QString& path) {
    this->path = path;
    return *this;
}

const Converter::Json::Json& jsonFile::getConverter() const {
    return converter;
}

// @todo check errors
jsonFile& jsonFile::store(const QVector<sensore*> sensors) {
    QJsonArray json_sensors;
    for (auto p = sensors.begin(); sensors.end(); p++) {
        json_sensors.push_back(converter.fromObject(**p));
    }
    QJsonDocument document(json_sensors);
    QFile json_file(path);
    json_file.open(QFile::WriteOnly);
    json_file.write(document.toJson());
    json_file.close();
    return *this;
}

// @todo check errors
QVector<sensore*> jsonFile::load() {
    QVector<sensore*> sensors;
    QFile json_file(path);
    json_file.open(QFile::ReadOnly);
    QByteArray data = json_file.readAll();
    json_file.close();
    QJsonDocument document = QJsonDocument::fromJson(data);
    QJsonArray json_items = document.array();

    for (const QJsonValue& value: json_items) {
        QJsonObject json_object = value.toObject();
        sensors.push_back(converter.toObject(json_object));
    }
    return sensors;
}
