#include "../include/empleado.hpp"
#include "../include/gerente.hpp"

Gerente::Gerente(string _nombre, float _salario, string _area, int _numero)
{
    nombre = _nombre;
    salario = _salario;
    area = _area;
    numeroTrabajador = _numero;
};
Gerente::Gerente(){};
Gerente::~Gerente(){};
void Gerente::mensajeRecibido()
{
    cout << "Mensaje recibido por el Gerente: " << nombre << endl;
}

void Gerente::trabajar()
{
    cout << "Estoy gerenciando clientes y sucursales" << endl;
};

void Gerente::setArea(string _area){
    area = _area;
};
void Gerente::setNombre(string _nombre){
    nombre = _nombre;
};
void Gerente::setSalario(float _salario){
    salario = _salario;
};
void Gerente::setNumeroTrabajador(){};
string Gerente::getArea()
{
    return area;
};
float Gerente::getSalario()
{
    return salario;
}
string Gerente::getNombre()
{
    return nombre;
}
int Gerente::getNumeroTrabajador()
{
    return numeroTrabajador;
}