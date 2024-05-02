#ifndef READER_H
#define READER_H

#include <QJsonObject>
#include "sensore.h"
#include "IReader.h"

class Reader: public IReader {
public:
    virtual sensore* read(const QJsonObject& object);

private:
    sensore* readPolveri(const QJsonObject& object) const;
    sensore* readPressione(const QJsonObject& object) const;
    sensore* readTemp(const QJsonObject& object) const;
    sensore* readUmid(const QJsonObject& object) const;
    sensore* readUv(const QJsonObject& object) const;
};

#endif // READER_H
