/********************************************************************************
** Form generated from reading UI file 'ventanaprincipal.ui'
**
** Created by: Qt User Interface Compiler version 5.9.0
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
#include <QtWidgets/QSpinBox>
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
    QGridLayout *gridLayout_2;
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
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout_5;
    QLabel *labelSeleccioneProducto;
    QSpacerItem *horizontalSpacer_4;
    QSpacerItem *horizontalSpacer_3;
    QComboBox *comboBoxListaProductos;
    QWidget *layoutWidget1;
    QVBoxLayout *verticalLayout_8;
    QTableView *tableViewProductosParaVender;
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
    QVBoxLayout *verticalLayout_7;
    QLabel *label_2;
    QSpinBox *spinBox;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout_6;
    QPushButton *pushButton;
    QSpacerItem *horizontalSpacer_2;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *VentanaPrincipal)
    {
        if (VentanaPrincipal->objectName().isEmpty())
            VentanaPrincipal->setObjectName(QStringLiteral("VentanaPrincipal"));
        VentanaPrincipal->resize(979, 511);
        centralWidget = new QWidget(VentanaPrincipal);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        gridLayout_2 = new QGridLayout(centralWidget);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        tabWidgetVenta = new QTabWidget(centralWidget);
        tabWidgetVenta->setObjectName(QStringLiteral("tabWidgetVenta"));
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
        layoutWidget = new QWidget(tabVenta);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 10, 417, 26));
        horizontalLayout_5 = new QHBoxLayout(layoutWidget);
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        horizontalLayout_5->setContentsMargins(0, 0, 0, 0);
        labelSeleccioneProducto = new QLabel(layoutWidget);
        labelSeleccioneProducto->setObjectName(QStringLiteral("labelSeleccioneProducto"));

        horizontalLayout_5->addWidget(labelSeleccioneProducto);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_4);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_3);

        comboBoxListaProductos = new QComboBox(layoutWidget);
        comboBoxListaProductos->setObjectName(QStringLiteral("comboBoxListaProductos"));

        horizontalLayout_5->addWidget(comboBoxListaProductos);

        layoutWidget1 = new QWidget(tabVenta);
        layoutWidget1->setObjectName(QStringLiteral("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(10, 38, 935, 310));
        verticalLayout_8 = new QVBoxLayout(layoutWidget1);
        verticalLayout_8->setSpacing(6);
        verticalLayout_8->setContentsMargins(11, 11, 11, 11);
        verticalLayout_8->setObjectName(QStringLiteral("verticalLayout_8"));
        verticalLayout_8->setContentsMargins(0, 0, 0, 0);
        tableViewProductosParaVender = new QTableView(layoutWidget1);
        tableViewProductosParaVender->setObjectName(QStringLiteral("tableViewProductosParaVender"));

        verticalLayout_8->addWidget(tableViewProductosParaVender);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setSpacing(6);
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
        labelProducto = new QLabel(layoutWidget1);
        labelProducto->setObjectName(QStringLiteral("labelProducto"));
        labelProducto->setAlignment(Qt::AlignCenter);

        verticalLayout_6->addWidget(labelProducto);

        listViewNombreDeProductos = new QListView(layoutWidget1);
        listViewNombreDeProductos->setObjectName(QStringLiteral("listViewNombreDeProductos"));

        verticalLayout_6->addWidget(listViewNombreDeProductos);


        horizontalLayout->addLayout(verticalLayout_6);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        Codigo = new QLabel(layoutWidget1);
        Codigo->setObjectName(QStringLiteral("Codigo"));
        Codigo->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(Codigo);

        listViewCodigos = new QListView(layoutWidget1);
        listViewCodigos->setObjectName(QStringLiteral("listViewCodigos"));

        verticalLayout_2->addWidget(listViewCodigos);


        horizontalLayout->addLayout(verticalLayout_2);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        Precio = new QLabel(layoutWidget1);
        Precio->setObjectName(QStringLiteral("Precio"));
        Precio->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(Precio);

        listViewPrecio = new QListView(layoutWidget1);
        listViewPrecio->setObjectName(QStringLiteral("listViewPrecio"));

        verticalLayout->addWidget(listViewPrecio);


        horizontalLayout->addLayout(verticalLayout);


        horizontalLayout_4->addLayout(horizontalLayout);

        verticalLayout_7 = new QVBoxLayout();
        verticalLayout_7->setSpacing(6);
        verticalLayout_7->setObjectName(QStringLiteral("verticalLayout_7"));
        label_2 = new QLabel(layoutWidget1);
        label_2->setObjectName(QStringLiteral("label_2"));

        verticalLayout_7->addWidget(label_2);

        spinBox = new QSpinBox(layoutWidget1);
        spinBox->setObjectName(QStringLiteral("spinBox"));

        verticalLayout_7->addWidget(spinBox);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_7->addItem(verticalSpacer);


        horizontalLayout_4->addLayout(verticalLayout_7);


        verticalLayout_8->addLayout(horizontalLayout_4);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setSpacing(6);
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        pushButton = new QPushButton(layoutWidget1);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        horizontalLayout_6->addWidget(pushButton);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_2);


        verticalLayout_8->addLayout(horizontalLayout_6);

        tabWidgetVenta->addTab(tabVenta, QString());

        gridLayout_2->addWidget(tabWidgetVenta, 0, 0, 1, 1);

        VentanaPrincipal->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(VentanaPrincipal);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 979, 22));
        VentanaPrincipal->setMenuBar(menuBar);
        mainToolBar = new QToolBar(VentanaPrincipal);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        VentanaPrincipal->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(VentanaPrincipal);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        VentanaPrincipal->setStatusBar(statusBar);

        retranslateUi(VentanaPrincipal);

        tabWidgetVenta->setCurrentIndex(1);


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
        labelSeleccioneProducto->setText(QApplication::translate("VentanaPrincipal", "Seleccione un producto para agregar a la venta", Q_NULLPTR));
        labelProducto->setText(QApplication::translate("VentanaPrincipal", "Nombre", Q_NULLPTR));
        Codigo->setText(QApplication::translate("VentanaPrincipal", "Codigo", Q_NULLPTR));
        Precio->setText(QApplication::translate("VentanaPrincipal", "Precio", Q_NULLPTR));
        label_2->setText(QApplication::translate("VentanaPrincipal", "Cantidad", Q_NULLPTR));
        pushButton->setText(QApplication::translate("VentanaPrincipal", "Realizar Venta", Q_NULLPTR));
        tabWidgetVenta->setTabText(tabWidgetVenta->indexOf(tabVenta), QApplication::translate("VentanaPrincipal", "Venta", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class VentanaPrincipal: public Ui_VentanaPrincipal {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VENTANAPRINCIPAL_H
