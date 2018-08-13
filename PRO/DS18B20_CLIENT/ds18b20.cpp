#include "ds18b20.h"

ds18b20::ds18b20()
{

}

float ds18b20::getTempValue( )
{
    int tempFd;
    float rTemp;
    int tempValueInt[5];

    tempFd = open("/dev/DS18B20",0);
    if ( tempFd < 0 ) {
       // QMessageBox::warning(this,"Warning","Open DS18B20 nod failed, Please check if load ko driver?", QMessageBox::NoButton);
        return 0.0f;
    }

    int ret = read( tempFd, tempValueInt, 5 );
    close(tempFd);
    rTemp = ((float)tempValueInt[0]);
    rTemp /= 100.0f;

    return rTemp;
}
