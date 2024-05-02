#ifndef JSON_H
#define JSON_H

#include <QJsonObject>
#include "sensore.h"
#include "IReader.h"

class Json {
private:
    IReader& reader;

public:
    Json(IReader& reader);
    const IReader& getReader() const;
    QJsonObject fromObject(const sensore& item) const;
    sensore* toObject(const QJsonObject& json) const;
};


#endif //JSON_H
