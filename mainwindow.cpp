#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "historydialog.h"

#include <QFile>
#include <QTextStream>
#include <QDateTime>
#include <QMessageBox>

//#include <fstream>
//#include <sstream>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent), ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->totalSaveLabel->setText("เงินออมทั้งหมด: " + QString::number(getTotalSavings()) + " บาท");
    ui->totalSaveLabel_2->setText("เงินเก็บเข้าธนาคาร: " + QString::number(getBank()) + " บาท");
    //connect(ui->incomeConfirmButton, &QPushButton::clicked, this, &MainWindow::on_incomeConfirmed);
    connect(ui->addOtherButton, &QPushButton::clicked, this, &MainWindow::on_addOtherExpense);
    connect(ui->saveButton, &QPushButton::clicked, this, &MainWindow::on_saveData);

    connect(ui->incomeEdit, &QLineEdit::textChanged, this, &MainWindow::recalculateRemaining);
    connect(ui->breakfastSpin, QOverload<int>::of(&QSpinBox::valueChanged), this, &MainWindow::recalculateRemaining);
    connect(ui->lunchSpin,     QOverload<int>::of(&QSpinBox::valueChanged), this, &MainWindow::recalculateRemaining);
    connect(ui->dinnerSpin,    QOverload<int>::of(&QSpinBox::valueChanged), this, &MainWindow::recalculateRemaining);
    connect(ui->saveBankEdit, &QLineEdit::textChanged, this, &MainWindow::recalculateRemaining);
    connect(ui->incomeEdit, &QLineEdit::editingFinished, this, [this]() {
        ui->totalSaveLabel->setText("เงินออมทั้งหมด: " + QString::number(getTotalSavings()) + " บาท");
    });
    //connect(ui->debtCheckBox, &QCheckBox::stateChanged, this, &MainWindow::on_debtCheckboxChanged);
    //connect(ui->payDebtButton, &QPushButton::clicked, this, &MainWindow::on_payDebtClicked);

    //ui->payDebtSpinBox->setVisible(false);
    //ui->payDebtButton->setVisible(false);
}

MainWindow::~MainWindow()
{
    delete ui;
}
/*
void MainWindow::on_incomeConfirmed()
{
    todayIncome = ui->incomeEdit->text().toDouble();
    remainingMoney = todayIncome;

    breakfastCost = ui->breakfastSpin->value();
    lunchCost = ui->lunchSpin->value();
    dinnerCost = ui->dinnerSpin->value();

    remainingMoney -= (breakfastCost + lunchCost + dinnerCost);
    updateRemaining();
}*/

void MainWindow::on_addOtherExpense()
{
    QString name = ui->otherNameEdit->text();
    double cost = ui->otherAmountSpin->value();

    if (!name.isEmpty()) {
        double absCost = std::abs(cost);
        otherExpenseNames.append(name);
        otherExpenseAmounts.append(cost);
        if (cost > 0){
            otherExpenseAmountsExpense.append(absCost);
            otherExpenseAmountsIncome.append(0);
        }
        else if (cost < 0){
            otherExpenseAmountsExpense.append(0);
            otherExpenseAmountsIncome.append(absCost);
        }
        else{
            otherExpenseAmountsExpense.append(0);
            otherExpenseAmountsIncome.append(0);
        }
        remainingMoney -= cost;
        otherCost += cost;

        ui->otherListWidget->addItem(name + ": " + QString::number(cost) + " Bath");

        updateRemaining();
    }

    ui->otherNameEdit->clear();
    ui->otherAmountSpin->setValue(0);
}

