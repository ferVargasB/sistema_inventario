#include "ventanaprincipal.h"
#include "ui_ventanaprincipal.h"
#include "producto.h"
#include "standaritemproducto.h"

#include <QMessageBox>
#include <QSqlQuery>
#include <QDebug>
#include <QFileDialog>
#include <QStandardItem>

VentanaPrincipal::VentanaPrincipal(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::VentanaPrincipal)
{
    ui->setupUi(this);
    crearConexionBD(); //Crear conexion a la bd
    modeloDatos = new QSqlTableModel(this, baseDatos );
    iniciarModelosAlProcesoVenta();
    mostrarTablaProducto();
    mostrarProductosEnTabVenta();
}

VentanaPrincipal::~VentanaPrincipal()
{
    delete ui;
}

void VentanaPrincipal::on_pushButtonCrearProducto_clicked()
{
    //antes de crear producto, verificar si hay conexion a la BD

    if ( !baseDatos.isOpen() )
        qDebug() << "No hay conexion a la base de datos";
    else{
        producto.setNombre( ui->lineEditNombre->text() );
        producto.setCodigo( ui->lineEditCodigo->text() );
        producto.setMarca( ui->lineEditMarca->text() );
        producto.setProveedor( ui->lineEditProveedor->text() );
        producto.setPrecio( ui->lineEditPrecio->text() );
        producto.setPresentacion( ui->lineEditPresentacion->text());
        producto.setComentario( ui->lineEditComentarios->text() );

        if ( !producto.verificarPropiedades() ){
            QMessageBox::warning(this, "", "Producto creado");
            insertarProducto();
            insertarProveedor();
        } else{

            QMessageBox::information(this, "", "Producto creado");
        }
    }
}

void VentanaPrincipal::crearConexionBD()
{
    QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE","ConexionBD2");
    QString nombreBD = QFileDialog::getOpenFileName(this,
        tr("Abrir Base de datos"), "/home/", tr(""));
    db.setDatabaseName(nombreBD);
    baseDatos = db;
    if ( db.open() ){
        qDebug() << "BD abierta";
    }
    else
        qDebug() << "Falló";
}

void VentanaPrincipal::mostrarTablaProducto()
{
    modeloDatos->setTable("producto");
    modeloDatos->select();
    ui->tableViewProducto->setModel( modeloDatos );
    ui->tableViewProductosParaVender->setModel( modeloDatos );
}

void VentanaPrincipal::insertarProducto()
{
   QSqlQuery query(baseDatos);
   query.prepare("INSERT INTO producto (nombre, codigo, marca, proveedor, precio, presentacion, comentarios)"
                 "VALUES (:nombre, :codigo, :marca, :proveedor, :precio, :presentacion, :comentarios)");

   query.bindValue(0, producto.getNombre());
   query.bindValue(1, producto.getCodigo());
   query.bindValue(2, producto.getMarca() );
   query.bindValue(3, producto.getProveedor() );
   query.bindValue(4, producto.getPrecio() );
   query.bindValue(5, producto.getPresentacion() );
   query.bindValue(6, producto.getComentario() );

   if ( query.exec() )
       qDebug() << "Query exitosa";
   else
       qDebug() << "Query fallida";
}

void VentanaPrincipal::insertarProveedor()
{
    QSqlQuery query(baseDatos);
    query.prepare("INSERT INTO proveedor(nombre) "
                  "VALUES(:nombre)");
    query.bindValue(":nombre", producto.getProveedor());


    if ( baseDatos.isOpen()){
        if ( query.exec() )
            qDebug() << "Query exitosa";
        else
            qDebug() << "Query fallida";
    }

}

void VentanaPrincipal::mostrarTablaProductoConsultas()
{
    modeloDatos->setTable("producto");
    modeloDatos->select();
    ui->tableViewConsultas->setModel( modeloDatos );
}

void VentanaPrincipal::mostrarProductosEnTabVenta()
{
    cargarListaDeProductos();
    agregarListaDeProductos();
}

void VentanaPrincipal::cargarListaDeProductos()
{
    QSqlQuery query(baseDatos);
    query.exec("SELECT codigo,nombre,precio FROM producto");
    while (query.next()) {
        QString codigo = query.value(0).toString();
        QString nombre = query.value(1).toString();
        QString precio = query.value(2).toString();
        Producto producto;
        producto.setCodigo(codigo);
        producto.setNombre(nombre);
        producto.setPrecio(precio);
        listaDeProducto.append(producto);
      }

}

void VentanaPrincipal::agregarListaDeProductos()
{
    for (int i = 0; i < listaDeProducto.size(); i++){
        ui->comboBoxListaProductos->addItem( listaDeProducto[i].getNombre() );
    }
}

void VentanaPrincipal::seleccionarProducto(QString nombre)
{
    for (int i = 0; i < listaDeProducto.size(); i++){
        if (listaDeProducto[i].getNombre() == nombre){
            agregarProductoAlaVenta(listaDeProducto[i]);
        }
    }
}

void VentanaPrincipal::agregarProductoAlaVenta(Producto producto)
{
    QStandardItem *itemNombre = new QStandardItem(producto.getNombre());
    nombresSeleccionados->appendRow(itemNombre);
    QStandardItem *itemCodigo = new QStandardItem(QString::number(producto.getCodigo()));
    codigosSeleccionados->appendRow(itemCodigo);
    QStandardItem *itemPrecio = new QStandardItem(QString::number(producto.getPrecio()));
    preciosSeleccionados->appendRow(itemPrecio);
}

void VentanaPrincipal::iniciarModelosAlProcesoVenta()
{
    nombresSeleccionados = new QStandardItemModel(this);
    codigosSeleccionados = new QStandardItemModel(this);
    preciosSeleccionados = new QStandardItemModel(this);

    ui->listViewNombreDeProductos->setModel(nombresSeleccionados);
    ui->listViewCodigos->setModel(codigosSeleccionados);
    ui->listViewPrecio->setModel(preciosSeleccionados);
}

void VentanaPrincipal::on_comboBoxTablasDisponibles_activated(const QString &arg1)
{
    if ( arg1 == "detalle de venta")
        modeloDatos->setTable("ventaDetalle");
    else
        modeloDatos->setTable(arg1);
    modeloDatos->select();
    ui->tableViewConsultas->setModel( modeloDatos );
}

void VentanaPrincipal::on_comboBoxListaProductos_activated(const QString &arg1)
{
    seleccionarProducto( arg1 );
}

void VentanaPrincipal::on_pushButton_clicked()
{
    QMessageBox::information(this,"Venta","Venta Realizada");
}
