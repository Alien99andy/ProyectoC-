//
// Created by Home on 02/04/2024.
//

#include "Producto.h"
#include <iostream>
#include "Pantalones.h"


    Pantalones::Pantalones(string nombre, int cantidad, float precio, string tipoPantalon) : Producto(nombre, cantidad, precio), tipoPantalon(tipoPantalon) {}
    void Pantalones::mostrarInformacion() const {
        cout << "Nombre: " << nombre << ", Cantidad: " << cantidad << ", Precio: $" << precio << ", Tipo de Pantalón: " << tipoPantalon << endl;
    }


