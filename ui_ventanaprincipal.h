/********************************************************************************
** Form generated from reading UI file 'ventanaprincipal.ui'
**
<<<<<<< HEAD
** Created by: Qt User Interface Compiler version 5.9.2
=======
** Created by: Qt User Interface Compiler version 5.6.1
>>>>>>> cbadfa6ab3dbd24d117c55bb7b45d6a8a46a7421
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VENTANAPRINCIPAL_H
#define UI_VENTANAPRINCIPAL_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableView>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_VentanaPrincipal
{
public:
    QWidget *centralWidget;
    QTabWidget *tabWidgetVenta;
    QWidget *tabProducto;
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout_5;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_7;
    QVBoxLayout *verticalLayout_3;
    QLabel *labelNombre;
    QLabel *labelCodigo;
    QLabel *labelMarca;
    QLabel *labelProveedor;
    QLabel *labelPrecio;
    QLabel *labelPresentacion;
    QLabel *labelComentario;
    QLabel *labelStock;
    QVBoxLayout *verticalLayout_4;
    QLineEdit *lineEditNombre;
    QLineEdit *lineEditCodigo;
    QLineEdit *lineEditMarca;
    QLineEdit *lineEditProveedor;
    QLineEdit *lineEditPrecio;
    QLineEdit *lineEditPresentacion;
    QLineEdit *lineEditComentarios;
    QLineEdit *lineEditStock;
    QSpacerItem *horizontalSpacer_8;
    QHBoxLayout *horizontalLayout_7;
    QSpacerItem *horizontalSpacer_5;
    QPushButton *pushButtonCrearProducto;
    QSpacerItem *horizontalSpacer_6;
    QTableView *tableViewProducto;
    QWidget *tabConsultar;
    QGridLayout *gridLayout_3;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label;
    QSpacerItem *horizontalSpacer;
    QComboBox *comboBoxTablasDisponibles;
    QTableView *tableViewConsultas;
    QWidget *tabVenta;
<<<<<<< HEAD
    QWidget *widget;
=======
    QGridLayout *gridLayout_4;
    QComboBox *comboBoxListaProductos;
    QLabel *labelSeleccioneProducto;
    QSpacerItem *horizontalSpacer_4;
    QSpacerItem *horizontalSpacer_3;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_3;
    QLineEdit *lineEditCodigoBuscado;
    QSpacerItem *horizontalSpacer_10;
    QSpacerItem *horizontalSpacer_9;
    QTableView *tableViewProductosParaVender;
>>>>>>> cbadfa6ab3dbd24d117c55bb7b45d6a8a46a7421
    QHBoxLayout *horizontalLayout_4;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout_6;
    QLabel *labelProducto;
    QListView *listViewNombreDeProductos;
    QVBoxLayout *verticalLayout_2;
    QLabel *Codigo;
    QListView *listViewCodigos;
    QVBoxLayout *verticalLayout;
    QLabel *Precio;
    QListView *listViewPrecio;
<<<<<<< HEAD
    QVBoxLayout *verticalLayout_7;
    QLabel *label_2;
    QListView *listViewCantidadDeProductos;
    QVBoxLayout *verticalLayout_9;
    QHBoxLayout *horizontalLayout_8;
    QLabel *labelMarcarTotal;
    QLabel *labelTotal;
    QSpacerItem *verticalSpacer;
=======
    QVBoxLayout *verticalLayout_8;
    QLabel *label_4;
    QListView *listViewCantidadDeArticulos;
    QHBoxLayout *horizontalLayout_6;
>>>>>>> cbadfa6ab3dbd24d117c55bb7b45d6a8a46a7421
    QPushButton *pushButton;
    QWidget *widget1;
    QVBoxLayout *verticalLayout_8;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_3;
    QSpacerItem *horizontalSpacer_10;
    QLineEdit *lineEditCodigoBuscado;
    QHBoxLayout *horizontalLayout_6;
    QLabel *labelSeleccioneProducto;
    QComboBox *comboBoxListaProductos;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *VentanaPrincipal)
    {
        if (VentanaPrincipal->objectName().isEmpty())
            VentanaPrincipal->setObjectName(QStringLiteral("VentanaPrincipal"));
        VentanaPrincipal->resize(922, 679);
        centralWidget = new QWidget(VentanaPrincipal);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        tabWidgetVenta = new QTabWidget(centralWidget);
        tabWidgetVenta->setObjectName(QStringLiteral("tabWidgetVenta"));
<<<<<<< HEAD
        tabWidgetVenta->setGeometry(QRect(0, 0, 921, 621));
=======
        tabWidgetVenta->setGeometry(QRect(9, 9, 904, 608));
>>>>>>> cbadfa6ab3dbd24d117c55bb7b45d6a8a46a7421
        tabProducto = new QWidget();
        tabProducto->setObjectName(QStringLiteral("tabProducto"));
        gridLayout = new QGridLayout(tabProducto);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setSpacing(6);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_7);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        labelNombre = new QLabel(tabProducto);
        labelNombre->setObjectName(QStringLiteral("labelNombre"));

        verticalLayout_3->addWidget(labelNombre);

        labelCodigo = new QLabel(tabProducto);
        labelCodigo->setObjectName(QStringLiteral("labelCodigo"));

        verticalLayout_3->addWidget(labelCodigo);

        labelMarca = new QLabel(tabProducto);
        labelMarca->setObjectName(QStringLiteral("labelMarca"));

        verticalLayout_3->addWidget(labelMarca);

        labelProveedor = new QLabel(tabProducto);
        labelProveedor->setObjectName(QStringLiteral("labelProveedor"));

        verticalLayout_3->addWidget(labelProveedor);

        labelPrecio = new QLabel(tabProducto);
        labelPrecio->setObjectName(QStringLiteral("labelPrecio"));

        verticalLayout_3->addWidget(labelPrecio);

        labelPresentacion = new QLabel(tabProducto);
        labelPresentacion->setObjectName(QStringLiteral("labelPresentacion"));

        verticalLayout_3->addWidget(labelPresentacion);

        labelComentario = new QLabel(tabProducto);
        labelComentario->setObjectName(QStringLiteral("labelComentario"));

        verticalLayout_3->addWidget(labelComentario);

        labelStock = new QLabel(tabProducto);
        labelStock->setObjectName(QStringLiteral("labelStock"));

        verticalLayout_3->addWidget(labelStock);


        horizontalLayout_2->addLayout(verticalLayout_3);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        lineEditNombre = new QLineEdit(tabProducto);
        lineEditNombre->setObjectName(QStringLiteral("lineEditNombre"));
        lineEditNombre->setInputMethodHints(Qt::ImhPreferLowercase);

        verticalLayout_4->addWidget(lineEditNombre);

        lineEditCodigo = new QLineEdit(tabProducto);
        lineEditCodigo->setObjectName(QStringLiteral("lineEditCodigo"));
        lineEditCodigo->setInputMethodHints(Qt::ImhPreferNumbers);

        verticalLayout_4->addWidget(lineEditCodigo);

        lineEditMarca = new QLineEdit(tabProducto);
        lineEditMarca->setObjectName(QStringLiteral("lineEditMarca"));
        lineEditMarca->setInputMethodHints(Qt::ImhPreferLowercase);

        verticalLayout_4->addWidget(lineEditMarca);

        lineEditProveedor = new QLineEdit(tabProducto);
        lineEditProveedor->setObjectName(QStringLiteral("lineEditProveedor"));
        lineEditProveedor->setInputMethodHints(Qt::ImhPreferLowercase);

        verticalLayout_4->addWidget(lineEditProveedor);

        lineEditPrecio = new QLineEdit(tabProducto);
        lineEditPrecio->setObjectName(QStringLiteral("lineEditPrecio"));
        lineEditPrecio->setInputMethodHints(Qt::ImhDigitsOnly);

        verticalLayout_4->addWidget(lineEditPrecio);

        lineEditPresentacion = new QLineEdit(tabProducto);
        lineEditPresentacion->setObjectName(QStringLiteral("lineEditPresentacion"));
        lineEditPresentacion->setInputMethodHints(Qt::ImhDigitsOnly);

        verticalLayout_4->addWidget(lineEditPresentacion);

        lineEditComentarios = new QLineEdit(tabProducto);
        lineEditComentarios->setObjectName(QStringLiteral("lineEditComentarios"));
        lineEditComentarios->setInputMethodHints(Qt::ImhLowercaseOnly);

        verticalLayout_4->addWidget(lineEditComentarios);

        lineEditStock = new QLineEdit(tabProducto);
        lineEditStock->setObjectName(QStringLiteral("lineEditStock"));
        lineEditStock->setInputMethodHints(Qt::ImhDigitsOnly);

        verticalLayout_4->addWidget(lineEditStock);


        horizontalLayout_2->addLayout(verticalLayout_4);

        horizontalSpacer_8 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_8);


        verticalLayout_5->addLayout(horizontalLayout_2);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setSpacing(6);
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_5);

        pushButtonCrearProducto = new QPushButton(tabProducto);
        pushButtonCrearProducto->setObjectName(QStringLiteral("pushButtonCrearProducto"));

        horizontalLayout_7->addWidget(pushButtonCrearProducto);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_6);


        verticalLayout_5->addLayout(horizontalLayout_7);


        gridLayout->addLayout(verticalLayout_5, 0, 0, 1, 1);

        tableViewProducto = new QTableView(tabProducto);
        tableViewProducto->setObjectName(QStringLiteral("tableViewProducto"));
        tableViewProducto->setEditTriggers(QAbstractItemView::NoEditTriggers);

        gridLayout->addWidget(tableViewProducto, 1, 0, 1, 1);

        tabWidgetVenta->addTab(tabProducto, QString());
        tabConsultar = new QWidget();
        tabConsultar->setObjectName(QStringLiteral("tabConsultar"));
        gridLayout_3 = new QGridLayout(tabConsultar);
        gridLayout_3->setSpacing(6);
        gridLayout_3->setContentsMargins(11, 11, 11, 11);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        label = new QLabel(tabConsultar);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout_3->addWidget(label);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer);

        comboBoxTablasDisponibles = new QComboBox(tabConsultar);
        comboBoxTablasDisponibles->setObjectName(QStringLiteral("comboBoxTablasDisponibles"));

        horizontalLayout_3->addWidget(comboBoxTablasDisponibles);


        gridLayout_3->addLayout(horizontalLayout_3, 0, 0, 1, 1);

        tableViewConsultas = new QTableView(tabConsultar);
        tableViewConsultas->setObjectName(QStringLiteral("tableViewConsultas"));

        gridLayout_3->addWidget(tableViewConsultas, 1, 0, 1, 1);

        tabWidgetVenta->addTab(tabConsultar, QString());
        tabVenta = new QWidget();
        tabVenta->setObjectName(QStringLiteral("tabVenta"));
<<<<<<< HEAD
        widget = new QWidget(tabVenta);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(60, 250, 701, 222));
        horizontalLayout_4 = new QHBoxLayout(widget);
=======
        gridLayout_4 = new QGridLayout(tabVenta);
        gridLayout_4->setSpacing(6);
        gridLayout_4->setContentsMargins(11, 11, 11, 11);
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        comboBoxListaProductos = new QComboBox(tabVenta);
        comboBoxListaProductos->setObjectName(QStringLiteral("comboBoxListaProductos"));

        gridLayout_4->addWidget(comboBoxListaProductos, 0, 3, 1, 2);

        labelSeleccioneProducto = new QLabel(tabVenta);
        labelSeleccioneProducto->setObjectName(QStringLiteral("labelSeleccioneProducto"));

        gridLayout_4->addWidget(labelSeleccioneProducto, 1, 0, 1, 2);

        horizontalSpacer_4 = new QSpacerItem(434, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_4->addItem(horizontalSpacer_4, 1, 2, 1, 1);

        horizontalSpacer_3 = new QSpacerItem(105, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_4->addItem(horizontalSpacer_3, 1, 3, 1, 2);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        label_3 = new QLabel(tabVenta);
        label_3->setObjectName(QStringLiteral("label_3"));

        horizontalLayout_5->addWidget(label_3);

        lineEditCodigoBuscado = new QLineEdit(tabVenta);
        lineEditCodigoBuscado->setObjectName(QStringLiteral("lineEditCodigoBuscado"));

        horizontalLayout_5->addWidget(lineEditCodigoBuscado);

        horizontalSpacer_10 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_10);

        horizontalSpacer_9 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_9);


        gridLayout_4->addLayout(horizontalLayout_5, 2, 0, 1, 3);

        tableViewProductosParaVender = new QTableView(tabVenta);
        tableViewProductosParaVender->setObjectName(QStringLiteral("tableViewProductosParaVender"));

        gridLayout_4->addWidget(tableViewProductosParaVender, 3, 0, 2, 3);

        horizontalLayout_4 = new QHBoxLayout();
>>>>>>> cbadfa6ab3dbd24d117c55bb7b45d6a8a46a7421
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setSpacing(6);
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
<<<<<<< HEAD
        labelProducto = new QLabel(widget);
=======
        labelProducto = new QLabel(tabVenta);
>>>>>>> cbadfa6ab3dbd24d117c55bb7b45d6a8a46a7421
        labelProducto->setObjectName(QStringLiteral("labelProducto"));
        labelProducto->setAlignment(Qt::AlignCenter);

        verticalLayout_6->addWidget(labelProducto);

<<<<<<< HEAD
        listViewNombreDeProductos = new QListView(widget);
=======
        listViewNombreDeProductos = new QListView(tabVenta);
>>>>>>> cbadfa6ab3dbd24d117c55bb7b45d6a8a46a7421
        listViewNombreDeProductos->setObjectName(QStringLiteral("listViewNombreDeProductos"));

        verticalLayout_6->addWidget(listViewNombreDeProductos);


        horizontalLayout->addLayout(verticalLayout_6);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
<<<<<<< HEAD
        Codigo = new QLabel(widget);
=======
        Codigo = new QLabel(tabVenta);
>>>>>>> cbadfa6ab3dbd24d117c55bb7b45d6a8a46a7421
        Codigo->setObjectName(QStringLiteral("Codigo"));
        Codigo->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(Codigo);

<<<<<<< HEAD
        listViewCodigos = new QListView(widget);
=======
        listViewCodigos = new QListView(tabVenta);
>>>>>>> cbadfa6ab3dbd24d117c55bb7b45d6a8a46a7421
        listViewCodigos->setObjectName(QStringLiteral("listViewCodigos"));

        verticalLayout_2->addWidget(listViewCodigos);


        horizontalLayout->addLayout(verticalLayout_2);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
<<<<<<< HEAD
        Precio = new QLabel(widget);
=======
        Precio = new QLabel(tabVenta);
>>>>>>> cbadfa6ab3dbd24d117c55bb7b45d6a8a46a7421
        Precio->setObjectName(QStringLiteral("Precio"));
        Precio->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(Precio);

<<<<<<< HEAD
        listViewPrecio = new QListView(widget);
=======
        listViewPrecio = new QListView(tabVenta);
>>>>>>> cbadfa6ab3dbd24d117c55bb7b45d6a8a46a7421
        listViewPrecio->setObjectName(QStringLiteral("listViewPrecio"));

        verticalLayout->addWidget(listViewPrecio);


        horizontalLayout->addLayout(verticalLayout);

<<<<<<< HEAD
        verticalLayout_7 = new QVBoxLayout();
        verticalLayout_7->setSpacing(6);
        verticalLayout_7->setObjectName(QStringLiteral("verticalLayout_7"));
        label_2 = new QLabel(widget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setAlignment(Qt::AlignCenter);

        verticalLayout_7->addWidget(label_2);

        listViewCantidadDeProductos = new QListView(widget);
        listViewCantidadDeProductos->setObjectName(QStringLiteral("listViewCantidadDeProductos"));

        verticalLayout_7->addWidget(listViewCantidadDeProductos);


        horizontalLayout->addLayout(verticalLayout_7);


        horizontalLayout_4->addLayout(horizontalLayout);

        verticalLayout_9 = new QVBoxLayout();
        verticalLayout_9->setSpacing(6);
        verticalLayout_9->setObjectName(QStringLiteral("verticalLayout_9"));
        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setSpacing(6);
        horizontalLayout_8->setObjectName(QStringLiteral("horizontalLayout_8"));
        labelMarcarTotal = new QLabel(widget);
        labelMarcarTotal->setObjectName(QStringLiteral("labelMarcarTotal"));

        horizontalLayout_8->addWidget(labelMarcarTotal);

        labelTotal = new QLabel(widget);
        labelTotal->setObjectName(QStringLiteral("labelTotal"));
        labelTotal->setAlignment(Qt::AlignCenter);

        horizontalLayout_8->addWidget(labelTotal);


        verticalLayout_9->addLayout(horizontalLayout_8);
=======

        horizontalLayout_4->addLayout(horizontalLayout);

        verticalLayout_8 = new QVBoxLayout();
        verticalLayout_8->setSpacing(6);
        verticalLayout_8->setObjectName(QStringLiteral("verticalLayout_8"));
        label_4 = new QLabel(tabVenta);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setAlignment(Qt::AlignCenter);

        verticalLayout_8->addWidget(label_4);
>>>>>>> cbadfa6ab3dbd24d117c55bb7b45d6a8a46a7421

        listViewCantidadDeArticulos = new QListView(tabVenta);
        listViewCantidadDeArticulos->setObjectName(QStringLiteral("listViewCantidadDeArticulos"));

<<<<<<< HEAD
        verticalLayout_9->addItem(verticalSpacer);

        pushButton = new QPushButton(widget);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        verticalLayout_9->addWidget(pushButton);


        horizontalLayout_4->addLayout(verticalLayout_9);

        widget1 = new QWidget(tabVenta);
        widget1->setObjectName(QStringLiteral("widget1"));
        widget1->setGeometry(QRect(220, 70, 399, 61));
        verticalLayout_8 = new QVBoxLayout(widget1);
        verticalLayout_8->setSpacing(6);
        verticalLayout_8->setContentsMargins(11, 11, 11, 11);
        verticalLayout_8->setObjectName(QStringLiteral("verticalLayout_8"));
        verticalLayout_8->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        label_3 = new QLabel(widget1);
        label_3->setObjectName(QStringLiteral("label_3"));

        horizontalLayout_5->addWidget(label_3);

        horizontalSpacer_10 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);
=======
        verticalLayout_8->addWidget(listViewCantidadDeArticulos);
>>>>>>> cbadfa6ab3dbd24d117c55bb7b45d6a8a46a7421

        horizontalLayout_5->addItem(horizontalSpacer_10);

<<<<<<< HEAD
        lineEditCodigoBuscado = new QLineEdit(widget1);
        lineEditCodigoBuscado->setObjectName(QStringLiteral("lineEditCodigoBuscado"));
=======
        horizontalLayout_4->addLayout(verticalLayout_8);
>>>>>>> cbadfa6ab3dbd24d117c55bb7b45d6a8a46a7421

        horizontalLayout_5->addWidget(lineEditCodigoBuscado);

<<<<<<< HEAD

        verticalLayout_8->addLayout(horizontalLayout_5);
=======
        gridLayout_4->addLayout(horizontalLayout_4, 4, 1, 2, 4);
>>>>>>> cbadfa6ab3dbd24d117c55bb7b45d6a8a46a7421

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setSpacing(6);
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
<<<<<<< HEAD
        labelSeleccioneProducto = new QLabel(widget1);
        labelSeleccioneProducto->setObjectName(QStringLiteral("labelSeleccioneProducto"));
=======
        pushButton = new QPushButton(tabVenta);
        pushButton->setObjectName(QStringLiteral("pushButton"));
>>>>>>> cbadfa6ab3dbd24d117c55bb7b45d6a8a46a7421

        horizontalLayout_6->addWidget(labelSeleccioneProducto);

        comboBoxListaProductos = new QComboBox(widget1);
        comboBoxListaProductos->setObjectName(QStringLiteral("comboBoxListaProductos"));

        horizontalLayout_6->addWidget(comboBoxListaProductos);


        gridLayout_4->addLayout(horizontalLayout_6, 6, 0, 1, 2);

        tabWidgetVenta->addTab(tabVenta, QString());
        VentanaPrincipal->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(VentanaPrincipal);
        menuBar->setObjectName(QStringLiteral("menuBar"));
<<<<<<< HEAD
        menuBar->setGeometry(QRect(0, 0, 922, 22));
=======
        menuBar->setGeometry(QRect(0, 0, 922, 21));
>>>>>>> cbadfa6ab3dbd24d117c55bb7b45d6a8a46a7421
        VentanaPrincipal->setMenuBar(menuBar);
        mainToolBar = new QToolBar(VentanaPrincipal);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        VentanaPrincipal->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(VentanaPrincipal);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        VentanaPrincipal->setStatusBar(statusBar);

        retranslateUi(VentanaPrincipal);

        tabWidgetVenta->setCurrentIndex(2);


        QMetaObject::connectSlotsByName(VentanaPrincipal);
    } // setupUi

    void retranslateUi(QMainWindow *VentanaPrincipal)
    {
        VentanaPrincipal->setWindowTitle(QApplication::translate("VentanaPrincipal", "VentanaPrincipal", 0));
        labelNombre->setText(QApplication::translate("VentanaPrincipal", "Nombre:", 0));
        labelCodigo->setText(QApplication::translate("VentanaPrincipal", "Codigo:", 0));
        labelMarca->setText(QApplication::translate("VentanaPrincipal", "Marca:", 0));
        labelProveedor->setText(QApplication::translate("VentanaPrincipal", "Proveedor:", 0));
        labelPrecio->setText(QApplication::translate("VentanaPrincipal", "Precio:", 0));
        labelPresentacion->setText(QApplication::translate("VentanaPrincipal", "Presentaci\303\263n:", 0));
        labelComentario->setText(QApplication::translate("VentanaPrincipal", "Comentario:", 0));
        labelStock->setText(QApplication::translate("VentanaPrincipal", "Stock Inicial", 0));
        pushButtonCrearProducto->setText(QApplication::translate("VentanaPrincipal", "Crear Producto", 0));
        tabWidgetVenta->setTabText(tabWidgetVenta->indexOf(tabProducto), QApplication::translate("VentanaPrincipal", "Producto", 0));
        label->setText(QApplication::translate("VentanaPrincipal", "Seleccione la tabla para consultar y/o modificar", 0));
        comboBoxTablasDisponibles->clear();
        comboBoxTablasDisponibles->insertItems(0, QStringList()
         << QApplication::translate("VentanaPrincipal", "producto", 0)
         << QApplication::translate("VentanaPrincipal", "detalle de venta", 0)
        );
<<<<<<< HEAD
        tabWidgetVenta->setTabText(tabWidgetVenta->indexOf(tabConsultar), QApplication::translate("VentanaPrincipal", "Consultas", Q_NULLPTR));
        labelProducto->setText(QApplication::translate("VentanaPrincipal", "Nombre", Q_NULLPTR));
        Codigo->setText(QApplication::translate("VentanaPrincipal", "Codigo", Q_NULLPTR));
        Precio->setText(QApplication::translate("VentanaPrincipal", "Precio", Q_NULLPTR));
        label_2->setText(QApplication::translate("VentanaPrincipal", "Cantidad", Q_NULLPTR));
        labelMarcarTotal->setText(QApplication::translate("VentanaPrincipal", "Total", Q_NULLPTR));
        labelTotal->setText(QApplication::translate("VentanaPrincipal", "0", Q_NULLPTR));
        pushButton->setText(QApplication::translate("VentanaPrincipal", "Realizar Venta", Q_NULLPTR));
        label_3->setText(QApplication::translate("VentanaPrincipal", "Ingrese el codigo del producto:", Q_NULLPTR));
        labelSeleccioneProducto->setText(QApplication::translate("VentanaPrincipal", "Seleccione un producto para agregar a la venta", Q_NULLPTR));
        tabWidgetVenta->setTabText(tabWidgetVenta->indexOf(tabVenta), QApplication::translate("VentanaPrincipal", "Venta", Q_NULLPTR));
=======
        tabWidgetVenta->setTabText(tabWidgetVenta->indexOf(tabConsultar), QApplication::translate("VentanaPrincipal", "Consultas", 0));
        labelSeleccioneProducto->setText(QApplication::translate("VentanaPrincipal", "Seleccione un producto para agregar a la venta", 0));
        label_3->setText(QApplication::translate("VentanaPrincipal", "Ingrese el codigo del producto:", 0));
        labelProducto->setText(QApplication::translate("VentanaPrincipal", "Nombre", 0));
        Codigo->setText(QApplication::translate("VentanaPrincipal", "Codigo", 0));
        Precio->setText(QApplication::translate("VentanaPrincipal", "Precio", 0));
        label_4->setText(QApplication::translate("VentanaPrincipal", "Cantidad", 0));
        pushButton->setText(QApplication::translate("VentanaPrincipal", "Realizar Venta", 0));
        tabWidgetVenta->setTabText(tabWidgetVenta->indexOf(tabVenta), QApplication::translate("VentanaPrincipal", "Venta", 0));
>>>>>>> cbadfa6ab3dbd24d117c55bb7b45d6a8a46a7421
    } // retranslateUi

};

namespace Ui {
    class VentanaPrincipal: public Ui_VentanaPrincipal {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VENTANAPRINCIPAL_H
