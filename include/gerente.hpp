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
    void mensajeRecibido()override;
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