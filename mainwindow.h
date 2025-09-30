#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QVector>
#include <QString>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    //void on_incomeConfirmed();
    void on_addOtherExpense();
    void on_removeOtherButton_clicked();
    void on_saveData();
    //void on_debtCheckboxChanged(int state);
    //void on_payDebtClicked();
    void on_viewHistoryButton_clicked();

private:
    Ui::MainWindow *ui;
    double todayIncome = 0;
    double saveToBank = 0;
    double breakfastCost = 0;
    double lunchCost = 0;
    double dinnerCost = 0;
    double otherCost = 0;
    double debtPayment = 0;
    double remainingMoney = 0;
    double absCost = 0;

    QVector<QString> otherExpenseNames;
    QVector<double> otherExpenseAmounts;
    QVector<double> otherExpenseAmountsExpense;
    QVector<double> otherExpenseAmountsIncome;

    void recalculateRemaining();
    void updateRemaining();
    void saveTextLogs();
    void saveCSV();
    void readDebtData();
    void writeDebtLog();
    void writeDebtTotal();
    double getTotalSavings();
    double getBank();
    void saveTodaySavings();
    void saveBank();
};

#endif // MAINWINDOW_H
