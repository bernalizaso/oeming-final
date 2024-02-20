#ifndef VENDEDOR_HPP
#define VENDEDOR_HPP
#include "empleado.hpp"

class Vendedor : public Empleado
{
private:
    int numeroTrabajador;
    string nombre;
    float salario;
    string area;

public:
    Vendedor(string _nombre, float _salario, string _area, int _numero);
    Vendedor();
    ~Vendedor();
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