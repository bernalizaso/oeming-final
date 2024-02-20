#ifndef GERENTE_HPP
#define GERENTE_HPP
#include "empleado.hpp"

class Gerente : public Empleado
{
private:
    int numeroTrabajador;
    string nombre;
    float salario;
    string area;

public:
    Gerente(string _nombre, float _salario, string _area, int _numero);
    Gerente();
    ~Gerente();
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