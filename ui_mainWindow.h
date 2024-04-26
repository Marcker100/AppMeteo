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
#include <QtWidgets/QScrollArea>
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
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents_2;
    QVBoxLayout *verticalLayout;
    QFrame *frame_scroll;
    QVBoxLayout *verticalLayout_2;
    QLineEdit *Find;
    QFrame *frame_add_delete;
    QHBoxLayout *horizontalLayout;
    QPushButton *Add;
    QPushButton *test;
    QPushButton *umidita;
    QPushButton *temperatura;
    QPushButton *raggiuv;
    QPushButton *pressione;
    QPushButton *polveri;
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
        scrollArea = new QScrollArea(centralwidget);
        scrollArea->setObjectName("scrollArea");
        scrollArea->setMaximumSize(QSize(200, 16777215));
        scrollArea->setStyleSheet(QString::fromUtf8("QScrollBar {\n"
"        border: none;\n"
"        background: white;\n"
"        width: 10px;\n"
"    }\n"
"QScrollBar::handle {\n"
"        background: lightgrey;\n"
"        border: 2px solid lightgrey;\n"
"        border-radius: 5px;\n"
"}\n"
"QScrollBar::handle:hover {\n"
"        background: grey;\n"
"}\n"
"QScrollBar::add-line:vertical {\n"
"        border: none;\n"
"        background: none;\n"
"		 height: 10px;\n"
"        subcontrol-position: top;\n"
"        subcontrol-origin: margin;\n"
"    }\n"
"QScrollBar::sub-line:vertical {\n"
"        border: none;\n"
"        background: none;\n"
"        height: 10px;\n"
"        subcontrol-position: bottom;\n"
"        subcontrol-origin: margin;\n"
"    }\n"
"    QScrollBar::add-page:vertical, QScrollBar::sub-page:vertical {\n"
"        background: none;\n"
"}"));
        scrollArea->setWidgetResizable(true);
        scrollArea->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        scrollAreaWidgetContents_2 = new QWidget();
        scrollAreaWidgetContents_2->setObjectName("scrollAreaWidgetContents_2");
        scrollAreaWidgetContents_2->setGeometry(QRect(0, 0, 198, 564));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(scrollAreaWidgetContents_2->sizePolicy().hasHeightForWidth());
        scrollAreaWidgetContents_2->setSizePolicy(sizePolicy);
        verticalLayout = new QVBoxLayout(scrollAreaWidgetContents_2);
        verticalLayout->setObjectName("verticalLayout");
        frame_scroll = new QFrame(scrollAreaWidgetContents_2);
        frame_scroll->setObjectName("frame_scroll");
        sizePolicy.setHeightForWidth(frame_scroll->sizePolicy().hasHeightForWidth());
        frame_scroll->setSizePolicy(sizePolicy);
        frame_scroll->setMinimumSize(QSize(100, 0));
        frame_scroll->setAutoFillBackground(false);
        frame_scroll->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));
        frame_scroll->setFrameShape(QFrame::StyledPanel);
        frame_scroll->setFrameShadow(QFrame::Raised);
        verticalLayout_2 = new QVBoxLayout(frame_scroll);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout_2->setSizeConstraint(QLayout::SetDefaultConstraint);
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

        verticalLayout_2->addWidget(Find);

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


        verticalLayout_2->addWidget(frame_add_delete);

        test = new QPushButton(frame_scroll);
        test->setObjectName("test");
        test->setMinimumSize(QSize(0, 70));
        test->setMaximumSize(QSize(16777215, 70));
        test->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	image: url(:/icons/tab_new_icon_216619.svg);\n"
"       border-radius: 35px;\n"
"		border-right: 1px solid #189ad3;\n"
"		border-bottom: 1px solid #189ad3;\n"
"\n"
"}\n"
"\n"
"QPushButton:enabled {\n"
"		background-color: #189ad3;\n"
"		color: white;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"		background-color: white;\n"
"		color: white;\n"
"}\n"
"\n"
"\n"
"QPushButton:hover:!pressed {\n"
"		background-color: #E1F4FF;\n"
"		color: #0c2f70;\n"
"}\n"
"\n"
"QPushButton:disabled {\n"
"		background-color: #aaaaaa;\n"
"		color: #ffffff;\n"
"}\n"
""));

        verticalLayout_2->addWidget(test);

        umidita = new QPushButton(frame_scroll);
        umidita->setObjectName("umidita");
        umidita->setMinimumSize(QSize(0, 70));
        umidita->setMaximumSize(QSize(16777215, 70));
        umidita->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"background-repeat: no-repeat;\n"