void MainWindow::on_removeOtherButton_clicked()
{
    int row = ui->otherListWidget->currentRow();
    if (row >= 0 && row < otherExpenseNames.size()) {
        // คืนเงินกลับ เพราะลบรายการ
        remainingMoney += otherExpenseAmounts[row];
        otherCost -= otherExpenseAmounts[row];

        // ลบออกจาก QList
        otherExpenseNames.removeAt(row);
        otherExpenseAmounts.removeAt(row);

        // ลบจาก List Widget
        delete ui->otherListWidget->takeItem(row);

        updateRemaining();
    }
}
/*
void MainWindow::on_debtCheckboxChanged(int state)
{
    bool show = (state == Qt::Checked);
    ui->payDebtSpinBox->setVisible(show);
    ui->payDebtButton->setVisible(show);
}

void MainWindow::on_payDebtClicked()
{
    readDebtData();
    double maxDebt = todayIncome; // just default
    double pay = ui->payDebtSpinBox->value();

    if (pay > 0) {
        debtPayment = pay;
        remainingMoney -= debtPayment;
        writeDebtLog();
        writeDebtTotal();
        updateRemaining();
    }
}
*/
void MainWindow::updateRemaining()
{
    ui->remainingLabel->setText("เงินคงเหลือ: " + QString::number(remainingMoney) + " บาท");
}

void MainWindow::on_saveData()
{

    saveTodaySavings();
    saveTextLogs();
    saveCSV();
    saveBank();
    QMessageBox::information(this, "บันทึกสำเร็จ", "ข้อมูลวันนี้ถูกบันทึกเรียบร้อยแล้ว");
    ui->totalSaveLabel->setText("เงินออมทั้งหมด: " + QString::number(getTotalSavings()) + " บาท");
    ui->totalSaveLabel_2->setText("เงินเก็บเข้าธนาคาร: " + QString::number(getBank()) + " บาท");
    ui->otherNameEdit->clear();
    ui->incomeEdit->clear();
    ui->saveBankEdit->clear();
    ui->otherAmountSpin->setValue(0);
    ui->breakfastSpin->setValue(0);
    ui->lunchSpin->setValue(0);
    ui->dinnerSpin->setValue(0);

    // เคลียร์รายการรายจ่ายอื่นๆ
    otherExpenseNames.clear();
    otherExpenseAmounts.clear();
    ui->otherListWidget->clear();

    // รีเซ็ตเงินที่เหลือและยอดใช้
    remainingMoney = 0; // หรืออาจให้เท่ากับรายรับถ้าคุณใช้ฟังก์ชันอื่น
    otherCost = 0;

    updateRemaining(); // รีเฟรช label เงินที่เหลือ
}

void MainWindow::saveTodaySavings()
{
    QFile file("MySaveMoney.txt");
    if (file.open(QIODevice::Append | QIODevice::Text)) {
        QTextStream out(&file);
        out << remainingMoney << "\n";
        file.close();
    }
}

double MainWindow::getTotalSavings()
{
    QFile file("MySaveMoney.txt");
    double total = 0, val;

    if (file.open(QIODevice::ReadOnly | QIODevice::Text)) {
        QTextStream in(&file);
        while (!in.atEnd()) {
            in >> val;
            total += val;
        }
        file.close();
    }

    return total;
}

void MainWindow::saveBank()
{
    QFile file("MyBankSaveMoney.txt");
    if (file.open(QIODevice::Append | QIODevice::Text)) {
        QTextStream out(&file);
        out << saveToBank << "\n";
        file.close();
    }
}

double MainWindow::getBank()
{
    QFile file("MyBankSaveMoney.txt");
    double total = 0, val;

    if (file.open(QIODevice::ReadOnly | QIODevice::Text)) {
        QTextStream in(&file);
        while (!in.atEnd()) {
            in >> val;
            total += val;
        }
        file.close();
    }

    return total;
}

void MainWindow::saveTextLogs()
{
    QFile file("History.txt");
    if (file.open(QIODevice::Append | QIODevice::Text)) {
        QTextStream out(&file);
        out.setEncoding(QStringConverter::Utf8); // รองรับภาษาไทย
        out << "------------\n";
        out << QDateTime::currentDateTime().toString("yyyy-MM-dd at HH:mm:ss") << "\n\n";
        out << "Have Money: " << todayIncome << "\n";
        out << "Breakfast: " << breakfastCost << "\n";
        out << "Lunch: " << lunchCost << "\n";
        out << "Dinner: " << dinnerCost << "\n";

        for (int i = 0; i < otherExpenseNames.size(); ++i) {
            out << "Other - " << otherExpenseNames[i] << ": " << otherExpenseAmounts[i] << "\n";
        }
        /*
        if (debtPayment > 0)
            out << "Pay Debt: " << debtPayment << "\n";*/

        out << "Save to Bank: " << saveToBank << "\n";

        out << "Left Money: " << remainingMoney << "\n";
        out << "Save Money: " << getTotalSavings() << "\n";
        out << "------------\n\n";
        file.close();
    }
}

