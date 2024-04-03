//
// Created by Home on 02/04/2024.
//

#ifndef PANTALONES_H
#define PANTALONES_H


#include "Producto.h"

using namespace std;

class Pantalones : public Producto {
private:
    string tipoPantalon;
public:
    Pantalones(string nombre, int cantidad, float precio, string tipoPantalon);
    void mostrarInformacion() const override;
};

#endif  // PANTALONES_H
