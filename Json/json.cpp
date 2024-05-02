#include "json.h"
#include "jsonVisitor.h"
#include "sensore.h"

Json::Json(IReader& reader)
    : reader(reader)
{
}

const IReader& Json::getReader() const {
    return reader;
}

QJsonObject Json::fromObject(const sensore& sens) const {
    jsonVisitor json_visitor;
    sens.accept(json_visitor);
    return json_visitor.getObject();
}

sensore* Json::toObject(const QJsonObject& json) const {
    return reader.read(json);
}

