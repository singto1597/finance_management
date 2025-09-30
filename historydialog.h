#ifndef HISTORYDIALOG_H
#define HISTORYDIALOG_H

#include <QDialog>
#include <QString>

namespace Ui {
class HistoryDialog;
}

class HistoryDialog : public QDialog
{
    Q_OBJECT

public:
    explicit HistoryDialog(QWidget *parent = nullptr);
    ~HistoryDialog();

    void loadHistoryFromCSV(const QString &filePath);

private:
    Ui::HistoryDialog *ui;
};

#endif // HISTORYDIALOG_H
