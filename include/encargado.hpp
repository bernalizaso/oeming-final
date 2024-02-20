#ifndef ENCARGADO_HPP
#define ENCARGADO_HPP
#include "empleado.hpp"

class Encargado : public Empleado
{
private:
    int numeroTrabajador;
    string nombre;
    float salario;
    string area;

public:
    Encargado(string _nombre, float _salario, string _area, int _numero);
    Encargado();
    ~Encargado();
    void mensajeRecibido();
    void trabajar();
    void setNombre(string _nombre);
    string getNombre();
    void setSalario(float _salario);
    float getSalario();
    void setArea(string _area);
    string getArea();
    void setNumeroTrabajador();
    int getNumeroTrabajador();
};

#endif