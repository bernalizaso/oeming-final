#include "../include/empleado.hpp"
#include "../include/vendedor.hpp"

using namespace std;

Vendedor::Vendedor(string _nombre, float _salario, string _area, int _numero)
{
    nombre = _nombre;
    salario = _salario;
    area = _area;
    numeroTrabajador = _numero;
};
Vendedor::Vendedor(){};
Vendedor::~Vendedor(){};
void Vendedor::mensajeRecibido()
{
    cout << "Mensaje recibido por el vendedor: " << nombre << endl;
}

void Vendedor::trabajar()
{
    cout << "Estoy vendiendo cosas a clientes" << endl;
};

void Vendedor::setArea(string _area){
    area = _area;
};
void Vendedor::setNombre(string _nombre){
    nombre = _nombre;
};
void Vendedor::setSalario(float _salario){
    salario = _salario;
};
void Vendedor::setNumeroTrabajador(){};
string Vendedor::getArea()
{
    return area;
};
float Vendedor::getSalario()
{
    return salario;
}
string Vendedor::getNombre()
{
    return nombre;
}
int Vendedor::getNumeroTrabajador()
{
    return numeroTrabajador;
}