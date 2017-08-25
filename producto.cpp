#include "producto.h"

#include <QtCore>

Producto::Producto()
{
    propiedadesValidas.resize(7);
    propiedadesValidas.fill(1);
}

QString Producto::getNombre() const
{
    return nombre;
}

void Producto::setNombre(const QString &value)
{
    if ( !value.isEmpty() && !value.contains(QRegularExpression("[0-9]")) ){
        if ( value.size() <= 30){
            nombre = value.toLower();
            propiedadesValidas[0] = 0;
        } else
            propiedadesValidas[0] = 1;
    } else
        propiedadesValidas[0] = 1;

}

int Producto::getCodigo() const
{
    return codigo;
}

void Producto::setCodigo(const QString &value)
{
    bool ok = true;
    if ( !value.isEmpty() && !value.contains(QRegularExpression("([a-z]|[A-Z])"))){
        if ( value.toInt(&ok) <= 100000){
            codigo = value.toInt(&ok);
            propiedadesValidas[1] = 0;
        } else
            propiedadesValidas[1] = 1;
    } else
        propiedadesValidas[1] = 1;

}

QString Producto::getMarca() const
{
    return marca;
}

void Producto::setMarca(const QString &value)
{
    if ( !value.isEmpty() && !value.contains(QRegularExpression("[0-9]")) ){
        if ( value.size() <= 30 ){
            marca = value.toLower();
            propiedadesValidas[2] = 0;
        } else
            propiedadesValidas[2] = 1;
    }
    else
        propiedadesValidas[2] = 1;

}

QString Producto::getProveedor() const
{
    return proveedor;
}

void Producto::setProveedor(const QString &value)
{
    if ( !value.isEmpty() && !value.contains(QRegularExpression("[0-9]")) ){
        if ( value.size() <= 30 ){
            proveedor = value.toLower();
            propiedadesValidas[3] = 0;
        } else
            propiedadesValidas[3] = 1;
    }
    else
        propiedadesValidas[3] = 1;

}

double Producto::getPrecio() const
{
    return precio;
}

void Producto::setPrecio(const QString &value)
{
    bool ok = true;
    if ( !value.isEmpty() && !value.contains(QRegularExpression("[a-z]|[A-Z]")) ){
        if ( value.toDouble(&ok) <= 100000.0){
            precio = value.toDouble(&ok);
            propiedadesValidas[4] = 0;
        } else
            propiedadesValidas[4] = 1;
    } else propiedadesValidas[4] = 1;

}

double Producto::getPresentacion() const
{
    return presentacion;
}

void Producto::setPresentacion(const QString &value)
{
    bool ok = true;
    if ( !value.isEmpty() && !value.contains(QRegularExpression("[a-z]|[A-Z]")) ){
        if ( value.toInt(&ok) <= 100000.0 ){
            presentacion = value.toDouble(&ok);
            propiedadesValidas[5] = 0;
        } else
            propiedadesValidas[5] = 1;
    }
}

QString Producto::getComentario() const
{
    return comentario;
}

void Producto::setComentario(const QString &value)
{
    if ( !value.isEmpty() && !value.contains(QRegularExpression("[0-9]")) ){
        if ( value.size() <= 30 ){
            comentario = value.toLower();
            propiedadesValidas[6] = 0;
        } else
            propiedadesValidas[6] = 1;
    } else
        propiedadesValidas[6] = 1;

}

bool Producto::verificarPropiedades()
{
    bool propiedadesVerificadas = propiedadesValidas.contains(1);
    return propiedadesVerificadas;
}
