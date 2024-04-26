#include "sensore.h"

sensore::sensore(const QString &nome,const QString &id,const QString &descrizione) : nome(nome), id(id), descrizione(descrizione) {}

sensore::~sensore() {}

QString sensore::getNome() const { return nome; }
QString sensore::getId() const { return id; }
QString sensore::getDescrizione() const { return descrizione; }
