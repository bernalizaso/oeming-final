#ifndef EMPLEADO_HPP
#define EMPLEADO_HPP
#include <string>
#include <iostream>
using namespace std;
class Empleado
{
private:
    int numeroTrabajador;
    string nombre;
    float salario;
    string area;

public:
    Empleado(string _nombre, float _salario, string _area, int _numero);
    Empleado();
    ~Empleado();
    virtual void trabajar();
    virtual void mensajeRecibido();
    void setNombre(string _nombre);
    virtual string getNombre();
    void setSalario(float _salario);
    virtual float getSalario();
    void setArea(string _area);
    virtual string getArea();
    void setNumeroTrabajador();
    virtual int getNumeroTrabajador();
};

#endif