//
// Created by Home on 02/04/2024.
//
#include "Producto.h"
#include "Calzado.h"
#include <iostream>

Calzado::Calzado(string nombre, int cantidad, float precio, int talla)
        : Producto(nombre, cantidad, precio), talla(talla) {}

void Calzado::mostrarInformacion() const {
    std::cout << "Nombre: " << nombre << ", Cantidad: " << cantidad << ", Precio: $" << precio << ", Talla: " << talla << std::endl;
}
