#ifndef STANDARITEMPRODUCTO_H
#define STANDARITEMPRODUCTO_H

#include <QtCore>
#include <QStandardItem>

class StandarItemProducto : public QStandardItem
{
public:
    StandarItemProducto();
    int getCodigo() const;
    void setCodigo(int value);

    QString getNombre() const;
    void setNombre(const QString &value);

private:
    int codigo;
    QString nombre;
};

#endif // STANDARITEMPRODUCTO_H
