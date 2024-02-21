@echo off 
cls
@echo "compilando"

g++ main.cpp src/empleado.cpp src/encargado.cpp src/gerente.cpp src/sucursal.cpp src/vendedor.cpp -o programa.exe
programa.exe
