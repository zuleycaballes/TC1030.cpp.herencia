#include "Estudiante.hpp"
#include "Maestro.hpp"

#include <iostream>

int main() 
{
  Estudiante juan{"Juan",25,"ISD"}, laura{};
  Persona rosa{"Rosa", 8}, pedro{};

  std::cout << "Los datos del estudiante 1 son:\n";
  juan.muestraDatos();

  std::cout << "Los datos del estudiante 2 son:\n";
  std::cout << "Nombre:" << laura.getNombre() << " Edad: " << laura.getEdad() << " Carrera: " << laura.getCarrera() << "\n";

  std::cout << "Los datos de la persona 1 son:\n";
  rosa.muestraDatos();

  std::cout << "Los datos de la persona 2 son:\n";
  std::cout << "Nombre: " << pedro.getNombre() << " Edad: " << pedro.getEdad() << "\n";

  Maestro maria{"Maria", 35, "Computación"}, luis{};

  std::cout << "Los datos del maestro 1 son:\n";
  maria.muestraDatos();

  std::cout << "Los datos del maestro 2 son:\n";
  std::cout << "Nombre: " << luis.getNombre() << " Edad: " << luis.getEdad() << " Departamento: " << luis.getDepartamento() << "\n";

  return 0;
}
