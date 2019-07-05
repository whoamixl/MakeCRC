#include "chakan.h"
#include "ui_chakan.h"
#include<QDateTime>
chakan::chakan(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::chakan)
{
    ui->setupUi(this);


}

chakan::~chakan()
{
    delete ui;
}

void chakan::showl()
{

}




void chakan::on_pushButton_clicked()
{
    ui->textBrowser->setText(z1);

}
