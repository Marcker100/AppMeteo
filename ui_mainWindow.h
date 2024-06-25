/********************************************************************************
** Form generated from reading UI file 'mainWindow.ui'
**
** Created by: Qt User Interface Compiler version 6.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionSave;
    QAction *actionQuit;
    QAction *actionHelp;
    QWidget *centralwidget;
    QGridLayout *gridLayout_2;
    QFrame *frame_sensor;
    QVBoxLayout *verticalLayout_3;
    QFrame *primo;
    QHBoxLayout *horizontalLayout_2;
    QLabel *nome_sensore;
    QToolButton *simula;
    QToolButton *modifica;
    QToolButton *cancella;
    QFrame *descrizione;
    QHBoxLayout *horizontalLayout_4;
    QLabel *parametri;
    QFrame *grafico;
    QVBoxLayout *verticalLayout_4;
    QFrame *frame_scroll;
    QGridLayout *gridLayout;
    QLineEdit *Find;
    QFrame *frame_add_delete;
    QHBoxLayout *horizontalLayout;
    QPushButton *Add;
    QFrame *lista;
    QMenuBar *menubar;
    QMenu *menuFile;
    QMenu *menuAbout;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(952, 655);
        MainWindow->setStyleSheet(QString::fromUtf8("MainWindow {\n"
"	background-color: rgb(255, 255, 255);\n"
"    }\n"
"    QWidget {\n"
"	background-color: rgb(255, 255, 255);\n"
"    }\n"
"    QFrame {\n"
"    background-color: rgb(255, 255, 255);\n"
"    }\n"
"    #QScrollArea {\n"
"    background-color: rgb(255, 255, 255);\n"
"    }\n"
"    #QMenuBar, QStatusBar {\n"
"    background-color: rgb(255, 255, 255);\n"
"    }"));
        actionSave = new QAction(MainWindow);
        actionSave->setObjectName("actionSave");
        actionQuit = new QAction(MainWindow);
        actionQuit->setObjectName("actionQuit");
        actionHelp = new QAction(MainWindow);
        actionHelp->setObjectName("actionHelp");
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        centralwidget->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        gridLayout_2 = new QGridLayout(centralwidget);
        gridLayout_2->setObjectName("gridLayout_2");
        frame_sensor = new QFrame(centralwidget);
        frame_sensor->setObjectName("frame_sensor");
        frame_sensor->setEnabled(true);
        frame_sensor->setStyleSheet(QString::fromUtf8("QFrame { \n"
"background-color: rgb(255, 255, 255); \n"
"}"));
        frame_sensor->setFrameShape(QFrame::StyledPanel);
        frame_sensor->setFrameShadow(QFrame::Raised);
        verticalLayout_3 = new QVBoxLayout(frame_sensor);
        verticalLayout_3->setObjectName("verticalLayout_3");
        primo = new QFrame(frame_sensor);
        primo->setObjectName("primo");
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Maximum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(primo->sizePolicy().hasHeightForWidth());
        primo->setSizePolicy(sizePolicy);
        primo->setFrameShape(QFrame::StyledPanel);
        primo->setFrameShadow(QFrame::Raised);
        horizontalLayout_2 = new QHBoxLayout(primo);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        nome_sensore = new QLabel(primo);
        nome_sensore->setObjectName("nome_sensore");
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Maximum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(nome_sensore->sizePolicy().hasHeightForWidth());
        nome_sensore->setSizePolicy(sizePolicy1);
        nome_sensore->setMinimumSize(QSize(500, 0));
        nome_sensore->setMaximumSize(QSize(400, 16777215));
        nome_sensore->setStyleSheet(QString::fromUtf8("QLabel { \n"
"border: 1px solid lightgrey; \n"
"color: black;\n"
"font: 700 26pt \"Ubuntu\";\n"
"border-radius: 6px\n"
"}"));

        horizontalLayout_2->addWidget(nome_sensore);

        simula = new QToolButton(primo);
        simula->setObjectName("simula");
        QSizePolicy sizePolicy2(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(simula->sizePolicy().hasHeightForWidth());
        simula->setSizePolicy(sizePolicy2);
        simula->setStyleSheet(QString::fromUtf8("QToolButton { \n"
"image: url(:/line_chart_icon_215576.svg); 	        \n"
"border: 1px solid lightgrey;\n"
"border-radius: 6px;\n"
"}\n"
"QToolButton:hover:!pressed {\n"
"		background-color: #E1F4FF;\n"
"		color: #0c2f70;\n"
"}\n"
"\n"
""));

        horizontalLayout_2->addWidget(simula);

        modifica = new QToolButton(primo);
        modifica->setObjectName("modifica");
        sizePolicy2.setHeightForWidth(modifica->sizePolicy().hasHeightForWidth());
        modifica->setSizePolicy(sizePolicy2);
        modifica->setStyleSheet(QString::fromUtf8("QToolButton { \n"
"image: url(:/modifica.svg); 	        \n"
"border: 1px solid lightgrey;\n"
"border-radius: 6px;\n"
"}\n"
"QToolButton:hover:!pressed {\n"
"		background-color: #E1F4FF;\n"
"		color: #0c2f70;\n"
"}\n"
""));

        horizontalLayout_2->addWidget(modifica);

        cancella = new QToolButton(primo);
        cancella->setObjectName("cancella");
        sizePolicy2.setHeightForWidth(cancella->sizePolicy().hasHeightForWidth());
        cancella->setSizePolicy(sizePolicy2);
        cancella->setStyleSheet(QString::fromUtf8("QToolButton { \n"
"image: url(:/bin.svg); 	        \n"
"border: 1px solid lightgrey;\n"
"border-radius: 6px;\n"
"}\n"
"QToolButton:hover:!pressed {\n"
"		background-color: #E1F4FF;\n"
"		color: #0c2f70;\n"
"}\n"
""));

        horizontalLayout_2->addWidget(cancella);


        verticalLayout_3->addWidget(primo);

        descrizione = new QFrame(frame_sensor);
        descrizione->setObjectName("descrizione");
        sizePolicy.setHeightForWidth(descrizione->sizePolicy().hasHeightForWidth());
        descrizione->setSizePolicy(sizePolicy);
        descrizione->setFrameShape(QFrame::StyledPanel);
        descrizione->setFrameShadow(QFrame::Raised);
        horizontalLayout_4 = new QHBoxLayout(descrizione);
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        horizontalLayout_4->setContentsMargins(-1, -1, -1, 9);
        parametri = new QLabel(descrizione);
        parametri->setObjectName("parametri");
        sizePolicy.setHeightForWidth(parametri->sizePolicy().hasHeightForWidth());
        parametri->setSizePolicy(sizePolicy);
        parametri->setMinimumSize(QSize(0, 0));
        parametri->setMaximumSize(QSize(16777215, 16777215));
        parametri->setSizeIncrement(QSize(0, 0));
        parametri->setAutoFillBackground(false);
        parametri->setStyleSheet(QString::fromUtf8("QLabel:enabled {\n"
"color: rgb(0, 0, 0);\n"
"border: 1px solid lightgrey;\n"
"font: 300 italic 11pt \"Ubuntu\";\n"
"border-radius: 6px;\n"
"}"));
        parametri->setScaledContents(false);
        parametri->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        parametri->setWordWrap(true);
        parametri->setMargin(0);
        parametri->setIndent(-1);

        horizontalLayout_4->addWidget(parametri);


        verticalLayout_3->addWidget(descrizione);

        grafico = new QFrame(frame_sensor);
        grafico->setObjectName("grafico");
        grafico->setFrameShape(QFrame::StyledPanel);
        grafico->setFrameShadow(QFrame::Raised);
        verticalLayout_4 = new QVBoxLayout(grafico);
        verticalLayout_4->setObjectName("verticalLayout_4");

        verticalLayout_3->addWidget(grafico);


        gridLayout_2->addWidget(frame_sensor, 0, 2, 2, 1);

        frame_scroll = new QFrame(centralwidget);
        frame_scroll->setObjectName("frame_scroll");
        QSizePolicy sizePolicy3(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(frame_scroll->sizePolicy().hasHeightForWidth());
        frame_scroll->setSizePolicy(sizePolicy3);
        frame_scroll->setMinimumSize(QSize(200, 0));
        frame_scroll->setMaximumSize(QSize(200, 16777215));
        frame_scroll->setAutoFillBackground(false);
        frame_scroll->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));
        frame_scroll->setFrameShape(QFrame::StyledPanel);
        frame_scroll->setFrameShadow(QFrame::Raised);
        gridLayout = new QGridLayout(frame_scroll);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setSizeConstraint(QLayout::SetDefaultConstraint);
        Find = new QLineEdit(frame_scroll);
        Find->setObjectName("Find");
        Find->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"	color: rgb(0, 0, 0);\n"
"\"background-image: url(:/icons/search_icon_216897.svg);\n"
"background-size: 5px 5px;\n"
"background-repeat: no-repeat;\n"
"background-position: left;\n"
"padding-left: 30px;\"\n"
"}\n"
""));
        Find->setAlignment(Qt::AlignHCenter|Qt::AlignTop);
        Find->setClearButtonEnabled(true);

        gridLayout->addWidget(Find, 0, 0, 1, 1);

        frame_add_delete = new QFrame(frame_scroll);
        frame_add_delete->setObjectName("frame_add_delete");
        frame_add_delete->setMinimumSize(QSize(0, 40));
        frame_add_delete->setMaximumSize(QSize(16777215, 50));
        frame_add_delete->setStyleSheet(QString::fromUtf8("QFrame{\n"
"\n"
"}"));
        frame_add_delete->setFrameShape(QFrame::StyledPanel);
        frame_add_delete->setFrameShadow(QFrame::Raised);
        horizontalLayout = new QHBoxLayout(frame_add_delete);
        horizontalLayout->setObjectName("horizontalLayout");
        Add = new QPushButton(frame_add_delete);
        Add->setObjectName("Add");
        Add->setStyleSheet(QString::fromUtf8("*{	\n"
"		background-color: #b3cde0;\n"
"		color: #fff;\n"
"	\n"
"}\n"
"QPushButton{\n"
"       border-radius: 6px;\n"
"		border-right: 1px solid #b3cde0;\n"
"		border-bottom: 1px solid #b3cde0;\n"
"		font-weight: bold;\n"
"		color: black;\n"
"\n"
"}\n"
"QPushButton:hover:!pressed {\n"
"		background-color: #6497b1;\n"
"		color: black;\n"
"		\n"
"}"));

        horizontalLayout->addWidget(Add);


        gridLayout->addWidget(frame_add_delete, 1, 0, 1, 1);


        gridLayout_2->addWidget(frame_scroll, 0, 0, 1, 1);

        lista = new QFrame(centralwidget);
        lista->setObjectName("lista");
        lista->setFrameShape(QFrame::StyledPanel);
        lista->setFrameShadow(QFrame::Raised);

        gridLayout_2->addWidget(lista, 1, 0, 1, 1);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 952, 21));
        menuFile = new QMenu(menubar);
        menuFile->setObjectName("menuFile");
        menuAbout = new QMenu(menubar);
        menuAbout->setObjectName("menuAbout");
        MainWindow->setMenuBar(menubar);

        menubar->addAction(menuFile->menuAction());
        menubar->addAction(menuAbout->menuAction());
        menuFile->addAction(actionSave);
        menuFile->addAction(actionQuit);
        menuAbout->addAction(actionHelp);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        actionSave->setText(QCoreApplication::translate("MainWindow", "Save", nullptr));
        actionQuit->setText(QCoreApplication::translate("MainWindow", "Quit", nullptr));
        actionHelp->setText(QCoreApplication::translate("MainWindow", "Help", nullptr));
        nome_sensore->setText(QString());
        simula->setText(QString());
        modifica->setText(QString());
        cancella->setText(QString());
        parametri->setText(QString());
        Find->setText(QString());
        Add->setText(QCoreApplication::translate("MainWindow", "ADD NEW SENSOR", nullptr));
        menuFile->setTitle(QCoreApplication::translate("MainWindow", "File", nullptr));
        menuAbout->setTitle(QCoreApplication::translate("MainWindow", "About", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
