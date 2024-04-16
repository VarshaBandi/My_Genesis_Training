#ifndef SENSOR_H
#define SENSOR_H
#include<string>
#include <iostream>
#include"SensorType.h"

class Sensor
{
private:
    const int _id;
    std::string _name;
    SensorType _type;
    int _reading;
public:
    Sensor()=delete;
    Sensor(const Sensor&)=default;
    Sensor(Sensor&&)=delete;
    Sensor& operator=(const Sensor&)=delete;
    Sensor& operator=(Sensor&&)=delete;
     ~Sensor()=default;

    Sensor(int id,std::string name,SensorType type,int reading);

    int getid() const { return _id; }
    std::string getname() const { return _name; }
    SensorType gettype() const { return _type; }
    int getreading() const { return _reading; }

    friend std::ostream &operator<<(std::ostream &os, const Sensor &rhs);

    
};


#endif // SENSOR_H
