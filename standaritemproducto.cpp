#include "standaritemproducto.h"

StandarItemProducto::StandarItemProducto()
{

}

int StandarItemProducto::getCodigo() const
{
    return codigo;
}

void StandarItemProducto::setCodigo(int value)
{
    codigo = value;
}

QString StandarItemProducto::getNombre() const
{
    return nombre;
}

void StandarItemProducto::setNombre(const QString &value)
{
    nombre = value;
}
