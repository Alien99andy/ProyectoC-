//
// Created by Home on 02/04/2024.
//

#ifndef CAMISETAS_H
#define CAMISETAS_H


#include <string>
#include "Producto.h"

using namespace std;

class Camisetas : public Producto {
private:
    string tipoTela;
public:
    Camisetas(string nombre, int cantidad, float precio, string tipoTela);
    void mostrarInformacion() const override;
};

#endif  // CAMISETAS_H