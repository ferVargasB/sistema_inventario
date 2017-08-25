#ifndef PRODUCTO_H
#define PRODUCTO_H


#include <QtCore>

class Producto
{
public:
    Producto();
    QString getNombre() const;
    void setNombre(const QString &value);

    int getCodigo() const;
    void setCodigo(const QString &value);

    QString getMarca() const;
    void setMarca(const QString &value);

    QString getProveedor() const;
    void setProveedor(const QString &value);

    double getPrecio() const;
    void setPrecio(const QString &value);

    double getPresentacion() const;
    void setPresentacion(const QString &value);

    QString getComentario() const;
    void setComentario(const QString &value);

    bool verificarPropiedades();

private:
    QString nombre;
    int codigo;
    QString marca;
    QString proveedor;
    double precio;
    double presentacion;
    QString comentario;
    QVector <int> propiedadesValidas;

};

#endif // PRODUCTO_H
