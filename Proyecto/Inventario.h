

#ifndef INVENTARIO_H
#define INVENTARIO_H

#include <vector>
#include "Producto.h"
using namespace std ;
class Inventario {
private:
    std::vector<Producto*> productos;
public:
    ~Inventario();
    void agregarProducto(Producto* nuevoProducto);
    void buscarProducto(const string& nombre) const;
    void mostrarInventario() const;
    void venderProducto(const string& nombre, int cantidadVendida);
};

#endif  // INVENTARIO_H
