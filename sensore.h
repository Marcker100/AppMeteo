#ifndef SENSORE_H
#define SENSORE_H

#include <QString>
#include <QList>
#include "sensorVisitor.h"
#include "sensoreVisitorConst.h"



// Classe base sensor
class sensore {
public:
    sensore(const QString &nome,const QString &id,const QString &descrizione);
    virtual ~sensore();

    QString getNome() const;
    QString getId() const;
    QString getDescrizione() const;

    // Metodo virtuale puro per accettare un visitatore
    virtual void accept(sensoreVisitor& visitor) = 0;
    virtual void accept(sensoreVisitorConst& visitor) const = 0;

private:
    QString nome;
    const QString id;
    const QString descrizione;
};

#endif // SENSORE_H
