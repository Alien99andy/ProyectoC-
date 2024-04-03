//
// Created by Home on 02/04/2024.
//

#include "Camisetas.h"
#include <iostream>

Camisetas::Camisetas(string nombre, int cantidad, float precio, string tipoTela)
        : Producto(nombre, cantidad, precio), tipoTela(tipoTela) {}

void Camisetas::mostrarInformacion() const {
    std::cout << "Nombre: " << nombre << ", Cantidad: " << cantidad << ", Precio: $" << precio << ", Tipo de Tela: " << tipoTela << std::endl;
}