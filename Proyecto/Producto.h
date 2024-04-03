//
// Created by Home on 03/04/2024.
//

#ifndef PRODUCTO_H
#define PRODUCTO_H

#include <string>

using namespace std;
class Producto {
protected:
    string nombre;
    int cantidad;
    float precio;
public:
    Producto();
    Producto(string nombre, int cantidad, float precio);
    virtual ~Producto(); // Destructor virtual para polimorfismo
    // Métodos get y set
    string getNombre() const ;
    int getCantidad() const ;
    float getPrecio() const;
    void setNombre(string nombre) ;
    void setCantidad(int cantidad) ;
    void setPrecio(float precio) ;
    // Método virtual para mostrar información del producto
    virtual void mostrarInformacion() const ;
};

#endif  // PRODUCTO_H
