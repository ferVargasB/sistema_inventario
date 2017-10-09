#include "ventanaprincipal.h"
#include "ui_ventanaprincipal.h"
#include "producto.h"

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
    producto = new Producto;
    modeloDatos = new QSqlTableModel(this, baseDatos );
    total = 0;
    iniciarModelosAlProcesoVenta();
    mostrarDatosEnTablasDeProductos();
    iniciarComboConProductosDeBD();

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
        producto->setNombre( ui->lineEditNombre->text() );
        producto->setCodigo( ui->lineEditCodigo->text() );
        producto->setMarca( ui->lineEditMarca->text() );
        producto->setProveedor( ui->lineEditProveedor->text() );
        producto->setPrecio( ui->lineEditPrecio->text() );
        producto->setPresentacion( ui->lineEditPresentacion->text());
        producto->setComentario( ui->lineEditComentarios->text() );
        producto->setStock( ui->lineEditStock->text() );

        if ( !producto->verificarPropiedades() ){
            QMessageBox::information(this, "", "Producto creado");
            insertarProducto();
            insertarProveedor();
            actualizarDatos();
        } else{

            QMessageBox::warning(this, "", "Datos incorrectos");
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
}

void VentanaPrincipal::insertarProducto()
{
   QSqlQuery query(baseDatos);
   query.prepare("INSERT INTO producto (codigo_id, nombre, marca, proveedor, precio, presentacion, stock, comentario)"
                 "VALUES (:nombre, :codigo, :marca, :proveedor, :precio, :presentacion, :stock, :comentario)");

   query.bindValue(0, producto->getCodigo());
   query.bindValue(1, producto->getNombre());
   query.bindValue(2, producto->getMarca() );
   query.bindValue(3, producto->getProveedor() );
   query.bindValue(4, producto->getPrecio() );
   query.bindValue(5, producto->getPresentacion() );
   query.bindValue(6, producto->getStock() );
   query.bindValue(7, producto->getComentario() );

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
    query.bindValue(":nombre", producto->getProveedor());


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
}

void VentanaPrincipal::seleccionarProducto(QString nombre)
{
    QSqlQuery query(baseDatos);
    query.prepare("SELECT codigo_id, nombre, precio FROM producto WHERE nombre = '"+nombre+"'");
    query.bindValue(":nombre",nombre);
    qDebug() << "SELECT codigo_id, nombre, precio FROM producto WHERE nombre = '"+nombre+"'";
    query.exec();
    bool ok = true;
    while ( query.next() ){
        int codigo = query.value(0).toInt(&ok);
        QString nombreProducto = query.value(1).toString();
        double precio = query.value(2).toDouble(&ok);
        marcarProducto(codigo, nombreProducto, precio);
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

void VentanaPrincipal::iniciarModelosAlProcesoVenta() //Funcion para iniciar los modelos
{
    nombresSeleccionados = new QStandardItemModel(0,3,this);
    codigosSeleccionados = new QStandardItemModel(0,3,this);
    preciosSeleccionados = new QStandardItemModel(0,3,this);

    ui->listViewNombreDeProductos->setModel(nombresSeleccionados);
    ui->listViewCodigos->setModel(codigosSeleccionados);
    ui->listViewPrecio->setModel(preciosSeleccionados);
}

void VentanaPrincipal::marcarProducto(int codigo, QString nombre, double precio)
{
    nombresSeleccionados->appendRow(new QStandardItem(nombre));
    codigosSeleccionados->appendRow(new QStandardItem(QString::number(codigo)));
    preciosSeleccionados->appendRow(new QStandardItem(QString::number(precio)));
    agregarPrecio(precio);
}

void VentanaPrincipal::removerProducto(const QModelIndex &index)
{
    int fila = index.row();
    nombresSeleccionados->removeRow(index.row());
    codigosSeleccionados->removeRow(fila);
    preciosSeleccionados->removeRow(fila);
    ui->listViewNombreDeProductos->update();
    ui->listViewCodigos->update();
    ui->listViewPrecio->update();
}

void VentanaPrincipal::actualizarDatos()
{
    actualizarProductosEnElCombo();
    mostrarTablaProducto();
    //funcion para restablecer el apuntador producto
}

void VentanaPrincipal::actualizarProductosEnElCombo()
{
    ui->comboBoxListaProductos->addItem( producto->getNombre() );
}

void VentanaPrincipal::actualizarDatosEnlaListaProducto()
{
    listaDeProductos.append(Producto(this->producto->getNombre(), this->producto->getCodigo(), " ", " ",
                                     this->producto->getPrecio(), 0.0, " ", 0));
}

void VentanaPrincipal::agregarPrecio(double precio)
{
    total += precio;
    ui->labelTotal->setText(QString::number(total));
}

void VentanaPrincipal::restarPrecio(QString nombreProducto)
{
    QSqlQuery query(baseDatos);
    query.prepare("SELECT precio FROM producto WHERE nombre = '"+nombreProducto+"'");
    query.bindValue(":nombre",nombreProducto);
    qDebug() << "SELECT precio FROM producto WHERE nombre = '"+nombreProducto+"'";
    query.exec();
    bool ok = true;
    while ( query.next() ){
        double precio = query.value(0).toDouble(&ok);
        total -= precio;
        ui->labelTotal->setText(QString::number(total));
    }
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

void VentanaPrincipal::mostrarDatosEnTablasDeProductos()
{
    mostrarTablaProducto();
    mostrarTablaProductoConsultas();
}

void VentanaPrincipal::iniciarComboConProductosDeBD()
{
    QSqlQuery query(baseDatos);
    query.exec("SELECT codigo_id, nombre, precio FROM producto");

    while ( query.next() ) {
        bool ok = true;
        QString codigo = query.value(0).toString();
        QString nombre = query.value(1).toString();
        QString precio = query.value(2).toString();
        producto->setCodigo(codigo);
        producto->setNombre(nombre);
        producto->setPrecio(precio);
        ui->comboBoxListaProductos->addItem(nombre);
        listaDeProductos.append(Producto(nombre, codigo.toInt(&ok)," ", " ", precio.toDouble(&ok), 0.0, " ", 0));
    }
}



void VentanaPrincipal::on_listViewNombreDeProductos_pressed(const QModelIndex &index)
{
    bool ok = true;
    restarPrecio(nombresSeleccionados->item(index.row())->text());
    removerProducto(index);
}
