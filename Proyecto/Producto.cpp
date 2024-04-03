//
// Created by Home on 03/04/2024.
//

#include "Producto.h"
#include <iostream>

Producto::Producto() {}

Producto::Producto(string nombre, int cantidad, float precio)
        : nombre(nombre), cantidad(cantidad), precio(precio) {}

Producto::~Producto() {}

string Producto::getNombre() const {
    return nombre;
}

int Producto::getCantidad() const {
    return cantidad;
}

float Producto::getPrecio() const {
    return precio;
}

void Producto::setNombre(string nombre) {
    nombre = nombre;
}

void Producto::setCantidad(int cantidad) {
    cantidad = cantidad;
}

void Producto::setPrecio(float precio) {
    precio = precio;
}

void Producto::mostrarInformacion() const {
    std::cout << "Nombre: " << nombre << ", Cantidad: " << cantidad << ", Precio: $" << precio << std::endl;
}