/********************************************************************************
** Form generated from reading UI file 'historydialog.ui'
**
** Created by: Qt User Interface Compiler version 6.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HISTORYDIALOG_H
#define UI_HISTORYDIALOG_H

#include <QtCore/QLocale>
#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QTableWidget>

QT_BEGIN_NAMESPACE

class Ui_HistoryDialog
{
public:
    QLabel *Head;
    QTableWidget *historyTableWidget;

    void setupUi(QDialog *HistoryDialog)
    {
        if (HistoryDialog->objectName().isEmpty())
            HistoryDialog->setObjectName("HistoryDialog");
        HistoryDialog->resize(850, 585);
        Head = new QLabel(HistoryDialog);
        Head->setObjectName("Head");
        Head->setGeometry(QRect(0, 10, 781, 41));
        QFont font;
        font.setFamilies({QString::fromUtf8("Prompt")});
        font.setWeight(QFont::Medium);
        font.setStrikeOut(false);
        font.setKerning(true);
        Head->setFont(font);
        Head->setLocale(QLocale(QLocale::English, QLocale::UnitedStates));
        Head->setWordWrap(false);
        historyTableWidget = new QTableWidget(HistoryDialog);
        if (historyTableWidget->columnCount() < 6)
            historyTableWidget->setColumnCount(6);
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Prompt")});
        font1.setPointSize(10);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        __qtablewidgetitem->setFont(font1);
        historyTableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        __qtablewidgetitem1->setFont(font1);
        historyTableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        __qtablewidgetitem2->setFont(font1);
        historyTableWidget->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        __qtablewidgetitem3->setFont(font1);
        historyTableWidget->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        __qtablewidgetitem4->setFont(font1);
        historyTableWidget->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        __qtablewidgetitem5->setFont(font1);
        historyTableWidget->setHorizontalHeaderItem(5, __qtablewidgetitem5);
        historyTableWidget->setObjectName("historyTableWidget");
        historyTableWidget->setGeometry(QRect(20, 70, 811, 501));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Prompt")});
        historyTableWidget->setFont(font2);
        historyTableWidget->setStyleSheet(QString::fromUtf8("QTableWidget {\n"
"    background-color: #ffffff;\n"
"    border: 1px solid #e0e0e0;\n"
"    border-radius: 12px;\n"
"    font-size: 14px;\n"
"    color: #333;\n"
"    gridline-color: #eaeaea;\n"
"    selection-background-color: #d6eaff;\n"
"    selection-color: #000;\n"
"    alternate-background-color: #fafafa;\n"
"}\n"
"\n"
"QHeaderView::section {\n"
"    background-color: #f8f8f8;\n"
"    font-weight: bold;\n"
"    padding: 6px;\n"
"    border: none;\n"
"    font-size: 14px;\n"
"    color: #555;\n"
"}\n"
"\n"
"QTableWidget::item {\n"
"    padding: 8px;\n"
"    border: none;\n"
"}\n"
"\n"
"QTableWidget::item:selected {\n"
"    background-color: #d6eaff;\n"
"    color: #000;\n"
"    border-radius: 8px;\n"
"}\n"
"\n"
"/* Horizontal Scrollbar */\n"
"QScrollBar:horizontal {\n"
"    border: none;\n"
"    background: transparent;\n"
"    height: 8px;\n"
"    margin: 0px 20px 0 20px;\n"
"}\n"
"QScrollBar::handle:horizontal {\n"
"    background: #c0c0c0;\n"
"    border-radius: 4px;\n"
"}\n"
"QScrollBar::add-line:hor"
                        "izontal,\n"
"QScrollBar::sub-line:horizontal {\n"
"    background: none;\n"
"    width: 0px;\n"
"}\n"
"\n"
"/* Vertical Scrollbar */\n"
"QScrollBar:vertical {\n"
"    border: none;\n"
"    background: transparent;\n"
"    width: 8px;\n"
"    margin: 20px 0 20px 0;\n"
"}\n"
"QScrollBar::handle:vertical {\n"
"    background: #c0c0c0;\n"
"    border-radius: 4px;\n"
"}\n"
"QScrollBar::add-line:vertical,\n"
"QScrollBar::sub-line:vertical {\n"
"    background: none;\n"
"    height: 0px;\n"
"}\n"
""));
        historyTableWidget->setLocale(QLocale(QLocale::English, QLocale::UnitedStates));

        retranslateUi(HistoryDialog);

        QMetaObject::connectSlotsByName(HistoryDialog);
    } // setupUi

    void retranslateUi(QDialog *HistoryDialog)
    {
        HistoryDialog->setWindowTitle(QCoreApplication::translate("HistoryDialog", "Dialog", nullptr));
        Head->setText(QCoreApplication::translate("HistoryDialog", "<html><head/><body><p align=\"center\"><span style=\" font-size:26pt;\">\340\270\233\340\270\243\340\270\260\340\270\247\340\270\261\340\270\225\340\270\264\340\270\201\340\270\262\340\270\243\340\271\203\340\270\212\340\271\211\340\271\200\340\270\207\340\270\264\340\270\231</span></p></body></html>", nullptr));
        QTableWidgetItem *___qtablewidgetitem = historyTableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("HistoryDialog", "\340\271\200\340\270\247\340\270\245\340\270\262", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = historyTableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("HistoryDialog", "\340\270\233\340\270\243\340\270\260\340\271\200\340\270\240\340\270\227", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = historyTableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("HistoryDialog", "\340\270\243\340\270\262\340\270\242\340\270\243\340\270\261\340\270\232", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = historyTableWidget->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("HistoryDialog", "\340\270\243\340\270\262\340\270\242\340\270\210\340\271\210\340\270\262\340\270\242", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = historyTableWidget->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QCoreApplication::translate("HistoryDialog", "\340\270\243\340\270\247\340\270\241", nullptr));
        QTableWidgetItem *___qtablewidgetitem5 = historyTableWidget->horizontalHeaderItem(5);
        ___qtablewidgetitem5->setText(QCoreApplication::translate("HistoryDialog", "\340\270\243\340\270\247\340\270\241\340\270\227\340\270\261\340\271\211\340\270\207\340\270\253\340\270\241\340\270\224", nullptr));
    } // retranslateUi

};

namespace Ui {
    class HistoryDialog: public Ui_HistoryDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HISTORYDIALOG_H
