#ifndef VENTANAPRINCIPAL_H
#define VENTANAPRINCIPAL_H

#include "producto.h"

#include <QMainWindow>
#include <QSqlDatabase>
#include <QSqlTableModel>
#include <QStandardItem>
#include <QStandardItemModel>

namespace Ui {
class VentanaPrincipal;
}

class VentanaPrincipal : public QMainWindow
{
    Q_OBJECT

public:
    explicit VentanaPrincipal(QWidget *parent = 0);
    ~VentanaPrincipal();

private slots:
    void on_pushButtonCrearProducto_clicked();

    void on_comboBoxTablasDisponibles_activated(const QString &arg1);

    void on_comboBoxListaProductos_activated(const QString &arg1);

    void on_pushButton_clicked();

private:
    Ui::VentanaPrincipal *ui;
    QSqlTableModel *modeloDatos;
    QSqlDatabase baseDatos;
    Producto *producto;

    QVector <Producto> listaDeProducto;

    //Propiedades de la ventana Venta
    QStandardItemModel *nombresSeleccionados;
    QStandardItemModel *codigosSeleccionados;
    QStandardItemModel *preciosSeleccionados;



    //funciones relacionadas con la base de datos
    void crearConexionBD();

    //funciones relacionadas con el modelo de datos
    void mostrarTablaProducto();
    void insertarProducto();
    void insertarProveedor();

    //funciones relacionadas con la vista de consulta
    void mostrarTablaProductoConsultas();

    //funciones relacionadas con la vista de venta
    void mostrarProductosEnTabVenta();
    void cargarListaDeProductos();
    void agregarListaDeProductos();

    //Funciones relacionadas con el proceso de venta
    void seleccionarProducto(QString nombre);
    void agregarDatosAlaVenta();
    void agregarProductoAlaVenta(Producto producto);
    void iniciarModelosAlProcesoVenta();
};

#endif // VENTANAPRINCIPAL_H
