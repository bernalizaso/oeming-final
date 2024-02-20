#ifndef SUCURSAL_HPP
#define SUCURSAL_HPP
#include <iostream>
#include <string>

#include "empleado.hpp"
#include "vendedor.hpp"
#include "gerente.hpp"
#include "encargado.hpp"
using namespace std;
class Sucursal
{
private:
    Empleado *listaEmpleados[50];
    int cantidadEmpleados=0;

public:
    Sucursal();
    ~Sucursal();
    void enviarMensaje(string nombreEmpleado);
    void comenzarTrabajo();
    void listarEmpleados();
    void addEmpleado(Empleado *_empleado);
    void Gestor();
    int getCantidadEmpleados(int cantidadEmpleados);
    void setCantidadEmpleados();
};

#endif