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
    void mensajeRecibido() override;
    void trabajar()override;
    void setNombre()override;
    string getNombre()override;
    void setSalario()override;
    float getSalario()override;
    void setArea()override;
    string getArea()override;
    void setNumeroTrabajador()override;
    int getNumeroTrabajador()override;
};

#endif