#ifndef GESTORESENSORI_H
#define GESTORESENSORI_H

#include <QObject>
#include <QVector>
#include "sensore.h"
#include "Json/jsonFile.h"
#include "Json/Reader.h"

class gestoreSensori : public QObject {
    Q_OBJECT

public:
    gestoreSensori();
    ~gestoreSensori();

    void addSens(sensore* sensor);
    void delSens(sensore* sensor);
    void modificaSensore(sensore* sensor);  // Aggiungiamo la dichiarazione
    const QVector<sensore*>& getSensori();
    void saveSensoriToJson(const QString& path);
    void loadSensoriFromJson(const QString& path);

signals:
    void sensorAggiunto(sensore* sensor);
    void sensorCancellato(sensore* sensor);
    void sensorModificato(sensore* sensor);  // Nuovo segnale per sensore modificato

private:
    QVector<sensore*> sensori;
};

#endif // GESTORESENSORI_H
