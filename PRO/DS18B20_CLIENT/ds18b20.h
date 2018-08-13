#ifndef DS18B20_H
#define DS18B20_H

#include <sys/ioctl.h>
#include <sys/file.h>
#include <QString>


class ds18b20
{
public:
    ds18b20();
    float getTempValue();
};

#endif // DS18B20_H
