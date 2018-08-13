#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QTimer>
#include <QString>
#include <QDebug>
#include <QtNetwork>
#include <QMessageBox>

#include "ds18b20.h"
#include "serialport.h"

namespace Ui {
class Widget;
}

class Widget : public QWidget
{
    Q_OBJECT

public:
    explicit Widget(QWidget *parent = 0);
    ~Widget();

private slots:
    void on_pushButtonGetTemp_clicked();
    void on_timerOut();
    void on_client_read_message();

    void on_pushButtonConnect_clicked();

private:
    Ui::Widget *ui;
    ds18b20 *ds18b20Handle;
    QTimer *tempTimer;
    QTcpServer  *server;
    QTcpSocket  *socket;
    serialPort  *serial;
    void sendTempToServer(void);

};

#endif // WIDGET_H
