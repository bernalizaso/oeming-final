#ifndef EMPLEADO_HPP
#define EMPLEADO_HPP
#include <string>
#include <iostream>
using namespace std;
class Empleado
{  
public:
    virtual void trabajar()=0;
    virtual void mensajeRecibido()=0;
    virtual void setNombre()=0;
    virtual string getNombre()=0;
    virtual void setSalario()=0;
    virtual float getSalario()=0;
    virtual void setArea()=0;
    virtual string getArea()=0;
    virtual void setNumeroTrabajador()=0;
    virtual int getNumeroTrabajador()=0;
};

#endif