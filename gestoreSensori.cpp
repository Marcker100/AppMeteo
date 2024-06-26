#include "gestoreSensori.h"
#include <QDebug>
#include "sensore.h"


gestoreSensori::gestoreSensori() {}

gestoreSensori::~gestoreSensori() {
    qDeleteAll(this->sensori);
    this->sensori.clear();
}

void gestoreSensori::addSens(sensore* sensor) {
    this->sensori.append(sensor);
    qInfo() << "sto aggiungendo un sensor...";
    emit sensorAggiunto(sensor);  // Emette il segnale quando un sensor viene aggiunto
}

void gestoreSensori::delSens(sensore* sensor) {
    int index = sensori.indexOf(sensor);
    if (index != -1) {
        sensori.removeAt(index);
        emit sensorCancellato(sensor);
        delete sensor;  // Assicurati di deallocare la memoria
    }
}

const QVector<sensore*>& gestoreSensori::getSensori() {
    return sensori;
}

void gestoreSensori::modificaSensore(sensore* sensor) {
    // Emette il segnale quando un sensor viene modificato
    emit sensorModificato(sensor);
}
void gestoreSensori::saveSensoriToJson(const QString& path) {
    Reader reader;
    Json converter(reader);
    jsonFile filejson(path, converter);
    filejson.store(sensori);
}
void gestoreSensori::loadSensoriFromJson(const QString& path) {
    Reader reader;
    Json converter(reader);
    jsonFile filejson(path, converter);
    QVector<sensore*> loadedSensors = filejson.load();

    qDeleteAll(this->sensori);
    this->sensori.clear();

    for (sensore* sensor : loadedSensors) {
        this->sensori.append(sensor);
        emit sensorAggiunto(sensor); // Emette un segnale per ogni sensore aggiunto
    }
}
