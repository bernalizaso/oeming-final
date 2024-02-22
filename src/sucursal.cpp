#include "../include/sucursal.hpp"

Sucursal::Sucursal(){};
Sucursal::~Sucursal(){};
void Sucursal::enviarMensaje(string nombreEmpleado)
{
    bool empleadoEncontrado = false;

    for (int i = 0; i < cantidadEmpleados; i++)
    {
        if (listaEmpleados[i]->getNombre() == nombreEmpleado)
        {
            empleadoEncontrado = true;
            string mensaje;
            cout << "Escriba el mensaje para el empleado " << nombreEmpleado << ": ";
            getline(cin, mensaje);
            cout << mensaje << endl;
            listaEmpleados[i]->mensajeRecibido();
        }
    }

    if (empleadoEncontrado==false)
    {
        cout << "No se encontro el empleado: " << nombreEmpleado << endl;
    }
}
void Sucursal::comenzarTrabajo()
{
    for (int i = 0; i < cantidadEmpleados; i++)
    {
        listaEmpleados[i]->trabajar();
    }
};
void Sucursal::listarEmpleados()
{
    for (int i = 0; i < cantidadEmpleados; i++)
    {
        cout << "Empleado: " << listaEmpleados[i]->getNombre() << " Puesto:  " << listaEmpleados[i]->getArea() << endl;
    }
};
int getCantidadEmpleados(int cantidadEmpleados)
{
    return cantidadEmpleados;
}
void Sucursal::addEmpleado(Empleado *_empleado)
{
    if (cantidadEmpleados < 3)
    {
        listaEmpleados[cantidadEmpleados] = _empleado;
        cantidadEmpleados++;
    }
    else
    {
        cout << "sucursal llena" << endl;
    }
};
// por si es necesario hacer menu, yo creo que no void Gestor(){};