#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
    this->ds18b20Handle = new ds18b20();
    this->tempTimer = new QTimer();
    this->server = new QTcpServer(this);
    this->socket = new QTcpSocket(this);
    this->serial = new serialPort(this);

    this->tempTimer->start(1000);
    connect(this->tempTimer,SIGNAL(timeout()),this,SLOT(on_timerOut()));

    serial->openSerial("/dev/ttyUSB0");

}

Widget::~Widget()
{
    delete this->ds18b20Handle;
    delete ui;
}


void Widget::on_timerOut()
{
    this->sendTempToServer();
    this->on_pushButtonGetTemp_clicked();
}

void Widget::on_pushButtonGetTemp_clicked()
{
    float temp;
    temp = this->ds18b20Handle->getTempValue();
    ui->lineEditLocalTempValue->setText(QString::number(temp));

}

void Widget::on_pushButtonConnect_clicked()
{
    QString serverIp;
    quint16 serverPort;
    int     ret;

    serverIp = ui->lineEditServerIp->text();
    serverPort = ui->lineEditServerPort->text().toInt();

    this->socket->abort();
    this->socket->connectToHost(serverIp,serverPort,QTcpSocket::ReadWrite);
    ret = this->socket->waitForConnected(30000);
    if( !ret ) {
        QMessageBox::warning(this, "Warning","The server connect failed.");
    }else {
        QMessageBox::information(this, "Info","The server connect succussful.");
        QObject::connect( this->socket,
                          SIGNAL(readyRead()),
                          this,
                          SLOT(on_client_read_message()) );

    }
}

void Widget::on_client_read_message()
{
    QByteArray recvArrayBuffer;
    recvArrayBuffer.clear();

    recvArrayBuffer =   this->socket->readAll();
    qDebug() << "Client Recv: " << recvArrayBuffer;

}


void Widget::sendTempToServer()
{
    float temp;
    quint16 uintTemp;
    QByteArray sendCmd;

    sendCmd.clear();
    temp = this->ds18b20Handle->getTempValue();
    uintTemp = (quint16)(temp * 100);

    sendCmd.append(0xAA);
    sendCmd.append(0xBB);
    sendCmd.append(0x01);
    sendCmd.append(uintTemp);
    sendCmd.append(0xAA^0xBB^0x01^uintTemp);

    this->socket->write(sendCmd);

}
