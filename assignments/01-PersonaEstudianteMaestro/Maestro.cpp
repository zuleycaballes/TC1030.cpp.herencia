#include "Maestro.hpp"
#include <iostream>

// Implementación de los métodos de la clase Maestro

Maestro::Maestro() {
    // Constructor por defecto
}

Maestro::Maestro(std::string nombre, int edad, std::string departamento) {
    // Constructor con parametros
    this->nombre = nombre;
    this->edad = edad;
    this->departamento = departamento;
}

std::string Maestro::getDepartamento() {
    // Método para obtener el departamento del maestro
    return departamento;
}

void Maestro::muestraDatos() {
    // Método para imprimir la información del maestro
    std::cout << "Nombre: " << nombre << std::endl;
    std::cout << "Edad: " << edad << std::endl;
    std::cout << "Departamento: " << departamento << std::endl;
}

// Implementación de otros métodos de la clase Maestro, si los hay
