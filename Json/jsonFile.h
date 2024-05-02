#ifndef JSONFILE_H
#define JSONFILE_H

#include <QString>
#include <QVector>
#include "sensore.h"
#include "json.h"

class jsonFile {
private:
    QString path;
    Json& converter;

public:
    jsonFile(const QString& path, Json& converter);
    static jsonFile fromPath(const QString& path);
    const QString& getPath() const;
    jsonFile& setPath(const QString& path);
    const Json& getConverter() const;
    jsonFile& store(const QVector<sensore*> sensors);
    QVector<sensore*> load();
};

#endif //JSONFILE_H
