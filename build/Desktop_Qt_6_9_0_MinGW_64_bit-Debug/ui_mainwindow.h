/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QLocale>
#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QGroupBox>
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
    QGroupBox *groupBox;
    QLineEdit *otherNameEdit;
    QDoubleSpinBox *otherAmountSpin;
    QPushButton *addOtherButton;
    QListWidget *otherListWidget;
    QPushButton *removeOtherButton;
    QLabel *remainingLabel;
    QPushButton *saveButton;
    QLabel *totalSaveLabel;
    QGroupBox *groupBox_2;
    QSpinBox *breakfastSpin;
    QLabel *label_2;
    QSpinBox *lunchSpin;
    QLabel *label_3;
    QSpinBox *dinnerSpin;
    QLabel *label_4;
    QLabel *Head;
    QGroupBox *groupBox_3;
    QLabel *label;
    QLineEdit *incomeEdit;
    QPushButton *viewHistoryButton;
    QGroupBox *groupBox_4;
    QLabel *label_6;
    QLineEdit *saveBankEdit;
    QLabel *totalSaveLabel_2;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(714, 640);
        MainWindow->setStyleSheet(QString::fromUtf8("QWidget {\n"
"    background-color: #f4f4f4;\n"
"    font-size: 14px;\n"
"    color: #333;\n"
"}\n"
"\n"
"QPushButton {\n"
"    background-color: #007AFF;\n"
"    color: white;\n"
"    border-radius: 10px;\n"
"    padding: 8px 16px;\n"
"    font-weight: 500;\n"
"	transition: all 0.3s ease;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #006FCC;\n"
"	box-shadow: 0 0 12px rgba(25, 118, 210, 0.6);\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: #003E99;\n"
"}\n"
"\n"
"QLineEdit, QSpinBox, QDoubleSpinBox {\n"
"    border: 1px solid #ccc;\n"
"    border-radius: 8px;\n"
"    padding: 8px;\n"
"    background-color: white;\n"
"    font-size: 15px;\n"
"}\n"
"\n"
"/* SpinBox: \340\270\213\340\271\210\340\270\255\340\270\231\340\270\233\340\270\270\340\271\210\340\270\241\340\270\245\340\270\271\340\270\201\340\270\250\340\270\243\340\271\203\340\270\253\340\271\211\340\270\224\340\270\271\340\270\204\340\270\245\340\270\265\340\270\231 */\n"
"QSpinBox::up-button, QSpinBox::down-button,\n"
"Q"
                        "DoubleSpinBox::up-button, QDoubleSpinBox::down-button {\n"
"    width: 0px;\n"
"    height: 0px;\n"
"    border: none;\n"
"}\n"
"\n"
"/* GroupBox */\n"
"QGroupBox {\n"
"    border: 1px solid #e0e0e0;\n"
"    border-radius: 12px;\n"
"    margin-top: 10px;\n"
"    padding: 10px;\n"
"}\n"
"\n"
"QGroupBox::title {\n"
"    subcontrol-origin: margin;\n"
"    left: 10px;\n"
"    padding: 0 4px;\n"
"    font-weight: bold;\n"
"}\n"
"\n"
"/* QListWidget */\n"
"QListWidget {\n"
"    border: 1px solid #ccc;\n"
"    border-radius: 8px;\n"
"    padding: 5px;\n"
"    background-color: #fafafa;\n"
"}\n"
"\n"
"QLabel {\n"
"    font-size: 14px;\n"
"    color: #333;\n"
"}\n"
""));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName("groupBox");
        groupBox->setGeometry(QRect(290, 80, 401, 431));
        QFont font;
        font.setFamilies({QString::fromUtf8("Prompt")});
        groupBox->setFont(font);
        groupBox->setLocale(QLocale(QLocale::English, QLocale::UnitedStates));
        otherNameEdit = new QLineEdit(groupBox);
        otherNameEdit->setObjectName("otherNameEdit");
        otherNameEdit->setGeometry(QRect(20, 30, 141, 41));
        otherNameEdit->setFont(font);
        otherNameEdit->setLocale(QLocale(QLocale::English, QLocale::UnitedStates));
        otherAmountSpin = new QDoubleSpinBox(groupBox);
        otherAmountSpin->setObjectName("otherAmountSpin");
        otherAmountSpin->setGeometry(QRect(170, 30, 71, 41));
        otherAmountSpin->setFont(font);
        otherAmountSpin->setLocale(QLocale(QLocale::English, QLocale::UnitedStates));
        otherAmountSpin->setDecimals(0);
        otherAmountSpin->setMinimum(-999999.000000000000000);
        otherAmountSpin->setMaximum(999999.000000000000000);
        addOtherButton = new QPushButton(groupBox);
        addOtherButton->setObjectName("addOtherButton");
        addOtherButton->setGeometry(QRect(250, 30, 61, 41));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Prompt")});
        font1.setWeight(QFont::Medium);
        addOtherButton->setFont(font1);
        addOtherButton->setLocale(QLocale(QLocale::English, QLocale::UnitedStates));
        otherListWidget = new QListWidget(groupBox);
        otherListWidget->setObjectName("otherListWidget");
        otherListWidget->setGeometry(QRect(20, 90, 361, 321));
        otherListWidget->setFont(font);
        otherListWidget->setLocale(QLocale(QLocale::English, QLocale::UnitedStates));
        removeOtherButton = new QPushButton(groupBox);
        removeOtherButton->setObjectName("removeOtherButton");
        removeOtherButton->setGeometry(QRect(320, 30, 61, 41));
        removeOtherButton->setFont(font1);
        removeOtherButton->setStyleSheet(QString::fromUtf8("#removeOtherButton {\n"
"    background-color: #ff524b;\n"
"    color: white;\n"
"    border-radius: 10px;\n"
"    padding: 8px 16px;\n"
"    font-weight: 500;\n"
"    transition: all 0.2s;\n"
"}\n"
"\n"
"#removeOtherButton:hover {\n"
"    background-color: #FF3B30;\n"
"}"));
        removeOtherButton->setLocale(QLocale(QLocale::English, QLocale::UnitedStates));
        remainingLabel = new QLabel(centralwidget);
        remainingLabel->setObjectName("remainingLabel");
        remainingLabel->setGeometry(QRect(180, 550, 271, 16));
        remainingLabel->setFont(font);
        remainingLabel->setLocale(QLocale(QLocale::English, QLocale::UnitedStates));
        saveButton = new QPushButton(centralwidget);
        saveButton->setObjectName("saveButton");
        saveButton->setGeometry(QRect(570, 550, 121, 51));
        saveButton->setFont(font1);
        saveButton->setLocale(QLocale(QLocale::English, QLocale::UnitedStates));
        totalSaveLabel = new QLabel(centralwidget);
        totalSaveLabel->setObjectName("totalSaveLabel");
        totalSaveLabel->setGeometry(QRect(180, 570, 261, 16));
        totalSaveLabel->setFont(font);
        totalSaveLabel->setLocale(QLocale(QLocale::English, QLocale::UnitedStates));
        groupBox_2 = new QGroupBox(centralwidget);
        groupBox_2->setObjectName("groupBox_2");
        groupBox_2->setGeometry(QRect(30, 190, 221, 211));
        groupBox_2->setFont(font);
        groupBox_2->setLocale(QLocale(QLocale::English, QLocale::UnitedStates));
        breakfastSpin = new QSpinBox(groupBox_2);
        breakfastSpin->setObjectName("breakfastSpin");
        breakfastSpin->setGeometry(QRect(10, 30, 42, 41));
        breakfastSpin->setFont(font);
        breakfastSpin->setLocale(QLocale(QLocale::English, QLocale::UnitedStates));
        breakfastSpin->setMaximum(999);
        label_2 = new QLabel(groupBox_2);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(70, 40, 71, 16));
        label_2->setFont(font);
        label_2->setLocale(QLocale(QLocale::English, QLocale::UnitedStates));
        lunchSpin = new QSpinBox(groupBox_2);
        lunchSpin->setObjectName("lunchSpin");
        lunchSpin->setGeometry(QRect(10, 90, 42, 41));
        lunchSpin->setFont(font);
        lunchSpin->setLocale(QLocale(QLocale::English, QLocale::UnitedStates));
        lunchSpin->setMaximum(999);
        label_3 = new QLabel(groupBox_2);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(70, 100, 91, 16));
        label_3->setFont(font);
        label_3->setLocale(QLocale(QLocale::English, QLocale::UnitedStates));
        dinnerSpin = new QSpinBox(groupBox_2);
        dinnerSpin->setObjectName("dinnerSpin");
        dinnerSpin->setGeometry(QRect(10, 150, 42, 41));
        dinnerSpin->setFont(font);
        dinnerSpin->setLocale(QLocale(QLocale::English, QLocale::UnitedStates));
        dinnerSpin->setMaximum(999);
        label_4 = new QLabel(groupBox_2);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(70, 160, 91, 16));
        label_4->setFont(font);
        label_4->setLocale(QLocale(QLocale::English, QLocale::UnitedStates));
        Head = new QLabel(centralwidget);
        Head->setObjectName("Head");
        Head->setGeometry(QRect(-10, 10, 721, 41));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Prompt")});
        font2.setWeight(QFont::Medium);
        font2.setStrikeOut(false);
        font2.setKerning(true);
        Head->setFont(font2);
        Head->setLocale(QLocale(QLocale::English, QLocale::UnitedStates));
        Head->setWordWrap(false);
        groupBox_3 = new QGroupBox(centralwidget);
        groupBox_3->setObjectName("groupBox_3");
        groupBox_3->setGeometry(QRect(30, 80, 221, 101));
        groupBox_3->setFont(font);
        groupBox_3->setLocale(QLocale(QLocale::English, QLocale::UnitedStates));
        label = new QLabel(groupBox_3);
        label->setObjectName("label");
        label->setGeometry(QRect(10, 25, 151, 21));
        label->setFont(font);
        label->setLocale(QLocale(QLocale::English, QLocale::UnitedStates));
        incomeEdit = new QLineEdit(groupBox_3);
        incomeEdit->setObjectName("incomeEdit");
        incomeEdit->setGeometry(QRect(10, 50, 151, 41));
        incomeEdit->setFont(font);
        incomeEdit->setLocale(QLocale(QLocale::English, QLocale::UnitedStates));
        viewHistoryButton = new QPushButton(centralwidget);
        viewHistoryButton->setObjectName("viewHistoryButton");
        viewHistoryButton->setGeometry(QRect(30, 550, 131, 51));
        viewHistoryButton->setFont(font1);
        viewHistoryButton->setLocale(QLocale(QLocale::English, QLocale::UnitedStates));
        groupBox_4 = new QGroupBox(centralwidget);
        groupBox_4->setObjectName("groupBox_4");
        groupBox_4->setGeometry(QRect(30, 410, 221, 101));
        groupBox_4->setFont(font);
        groupBox_4->setLocale(QLocale(QLocale::English, QLocale::UnitedStates));
        label_6 = new QLabel(groupBox_4);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(10, 25, 171, 21));
        label_6->setFont(font);
        label_6->setLocale(QLocale(QLocale::English, QLocale::UnitedStates));
        saveBankEdit = new QLineEdit(groupBox_4);
        saveBankEdit->setObjectName("saveBankEdit");
        saveBankEdit->setGeometry(QRect(10, 50, 151, 41));
        saveBankEdit->setFont(font);
        saveBankEdit->setLocale(QLocale(QLocale::English, QLocale::UnitedStates));
        totalSaveLabel_2 = new QLabel(centralwidget);
        totalSaveLabel_2->setObjectName("totalSaveLabel_2");
        totalSaveLabel_2->setGeometry(QRect(180, 590, 261, 16));
        totalSaveLabel_2->setFont(font);
        totalSaveLabel_2->setLocale(QLocale(QLocale::English, QLocale::UnitedStates));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 714, 25));
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
        groupBox->setTitle(QCoreApplication::translate("MainWindow", "\340\270\243\340\270\262\340\270\242\340\270\201\340\270\262\340\270\243\340\270\255\340\270\267\340\271\210\340\270\231\340\271\206", nullptr));
        addOtherButton->setText(QCoreApplication::translate("MainWindow", "\340\271\200\340\270\236\340\270\264\340\271\210\340\270\241", nullptr));
        removeOtherButton->setText(QCoreApplication::translate("MainWindow", "\340\270\245\340\270\232", nullptr));
        remainingLabel->setText(QCoreApplication::translate("MainWindow", "\340\271\200\340\270\207\340\270\264\340\270\231\340\270\227\340\270\265\340\271\210\340\271\200\340\270\253\340\270\245\340\270\267\340\270\255", nullptr));
        saveButton->setText(QCoreApplication::translate("MainWindow", "\340\270\232\340\270\261\340\270\231\340\270\227\340\270\266\340\270\201", nullptr));
        totalSaveLabel->setText(QCoreApplication::translate("MainWindow", "\340\271\200\340\270\207\340\270\264\340\270\231\340\271\200\340\270\201\340\271\207\340\270\232\340\270\227\340\270\261\340\271\211\340\270\207\340\270\253\340\270\241\340\270\224", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("MainWindow", "\340\270\204\340\271\210\340\270\262\340\270\255\340\270\262\340\270\253\340\270\262\340\270\243", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "\340\270\255\340\270\262\340\270\253\340\270\262\340\270\243\340\271\200\340\270\212\340\271\211\340\270\262", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "\340\270\255\340\270\262\340\270\253\340\270\262\340\270\243\340\270\201\340\270\245\340\270\262\340\270\207\340\270\247\340\270\261\340\270\231", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "\340\270\255\340\270\262\340\270\253\340\270\262\340\270\243\340\271\200\340\270\242\340\271\207\340\270\231", nullptr));
        Head->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p align=\"center\"><span style=\" font-size:26pt;\">\340\270\210\340\270\261\340\270\224\340\270\201\340\270\262\340\270\243\340\270\201\340\270\262\340\270\243\340\271\200\340\270\207\340\270\264\340\270\231\340\270\233\340\270\243\340\270\260\340\270\210\340\270\263\340\270\247\340\270\261\340\270\231</span></p></body></html>", nullptr));
        groupBox_3->setTitle(QCoreApplication::translate("MainWindow", "\340\270\243\340\270\262\340\270\242\340\270\243\340\270\261\340\270\232\340\270\247\340\270\261\340\270\231\340\270\231\340\270\265\340\271\211", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "\340\271\203\340\270\252\340\271\210\340\270\210\340\270\263\340\270\231\340\270\247\340\270\231\340\271\200\340\270\207\340\270\264\340\270\231\340\270\227\340\270\265\340\271\210\340\271\204\340\270\224\340\271\211\340\271\203\340\270\231\340\270\247\340\270\261\340\270\231\340\270\231\340\270\265\340\271\211", nullptr));
        viewHistoryButton->setText(QCoreApplication::translate("MainWindow", "\340\270\233\340\270\243\340\270\260\340\270\247\340\270\261\340\270\225\340\270\264\340\270\201\340\270\262\340\270\243\340\271\203\340\270\212\340\271\211\340\271\200\340\270\207\340\270\264\340\270\231", nullptr));
        groupBox_4->setTitle(QCoreApplication::translate("MainWindow", "\340\271\200\340\270\207\340\270\264\340\270\231\340\271\200\340\270\201\340\271\207\340\270\232\340\270\247\340\270\261\340\270\231\340\270\231\340\270\265\340\271\211", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "\340\271\203\340\270\252\340\271\210\340\270\210\340\270\263\340\270\231\340\270\247\340\270\231\340\271\200\340\270\207\340\270\264\340\270\231\340\270\227\340\270\265\340\271\210\340\270\210\340\270\260\340\271\200\340\270\201\340\271\207\340\270\232\340\271\203\340\270\231\340\270\247\340\270\261\340\270\231\340\270\231\340\270\265\340\271\211", nullptr));
        totalSaveLabel_2->setText(QCoreApplication::translate("MainWindow", "\340\271\200\340\270\207\340\270\264\340\270\231\340\271\200\340\271\200\340\270\201\340\271\207\340\270\232\340\271\200\340\270\202\340\271\211\340\270\262\340\270\230\340\270\231\340\270\262\340\270\204\340\270\262\340\270\243", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
