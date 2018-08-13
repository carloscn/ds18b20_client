#include "serialport.h"

serialPort::serialPort()
{
    this->fd = 0;
    this->readBuffer = new qint8[50];
}

int serialPort::openSerial(QString serialPath)
{
    int ret;
    struct termios setting;
    speed_t speed;

    ret = NULL;
    this->fd = ::open(serialPath.data(), O_RDWR);

    if (  this->fd == -1 ) {
        ::close( this->fd);
        return -1;
    }

    // set serial speed.
    tcgetattr( this->fd, &setting );
    speed = B115200;
    cfsetispeed(&setting, speed);
    cfsetospeed(&setting, speed);
    // set bits is 8.
    setting.c_cflag |= CS8;
    // set parity is none.
    setting.c_cflag &= ~PARENB;
    setting.c_iflag &= ~INPCK;
    // set stop bit is 1
    setting.c_cflag &= ~CSTOPB;
    // enable setting
    tcflush( this->fd, TCIFLUSH);
    setting.c_cc[VTIME] = 0;
    setting.c_cc[VMIN] = 0;
    tcsetattr( this->fd, TCSANOW, &setting);

    this->serialSocket = new QSocketNotifier( this->fd, QSocketNotifier::Read, NULL);

    QObject::connect( this->serialSocket,
                      SIGNAL(activated(int)),
                      this,
                      SLOT(on_readSerialMessage(int))
                      );

    this->serialSocket->setEnabled(true);
    ret = 0;

    return ret;
}

void serialPort::closeSerial()
{
    ::close(this->fd);
    delete this->serialSocket;
    delete this->readBuffer;

}

void serialPort::on_readSerialMessage(int para)
{
    int ret;
    ret = read(fd, this->readBuffer, sizeof(this->readBuffer));

    emit readyRead(this->readBuffer, sizeof(this->readBuffer));
}

void serialPort::writeSerial(char *ch, quint16 length)
{
    ::write( this->fd, ch, length );
}

void serialPort::writeSerial(char ch)
{
    char chb[1];
    chb[0] = ch;
    ::write( this->fd, chb, 1);
}

void serialPort::writeSerial(QString str)
{
    ::write(this->fd, str.toAscii(),str.length());
}

serialPort::run()
{

}
