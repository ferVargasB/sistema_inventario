#ifndef PRODUCTO_H
#define PRODUCTO_H


#include <QtCore>

class Producto
{
public:
    explicit Producto(QString nombreP = "", int codigoP = 0, QString marcaP = "", QString proveedorP = "",
                      double precioP = 0.0, double presentacionP = 0.0, QString comentarioP = "",
                      int stockP = 0);

    void establecerProducto(QString nombreP, QString codigoP, QString marcaP, QString proveedorP,
                            QString precioP, QString presentacionP, QString comentarioP, QString stockP);

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

    void reestablecerPropiedades();
    bool verificarPropiedades();

    int getStock() const;
    void setStock(QString value);

private:
    QString nombre;
    int codigo;
    QString marca;
    QString proveedor;
    double precio;
    double presentacion;
    QString comentario;
    int stock;
    QVector <int> propiedadesValidas;

};

#endif // PRODUCTO_H
