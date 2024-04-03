//
// Created by Home on 02/04/2024.
//

#ifndef CALZADO_H
#define CALZADO_H
#include "Producto.h"

class Calzado : public Producto {
private:
    int talla;
public:
    Calzado(string nombre, int cantidad, float precio, int talla);
    void mostrarInformacion() const override;
};

#endif  // CALZADO_H