"background-position: left;\n"
"padding-left: 10px;\n"
"color: rgb(0, 0, 0);\n"
"border: 2px solid black\n"
"}"));

        verticalLayout_2->addWidget(umidita);

        temperatura = new QPushButton(frame_scroll);
        temperatura->setObjectName("temperatura");
        temperatura->setMinimumSize(QSize(0, 70));
        temperatura->setMaximumSize(QSize(16777215, 70));
        temperatura->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));

        verticalLayout_2->addWidget(temperatura);

        raggiuv = new QPushButton(frame_scroll);
        raggiuv->setObjectName("raggiuv");
        raggiuv->setMinimumSize(QSize(0, 70));
        raggiuv->setMaximumSize(QSize(16777215, 70));
        raggiuv->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));

        verticalLayout_2->addWidget(raggiuv);

        pressione = new QPushButton(frame_scroll);
        pressione->setObjectName("pressione");
        pressione->setMinimumSize(QSize(0, 70));
        pressione->setMaximumSize(QSize(16777215, 70));
        pressione->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));

        verticalLayout_2->addWidget(pressione);

        polveri = new QPushButton(frame_scroll);
        polveri->setObjectName("polveri");
        polveri->setMinimumSize(QSize(0, 70));
        polveri->setMaximumSize(QSize(16777215, 70));
        polveri->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));

        verticalLayout_2->addWidget(polveri);


        verticalLayout->addWidget(frame_scroll);

        scrollArea->setWidget(scrollAreaWidgetContents_2);

        gridLayout_2->addWidget(scrollArea, 0, 0, 8, 1);

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
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Maximum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(primo->sizePolicy().hasHeightForWidth());
        primo->setSizePolicy(sizePolicy1);
        primo->setFrameShape(QFrame::StyledPanel);
        primo->setFrameShadow(QFrame::Raised);
        horizontalLayout_2 = new QHBoxLayout(primo);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        nome_sensore = new QLabel(primo);
        nome_sensore->setObjectName("nome_sensore");
        sizePolicy1.setHeightForWidth(nome_sensore->sizePolicy().hasHeightForWidth());
        nome_sensore->setSizePolicy(sizePolicy1);
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
        sizePolicy1.setHeightForWidth(descrizione->sizePolicy().hasHeightForWidth());
        descrizione->setSizePolicy(sizePolicy1);
        descrizione->setFrameShape(QFrame::StyledPanel);
        descrizione->setFrameShadow(QFrame::Raised);
        horizontalLayout_4 = new QHBoxLayout(descrizione);
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        horizontalLayout_4->setContentsMargins(-1, -1, -1, 9);
        parametri = new QLabel(descrizione);
        parametri->setObjectName("parametri");
        sizePolicy1.setHeightForWidth(parametri->sizePolicy().hasHeightForWidth());
        parametri->setSizePolicy(sizePolicy1);
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


        gridLayout_2->addWidget(frame_sensor, 0, 2, 8, 1);

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
        Find->setText(QString());
        Add->setText(QCoreApplication::translate("MainWindow", "ADD NEW SENSOR", nullptr));
        test->setText(QCoreApplication::translate("MainWindow", "Test", nullptr));
        umidita->setText(QCoreApplication::translate("MainWindow", "Umidit\303\240", nullptr));
        temperatura->setText(QCoreApplication::translate("MainWindow", "Temperatura", nullptr));
        raggiuv->setText(QCoreApplication::translate("MainWindow", "Raggi UV", nullptr));
        pressione->setText(QCoreApplication::translate("MainWindow", "Pressione", nullptr));
        polveri->setText(QCoreApplication::translate("MainWindow", "Polveri sottili", nullptr));
        nome_sensore->setText(QCoreApplication::translate("MainWindow", "TEMP-A413F", nullptr));
        simula->setText(QString());
        modifica->setText(QString());
        cancella->setText(QString());
        parametri->setText(QCoreApplication::translate("MainWindow", "descrizione parametri TEMP HUM DUST UV PRES giovanni descrizione parametri TEMP HUM DUST UV PRES giovannidescrizione parametri TEMP HUM DUST UV PRES giovannidescrizione parametri TEMP HUM DUST UV PRES giovanni", nullptr));
        menuFile->setTitle(QCoreApplication::translate("MainWindow", "File", nullptr));
        menuAbout->setTitle(QCoreApplication::translate("MainWindow", "About", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
