#include "../include/empleado.hpp"
#include "../include/encargado.hpp"

Encargado::Encargado(string _nombre, float _salario, string _area, int _numero)
{
    nombre = _nombre;
    salario = _salario;
    area = _area;
    numeroTrabajador = _numero;
};
Encargado::Encargado(){};
Encargado::~Encargado(){};
void Encargado::mensajeRecibido()
{
    cout << "Mensaje recibido por el Encargado: " << nombre << endl;
}

void Encargado::trabajar()
{
    cout << "Estoy gestionando esta sucursal" << endl;
};

 void Encargado::setArea(){
     
 };
 void Encargado::setNombre(){
     
 };
 void Encargado::setSalario(){
     
 };

 void Encargado::setNumeroTrabajador(){};

string Encargado::getArea()
{
    return area;
};
float Encargado::getSalario()
{
    return salario;
}
string Encargado::getNombre()
{
    return nombre;
}
int Encargado::getNumeroTrabajador()
{
    return numeroTrabajador;
}