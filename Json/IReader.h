#ifndef IREADER_H
#define IREADER_H

#include <QJsonObject>

#include "sensore.h"

class IReader {
public:
    virtual ~IReader() {};
    virtual sensore* read(const QJsonObject& object) = 0;
};

#endif // IREADER_H
