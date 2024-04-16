#include"laptop.h"

int main()
{
    Laptop l(999.99,"Dell",512);
    l.display();
    l.powerOn();
    l.connectToWifi();
    l.checkBatteryStatus();
    l.powerOff();

    return 0;
}