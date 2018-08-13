#ifndef SERIALPORT_H
#define SERIALPORT_H

#include <QObject>
#include <QString>
#include <QThread>
#include <QDebug>
#include "stdlib.h"
#include "unistd.h"
#include <fcntl.h>
#include <termios.h>
#include "error.h"
#include <QSocketNotifier>

class serialPort : public QThread
{
    Q_OBJECT
public:
    explicit serialPort();

protected:
    run();
private:


    QSocketNotifier *serialSocket;
    quint8 *readBuffer;
    int fd;
    void writeSerial(QString str);
    void writeSerial(char *ch , quint16 length);
    void writeSerial(char ch);
    void readSerial(char *ch, quint16 length);

    int openSerial(QString serialPath);
    void closeSerial();

signals:
    readyRead( char *ch, quint16 length );

public slots:
    void on_readSerialMessage(int para);
};

#endif // SERIALPORT_H