void MainWindow::saveCSV()
{
    QFile file("History.csv");
    if (file.open(QIODevice::Append | QIODevice::Text)) {
        QTextStream out(&file);
        double left = todayIncome;

        out << "\n\n";
        out << QDateTime::currentDateTime().toString("yyyy-MM-dd at HH:mm:ss") << ",";
        out << "Get money," << todayIncome << ",0," << left << "\n";

        left -= breakfastCost;
        out << ",Breakfast Cost,0," << breakfastCost << "," << left << "\n";

        left -= lunchCost;
        out << ",Lunch Cost,0," << lunchCost << "," << left << "\n";

        left -= dinnerCost;
        out << ",Dinner Cost,0," << dinnerCost << "," << left << "\n";

        for (int i = 0; i < otherExpenseNames.size(); ++i) {
            left -= otherExpenseAmounts[i];
            out << ",Other: " << otherExpenseNames[i] << "," << otherExpenseAmountsIncome[i] << "," << otherExpenseAmountsExpense[i] << "," << left << "\n";
        }

        /*
        if (debtPayment > 0) {
            left -= debtPayment;
            out << ",Pay Debt,0," << debtPayment << "," << left << "\n";
        }*/

        left -= saveToBank;
        out << ",Save to Bank,0," << saveToBank << "," << left << "\n";

        out << ",Left Money,0,0," << remainingMoney << "," << getTotalSavings() << "\n";
        file.close();
    }
}

void MainWindow::on_viewHistoryButton_clicked()
{
    HistoryDialog dialog(this);
    dialog.loadHistoryFromCSV("History.csv"); // ระบุ path ไฟล์ที่ต้องการอ่าน
    dialog.exec();
}

void MainWindow::recalculateRemaining()
{
    todayIncome = ui->incomeEdit->text().toDouble();

    breakfastCost = ui->breakfastSpin->value();
    lunchCost = ui->lunchSpin->value();
    dinnerCost = ui->dinnerSpin->value();

    saveToBank = ui->saveBankEdit->text().toDouble();

    double used = breakfastCost + lunchCost + dinnerCost + otherCost;
    if (saveToBank > 0){
        used = used + saveToBank;
    }
    remainingMoney = todayIncome - used;

    updateRemaining();
}
/*
void MainWindow::readDebtData()
{
    std::ifstream file("AllForFather.txt");
    std::string line;
    if (!file.is_open()) return;

    double all = 0, before = 0;

    if (std::getline(file, line)) {
        std::istringstream iss(line);
        std::string token;
        if (std::getline(iss, token, ':') && std::getline(iss, token))
            all = std::stod(token);
    }

    if (std::getline(file, line)) {
        std::istringstream iss(line);
        std::string token;
        if (std::getline(iss, token, ':') && std::getline(iss, token))
            before = std::stod(token);
    }

    file.close();
}

void MainWindow::writeDebtLog()
{
    QFile file("ForFatherLog.txt");
    if (file.open(QIODevice::Append | QIODevice::Text)) {
        QTextStream out(&file);
        out << QDateTime::currentDateTime().toString("yyyy-MM-dd at HH:mm:ss") << "\n";
        out << "For Father: " << debtPayment << " Bath\n\n";
        file.close();
    }
}

void MainWindow::writeDebtTotal()
{
    QFile file("ForFather.txt");
    if (file.open(QIODevice::Append | QIODevice::Text)) {
        QTextStream out(&file);
        out << debtPayment << "\n";
        file.close();
    }
}
*/
