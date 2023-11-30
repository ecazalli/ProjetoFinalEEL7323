/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QPushButton *b_solicitarLogs;
    QListWidget *list_dataLogs;
    QLabel *l_id;
    QComboBox *wifi_serial;
    QSpinBox *id_selected;
    QSpinBox *dia_ini;
    QSpinBox *mes_ini;
    QSpinBox *ano_ini;
    QSpinBox *mes_fim;
    QSpinBox *ano_fim;
    QSpinBox *dia_fim;
    QLabel *l_id_2;
    QLabel *l_id_3;
    QLabel *l_id_4;
    QLabel *l_id_5;
    QLabel *l_id_6;
    QPushButton *b_buscarLogs;
    QComboBox *wifi_serial_2;
    QLineEdit *lineEdit;
    QLabel *l_id_7;
    QLineEdit *lineEdit_2;
    QLabel *l_id_8;
    QLabel *l_id_10;
    QLabel *l_id_11;
    QSpinBox *id_selected_2;
    QSpinBox *id_selected_3;
    QSpinBox *id_selected_4;
    QSpinBox *id_selected_5;
    QLabel *l_id_12;
    QLabel *l_id_13;
    QSpinBox *id_selected_6;
    QSpinBox *id_selected_7;
    QSpinBox *id_selected_8;
    QLabel *l_id_14;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(561, 716);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        b_solicitarLogs = new QPushButton(centralwidget);
        b_solicitarLogs->setObjectName("b_solicitarLogs");
        b_solicitarLogs->setGeometry(QRect(430, 130, 111, 24));
        list_dataLogs = new QListWidget(centralwidget);
        list_dataLogs->setObjectName("list_dataLogs");
        list_dataLogs->setGeometry(QRect(30, 250, 491, 401));
        l_id = new QLabel(centralwidget);
        l_id->setObjectName("l_id");
        l_id->setGeometry(QRect(10, 30, 49, 16));
        wifi_serial = new QComboBox(centralwidget);
        wifi_serial->addItem(QString());
        wifi_serial->addItem(QString());
        wifi_serial->setObjectName("wifi_serial");
        wifi_serial->setGeometry(QRect(60, 50, 81, 24));
        id_selected = new QSpinBox(centralwidget);
        id_selected->setObjectName("id_selected");
        id_selected->setGeometry(QRect(10, 50, 42, 25));
        id_selected->setMinimum(1);
        id_selected->setMaximum(255);
        dia_ini = new QSpinBox(centralwidget);
        dia_ini->setObjectName("dia_ini");
        dia_ini->setGeometry(QRect(70, 170, 51, 25));
        dia_ini->setMinimum(1);
        dia_ini->setMaximum(31);
        mes_ini = new QSpinBox(centralwidget);
        mes_ini->setObjectName("mes_ini");
        mes_ini->setGeometry(QRect(160, 170, 42, 25));
        mes_ini->setMinimum(1);
        mes_ini->setMaximum(12);
        ano_ini = new QSpinBox(centralwidget);
        ano_ini->setObjectName("ano_ini");
        ano_ini->setGeometry(QRect(240, 170, 42, 25));
        mes_fim = new QSpinBox(centralwidget);
        mes_fim->setObjectName("mes_fim");
        mes_fim->setGeometry(QRect(160, 200, 42, 25));
        mes_fim->setMinimum(1);
        mes_fim->setMaximum(12);
        mes_fim->setStepType(QAbstractSpinBox::DefaultStepType);
        mes_fim->setDisplayIntegerBase(2);
        ano_fim = new QSpinBox(centralwidget);
        ano_fim->setObjectName("ano_fim");
        ano_fim->setGeometry(QRect(240, 200, 42, 25));
        ano_fim->setStepType(QAbstractSpinBox::DefaultStepType);
        ano_fim->setDisplayIntegerBase(2);
        dia_fim = new QSpinBox(centralwidget);
        dia_fim->setObjectName("dia_fim");
        dia_fim->setGeometry(QRect(70, 200, 51, 25));
        dia_fim->setMinimum(1);
        dia_fim->setMaximum(31);
        dia_fim->setDisplayIntegerBase(2);
        l_id_2 = new QLabel(centralwidget);
        l_id_2->setObjectName("l_id_2");
        l_id_2->setGeometry(QRect(70, 140, 49, 16));
        l_id_3 = new QLabel(centralwidget);
        l_id_3->setObjectName("l_id_3");
        l_id_3->setGeometry(QRect(240, 140, 49, 16));
        l_id_4 = new QLabel(centralwidget);
        l_id_4->setObjectName("l_id_4");
        l_id_4->setGeometry(QRect(160, 140, 49, 16));
        l_id_5 = new QLabel(centralwidget);
        l_id_5->setObjectName("l_id_5");
        l_id_5->setGeometry(QRect(20, 170, 49, 16));
        l_id_6 = new QLabel(centralwidget);
        l_id_6->setObjectName("l_id_6");
        l_id_6->setGeometry(QRect(20, 210, 49, 16));
        b_buscarLogs = new QPushButton(centralwidget);
        b_buscarLogs->setObjectName("b_buscarLogs");
        b_buscarLogs->setGeometry(QRect(320, 200, 101, 24));
        wifi_serial_2 = new QComboBox(centralwidget);
        wifi_serial_2->addItem(QString());
        wifi_serial_2->addItem(QString());
        wifi_serial_2->setObjectName("wifi_serial_2");
        wifi_serial_2->setGeometry(QRect(250, 50, 81, 24));
        lineEdit = new QLineEdit(centralwidget);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setGeometry(QRect(360, 50, 71, 24));
        lineEdit->setMaxLength(32767);
        l_id_7 = new QLabel(centralwidget);
        l_id_7->setObjectName("l_id_7");
        l_id_7->setGeometry(QRect(360, 30, 71, 16));
        lineEdit_2 = new QLineEdit(centralwidget);
        lineEdit_2->setObjectName("lineEdit_2");
        lineEdit_2->setGeometry(QRect(460, 50, 71, 24));
        lineEdit_2->setMaxLength(65535);
        l_id_8 = new QLabel(centralwidget);
        l_id_8->setObjectName("l_id_8");
        l_id_8->setGeometry(QRect(460, 30, 49, 16));
        l_id_10 = new QLabel(centralwidget);
        l_id_10->setObjectName("l_id_10");
        l_id_10->setGeometry(QRect(30, 230, 141, 16));
        l_id_11 = new QLabel(centralwidget);
        l_id_11->setObjectName("l_id_11");
        l_id_11->setGeometry(QRect(150, 30, 49, 16));
        id_selected_2 = new QSpinBox(centralwidget);
        id_selected_2->setObjectName("id_selected_2");
        id_selected_2->setGeometry(QRect(160, 50, 51, 25));
        id_selected_2->setMinimum(1);
        id_selected_2->setMaximum(99);
        id_selected_3 = new QSpinBox(centralwidget);
        id_selected_3->setObjectName("id_selected_3");
        id_selected_3->setGeometry(QRect(90, 90, 51, 25));
        id_selected_3->setMinimum(0);
        id_selected_3->setMaximum(255);
        id_selected_4 = new QSpinBox(centralwidget);
        id_selected_4->setObjectName("id_selected_4");
        id_selected_4->setGeometry(QRect(150, 90, 51, 25));
        id_selected_4->setMinimum(0);
        id_selected_4->setMaximum(255);
        id_selected_5 = new QSpinBox(centralwidget);
        id_selected_5->setObjectName("id_selected_5");
        id_selected_5->setGeometry(QRect(210, 90, 51, 25));
        id_selected_5->setMinimum(0);
        id_selected_5->setMaximum(255);
        l_id_12 = new QLabel(centralwidget);
        l_id_12->setObjectName("l_id_12");
        l_id_12->setGeometry(QRect(70, 90, 49, 16));
        l_id_13 = new QLabel(centralwidget);
        l_id_13->setObjectName("l_id_13");
        l_id_13->setGeometry(QRect(280, 90, 61, 20));
        id_selected_6 = new QSpinBox(centralwidget);
        id_selected_6->setObjectName("id_selected_6");
        id_selected_6->setGeometry(QRect(340, 90, 51, 25));
        id_selected_6->setMinimum(0);
        id_selected_6->setMaximum(255);
        id_selected_7 = new QSpinBox(centralwidget);
        id_selected_7->setObjectName("id_selected_7");
        id_selected_7->setGeometry(QRect(400, 90, 51, 25));
        id_selected_7->setMinimum(0);
        id_selected_7->setMaximum(255);
        id_selected_8 = new QSpinBox(centralwidget);
        id_selected_8->setObjectName("id_selected_8");
        id_selected_8->setGeometry(QRect(460, 90, 51, 25));
        id_selected_8->setMinimum(0);
        id_selected_8->setMaximum(255);
        l_id_14 = new QLabel(centralwidget);
        l_id_14->setObjectName("l_id_14");
        l_id_14->setGeometry(QRect(60, 30, 61, 16));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 561, 25));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        b_solicitarLogs->setText(QCoreApplication::translate("MainWindow", "Enviar Comando", nullptr));
        l_id->setText(QCoreApplication::translate("MainWindow", "ID", nullptr));
        wifi_serial->setItemText(0, QCoreApplication::translate("MainWindow", "WI-FI", nullptr));
        wifi_serial->setItemText(1, QCoreApplication::translate("MainWindow", "SERIAL", nullptr));

        l_id_2->setText(QCoreApplication::translate("MainWindow", "Dia", nullptr));
        l_id_3->setText(QCoreApplication::translate("MainWindow", "Ano", nullptr));
        l_id_4->setText(QCoreApplication::translate("MainWindow", "M\303\252s", nullptr));
        l_id_5->setText(QCoreApplication::translate("MainWindow", "Inicio", nullptr));
        l_id_6->setText(QCoreApplication::translate("MainWindow", "Fim", nullptr));
        b_buscarLogs->setText(QCoreApplication::translate("MainWindow", "Buscar Logs", nullptr));
        wifi_serial_2->setItemText(0, QCoreApplication::translate("MainWindow", "Leitura", nullptr));
        wifi_serial_2->setItemText(1, QCoreApplication::translate("MainWindow", "Comando", nullptr));

        lineEdit->setInputMask(QString());
        l_id_7->setText(QCoreApplication::translate("MainWindow", "Endere\303\247o", nullptr));
        l_id_8->setText(QCoreApplication::translate("MainWindow", "Valor", nullptr));
        l_id_10->setText(QCoreApplication::translate("MainWindow", "Registros encontrados", nullptr));
        l_id_11->setText(QCoreApplication::translate("MainWindow", "COM", nullptr));
        l_id_12->setText(QCoreApplication::translate("MainWindow", "IP", nullptr));
        l_id_13->setText(QCoreApplication::translate("MainWindow", "Mascara", nullptr));
        l_id_14->setText(QCoreApplication::translate("MainWindow", "M\303\251todo", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
