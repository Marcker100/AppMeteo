#include "gestoreSensori.h"
#include "qdebug.h"
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
        emit sensorCancellato(sensor);  // Emette il segnale quando un sensor viene cancellato
    }
}
