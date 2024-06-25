#ifndef GESTORESENSORI_H
#define GESTORESENSORI_H
#include "qobject.h"
#include "sensore.h"

class gestoreSensori : public QObject  // Eredita da QObject per utilizzare i segnali
{
    Q_OBJECT  // Macro necessaria per i segnali e gli slot

public:
    gestoreSensori();
    ~gestoreSensori();

    void addSens(sensore* sensor);
    void delSens(sensore* sensor);
    const QVector<sensore*>& getSensori();

    //segnali che servono
signals:
    void sensorAggiunto(sensore* sensor);
    void sensorCancellato(sensore* sensor);

private:
    QVector<sensore*> sensori;
};

#endif // GESTORESENSORI_H gestoreSensori gestoreSensori();
