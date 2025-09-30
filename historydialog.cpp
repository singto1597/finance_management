#include "historydialog.h"
#include "ui_historydialog.h"
#include <QFile>
#include <QTextStream>
#include <QMessageBox>
#include <QStringList>
#include <QTableWidgetItem>

HistoryDialog::HistoryDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::HistoryDialog)
{
    ui->setupUi(this);  // เชื่อมโยง UI ที่สร้างใน Designer
    ui->historyTableWidget->setAlternatingRowColors(true);
    ui->historyTableWidget->horizontalHeader()->setStretchLastSection(true);
    ui->historyTableWidget->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
    ui->historyTableWidget->verticalHeader()->setVisible(false);

    ui->historyTableWidget->setEditTriggers(QAbstractItemView::NoEditTriggers);
    ui->historyTableWidget->setSelectionMode(QAbstractItemView::SingleSelection);
    ui->historyTableWidget->setSelectionBehavior(QAbstractItemView::SelectRows);

    ui->historyTableWidget->horizontalHeader()->setSectionResizeMode(0, QHeaderView::ResizeToContents);
    ui->historyTableWidget->horizontalHeader()->setSectionResizeMode(1, QHeaderView::ResizeToContents);
    ui->historyTableWidget->horizontalHeader()->setSectionsMovable(false);
    ui->historyTableWidget->horizontalHeader()->setSectionsClickable(false);
}

HistoryDialog::~HistoryDialog()
{
    delete ui;
}

void HistoryDialog::loadHistoryFromCSV(const QString &filePath)
{
    // เปิดไฟล์ CSV
    QFile file(filePath);
    if (!file.open(QIODevice::ReadOnly | QIODevice::Text)) {
        QMessageBox::warning(this, "Error", "ไม่สามารถเปิดไฟล์ประวัติได้");
        return;
    }

    // อ่านข้อมูลจากไฟล์
    QTextStream in(&file);
    in.setEncoding(QStringConverter::Utf8);  // รองรับภาษาไทย

    // ล้างข้อมูลที่เคยมีในตาราง
    ui->historyTableWidget->clearContents();
    ui->historyTableWidget->setRowCount(0);  // ตั้งค่าจำนวนแถวเป็น 0 ก่อน

    // อ่านข้อมูลและแสดงใน QTableWidget
    int row = 0;
    while (!in.atEnd()) {
        QString line = in.readLine();
        QStringList columns = line.split(',');  // แยกข้อมูลที่คั่นด้วยคอมมา

        ui->historyTableWidget->insertRow(row);  // เพิ่มแถวใหม่

        // ใส่ข้อมูลแต่ละคอลัมน์ในแถว
        for (int column = 0; column < columns.size(); ++column) {
            QTableWidgetItem *item = new QTableWidgetItem(columns[column]);
            ui->historyTableWidget->setItem(row, column, item);
        }

        row++;  // เพิ่มแถว
    }

    file.close();
}
