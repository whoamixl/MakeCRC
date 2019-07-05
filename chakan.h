#ifndef CHAKAN_H
#define CHAKAN_H

#include <QDialog>

namespace Ui {
class chakan;
}

class chakan : public QDialog
{
    Q_OBJECT

public:
    explicit chakan(QWidget *parent = 0);
    ~chakan();
    QString z1;
    void showl();
private slots:
    void on_pushButton_clicked();

private:
    Ui::chakan *ui;
};

#endif // CHAKAN_H
