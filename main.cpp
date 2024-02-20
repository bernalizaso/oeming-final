/*
Marco Práctico:

Una empresa no convoca para la construcción de su APP de Personal.
La misma cuenta con 3 categorías de Empleados (Gerente, Encargado y Vendedor), que pertenecen a una Sucursal, la idea es que los Empelados reciban Notificaciones de la Empresa (mensaje x consola x empleado). Además, la aplicación deberá listar los Empleados en la sucursal (puede implementar 1 sola sucursal, opción de mínima, o varias sucursales x empresa).
Se pide desarrollar una solución que Implemente lo solicitado, con las siguientes condiciones:
1.	Implementar tanto el .h como el .cpp de las clases
2.	Realizar la Herencia y la agregación correspondiente
3.	Implementado Funciones Virtuales Puras (La Clase Empleado debe ser Abstracta).
4.	En el Main deberá modularizar el desarrollo respetando las pautas tratadas en Clase (modularizar en SRC, Include o similar).
5.	La Aplicación Deberá solicitar 3 Empleados que deberán ser tratados Polimórficamente, dado sus actividades (ej.. Método Trabajar.. imprime diferentes tareas).
6.	Deberá Implementarse en Punteros.
7.	Implementando Polimorfismo recorrer los Empelados mostrando su salario, área y Datos personales.

*/

#include <iostream>
#include <string>
#include "./include/empleado.hpp"
#include "./include/encargado.hpp"
#include "./include/gerente.hpp"
#include "./include/vendedor.hpp"
#include "./include/sucursal.hpp"
// #include "./src/empleado.cpp"
// #include "./src/encargado.cpp"
// #include "./src/vendedor.cpp"
// #include "./src/gerente.cpp"
// #include "./src/sucursal.cpp"
//#include <>
using namespace std;
int main(int argc, char const *argv[])
{
    Empleado* empleado1 = new Vendedor("Juan", 50,"ventas", 1);
    Empleado* empleado2 = new Gerente("pedro", 70, "gerencia",2 );
    Empleado* empleado3 = new Encargado("martin", 60, "general", 3);
    Sucursal sucursal1;
    sucursal1.addEmpleado(empleado1);
    sucursal1.addEmpleado(empleado2);
    sucursal1.addEmpleado(empleado3);
    sucursal1.listarEmpleados();
    sucursal1.comenzarTrabajo();
    sucursal1.enviarMensaje("martin");
    sucursal1.enviarMensaje("martin pero mal escrito");
    return 0;
    delete empleado1;
    delete empleado2;
    delete empleado3;
    
}
//Vendedor(string _nombre, float _salario, string _area, int _numero);

