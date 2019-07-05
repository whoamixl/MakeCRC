#ifndef DIALOG_H
#define DIALOG_H
#include<QDateTime>
#include <QDialog>
#include <QString>
#include <QMap>
#include "type.h"
#include<QFile>
#include<QDebug>
#include<QFileDialog>
#include<QMessageBox>
namespace Ui {
class Dialog;
}

typedef INT16U (*MakeFunc) (const INT8U*, INT16U);

class Dialog : public QDialog
{
    Q_OBJECT
    
public:
    explicit Dialog(QWidget *parent = 0);
    ~Dialog();
QString a;
QString dz;
QString filename;
QByteArray m_strReadBuffer;
quint32 crc32(const QByteArray &data);
int crc32_in;
protected slots:
    void make_crc16();

    void on_data_in_textChanged();
    void on_endian_clicked(bool isBigEndian);

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_method_currentTextChanged(const QString &arg1);

private:
    Ui::Dialog *ui;
    QMap<QString, MakeFunc> m_method_map;
    bool m_isLittleEndian;
};

#endif // DIALOG_H
