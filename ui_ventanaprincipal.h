/********************************************************************************
** Form generated from reading UI file 'ventanaprincipal.ui'
**
** Created by: Qt User Interface Compiler version 5.9.2
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
#include <QtWidgets/QFrame>
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
    QFrame *frameinferior;
    QWidget *layoutWidget;
    QHBoxLayout *modelosTotalRealizarVenta;
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
    QVBoxLayout *verticalLayout_8;
    QVBoxLayout *totalYrealizarVenta;
    QHBoxLayout *labelsTotal;
    QLabel *labelMarcarTotal;
    QLabel *labelTotal;
    QPushButton *pushButtonBorrarElemento;
    QPushButton *pushButtonRealizarVenta;
    QFrame *frameSuperior;
    QWidget *layoutWidget1;
    QVBoxLayout *verticalLayout1;
    QHBoxLayout *layoutComboBox;
    QLabel *labelSeleccioneProducto;
    QSpacerItem *horizontalSpacer_3;
    QComboBox *comboBoxListaProductos;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_3;
    QLineEdit *lineEditCodigoBuscado;
    QLineEdit *lineEdit;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *VentanaPrincipal)
    {
        if (VentanaPrincipal->objectName().isEmpty())
            VentanaPrincipal->setObjectName(QStringLiteral("VentanaPrincipal"));
        VentanaPrincipal->resize(813, 563);
        centralWidget = new QWidget(VentanaPrincipal);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        tabWidgetVenta = new QTabWidget(centralWidget);
        tabWidgetVenta->setObjectName(QStringLiteral("tabWidgetVenta"));
        tabWidgetVenta->setGeometry(QRect(-1, 9, 820, 550));
        tabWidgetVenta->setMinimumSize(QSize(820, 550));
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
        frameinferior = new QFrame(tabVenta);
        frameinferior->setObjectName(QStringLiteral("frameinferior"));
        frameinferior->setGeometry(QRect(10, 120, 791, 351));
        frameinferior->setFrameShape(QFrame::Box);
        frameinferior->setFrameShadow(QFrame::Raised);
        layoutWidget = new QWidget(frameinferior);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(0, 3, 791, 351));
        modelosTotalRealizarVenta = new QHBoxLayout(layoutWidget);
        modelosTotalRealizarVenta->setSpacing(6);
        modelosTotalRealizarVenta->setContentsMargins(11, 11, 11, 11);
        modelosTotalRealizarVenta->setObjectName(QStringLiteral("modelosTotalRealizarVenta"));
        modelosTotalRealizarVenta->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setSpacing(6);
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
        labelProducto = new QLabel(layoutWidget);
        labelProducto->setObjectName(QStringLiteral("labelProducto"));
        labelProducto->setAlignment(Qt::AlignCenter);

        verticalLayout_6->addWidget(labelProducto);

        listViewNombreDeProductos = new QListView(layoutWidget);
        listViewNombreDeProductos->setObjectName(QStringLiteral("listViewNombreDeProductos"));
        listViewNombreDeProductos->setFrameShape(QFrame::StyledPanel);
        listViewNombreDeProductos->setFrameShadow(QFrame::Raised);
        listViewNombreDeProductos->setLineWidth(5);

        verticalLayout_6->addWidget(listViewNombreDeProductos);


        horizontalLayout->addLayout(verticalLayout_6);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        Codigo = new QLabel(layoutWidget);
        Codigo->setObjectName(QStringLiteral("Codigo"));
        Codigo->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(Codigo);

        listViewCodigos = new QListView(layoutWidget);
        listViewCodigos->setObjectName(QStringLiteral("listViewCodigos"));

        verticalLayout_2->addWidget(listViewCodigos);


        horizontalLayout->addLayout(verticalLayout_2);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        Precio = new QLabel(layoutWidget);
        Precio->setObjectName(QStringLiteral("Precio"));
        Precio->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(Precio);

        listViewPrecio = new QListView(layoutWidget);
        listViewPrecio->setObjectName(QStringLiteral("listViewPrecio"));

        verticalLayout->addWidget(listViewPrecio);


        horizontalLayout->addLayout(verticalLayout);


        horizontalLayout_4->addLayout(horizontalLayout);

        verticalLayout_8 = new QVBoxLayout();
        verticalLayout_8->setSpacing(6);
        verticalLayout_8->setObjectName(QStringLiteral("verticalLayout_8"));

        horizontalLayout_4->addLayout(verticalLayout_8);


        modelosTotalRealizarVenta->addLayout(horizontalLayout_4);

        totalYrealizarVenta = new QVBoxLayout();
        totalYrealizarVenta->setSpacing(6);
        totalYrealizarVenta->setObjectName(QStringLiteral("totalYrealizarVenta"));
        labelsTotal = new QHBoxLayout();
        labelsTotal->setSpacing(6);
        labelsTotal->setObjectName(QStringLiteral("labelsTotal"));
        labelMarcarTotal = new QLabel(layoutWidget);
        labelMarcarTotal->setObjectName(QStringLiteral("labelMarcarTotal"));

        labelsTotal->addWidget(labelMarcarTotal);

        labelTotal = new QLabel(layoutWidget);
        labelTotal->setObjectName(QStringLiteral("labelTotal"));
        labelTotal->setAlignment(Qt::AlignCenter);

        labelsTotal->addWidget(labelTotal);


        totalYrealizarVenta->addLayout(labelsTotal);

        pushButtonBorrarElemento = new QPushButton(layoutWidget);
        pushButtonBorrarElemento->setObjectName(QStringLiteral("pushButtonBorrarElemento"));

        totalYrealizarVenta->addWidget(pushButtonBorrarElemento);

        pushButtonRealizarVenta = new QPushButton(layoutWidget);
        pushButtonRealizarVenta->setObjectName(QStringLiteral("pushButtonRealizarVenta"));

        totalYrealizarVenta->addWidget(pushButtonRealizarVenta);


        modelosTotalRealizarVenta->addLayout(totalYrealizarVenta);

        frameSuperior = new QFrame(tabVenta);
        frameSuperior->setObjectName(QStringLiteral("frameSuperior"));
        frameSuperior->setGeometry(QRect(190, 30, 491, 80));
        frameSuperior->setFrameShape(QFrame::Box);
        frameSuperior->setFrameShadow(QFrame::Raised);
        layoutWidget1 = new QWidget(frameSuperior);
        layoutWidget1->setObjectName(QStringLiteral("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(20, 10, 452, 61));
        verticalLayout1 = new QVBoxLayout(layoutWidget1);
        verticalLayout1->setSpacing(6);
        verticalLayout1->setContentsMargins(11, 11, 11, 11);
        verticalLayout1->setObjectName(QStringLiteral("verticalLayout1"));
        verticalLayout1->setContentsMargins(0, 0, 0, 0);
        layoutComboBox = new QHBoxLayout();
        layoutComboBox->setSpacing(6);
        layoutComboBox->setObjectName(QStringLiteral("layoutComboBox"));
        labelSeleccioneProducto = new QLabel(layoutWidget1);
        labelSeleccioneProducto->setObjectName(QStringLiteral("labelSeleccioneProducto"));

        layoutComboBox->addWidget(labelSeleccioneProducto);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        layoutComboBox->addItem(horizontalSpacer_3);

        comboBoxListaProductos = new QComboBox(layoutWidget1);
        comboBoxListaProductos->setObjectName(QStringLiteral("comboBoxListaProductos"));

        layoutComboBox->addWidget(comboBoxListaProductos);


        verticalLayout1->addLayout(layoutComboBox);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        label_3 = new QLabel(layoutWidget1);
        label_3->setObjectName(QStringLiteral("label_3"));

        horizontalLayout_5->addWidget(label_3);

        lineEditCodigoBuscado = new QLineEdit(layoutWidget1);
        lineEditCodigoBuscado->setObjectName(QStringLiteral("lineEditCodigoBuscado"));

        horizontalLayout_5->addWidget(lineEditCodigoBuscado);


        verticalLayout1->addLayout(horizontalLayout_5);

        lineEdit = new QLineEdit(tabVenta);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(70, 10, 113, 21));
        tabWidgetVenta->addTab(tabVenta, QString());
        VentanaPrincipal->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(VentanaPrincipal);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 813, 22));
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
        VentanaPrincipal->setWindowTitle(QApplication::translate("VentanaPrincipal", "VentanaPrincipal", Q_NULLPTR));
        labelNombre->setText(QApplication::translate("VentanaPrincipal", "Nombre:", Q_NULLPTR));
        labelCodigo->setText(QApplication::translate("VentanaPrincipal", "Codigo:", Q_NULLPTR));
        labelMarca->setText(QApplication::translate("VentanaPrincipal", "Marca:", Q_NULLPTR));
        labelProveedor->setText(QApplication::translate("VentanaPrincipal", "Proveedor:", Q_NULLPTR));
        labelPrecio->setText(QApplication::translate("VentanaPrincipal", "Precio:", Q_NULLPTR));
        labelPresentacion->setText(QApplication::translate("VentanaPrincipal", "Presentaci\303\263n:", Q_NULLPTR));
        labelComentario->setText(QApplication::translate("VentanaPrincipal", "Comentario:", Q_NULLPTR));
        labelStock->setText(QApplication::translate("VentanaPrincipal", "Stock Inicial", Q_NULLPTR));
        pushButtonCrearProducto->setText(QApplication::translate("VentanaPrincipal", "Crear Producto", Q_NULLPTR));
        tabWidgetVenta->setTabText(tabWidgetVenta->indexOf(tabProducto), QApplication::translate("VentanaPrincipal", "Producto", Q_NULLPTR));
        label->setText(QApplication::translate("VentanaPrincipal", "Seleccione la tabla para consultar y/o modificar", Q_NULLPTR));
        comboBoxTablasDisponibles->clear();
        comboBoxTablasDisponibles->insertItems(0, QStringList()
         << QApplication::translate("VentanaPrincipal", "producto", Q_NULLPTR)
         << QApplication::translate("VentanaPrincipal", "detalle de venta", Q_NULLPTR)
        );
        tabWidgetVenta->setTabText(tabWidgetVenta->indexOf(tabConsultar), QApplication::translate("VentanaPrincipal", "Consultas", Q_NULLPTR));
        labelProducto->setText(QApplication::translate("VentanaPrincipal", "Nombre", Q_NULLPTR));
        Codigo->setText(QApplication::translate("VentanaPrincipal", "Codigo", Q_NULLPTR));
        Precio->setText(QApplication::translate("VentanaPrincipal", "Precio", Q_NULLPTR));
        labelMarcarTotal->setText(QApplication::translate("VentanaPrincipal", "Total:   ", Q_NULLPTR));
        labelTotal->setText(QApplication::translate("VentanaPrincipal", "0", Q_NULLPTR));
        pushButtonBorrarElemento->setText(QApplication::translate("VentanaPrincipal", "Borrar elemento", Q_NULLPTR));
        pushButtonRealizarVenta->setText(QApplication::translate("VentanaPrincipal", "Realizar Venta", Q_NULLPTR));
        labelSeleccioneProducto->setText(QApplication::translate("VentanaPrincipal", "Seleccione un producto para agregar a la venta:", Q_NULLPTR));
        label_3->setText(QApplication::translate("VentanaPrincipal", "Ingrese el codigo del producto:", Q_NULLPTR));
        tabWidgetVenta->setTabText(tabWidgetVenta->indexOf(tabVenta), QApplication::translate("VentanaPrincipal", "Venta", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class VentanaPrincipal: public Ui_VentanaPrincipal {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VENTANAPRINCIPAL_H
