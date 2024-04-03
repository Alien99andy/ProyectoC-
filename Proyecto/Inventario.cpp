#include "Inventario.h"
#include "Producto.h"
#include <iostream>

Inventario::~Inventario() {
    for (auto& producto : productos) {
        delete producto;
    }
}


void Inventario::agregarProducto(Producto* nuevoProducto) {
    // Verificar si ya existe un producto con el mismo nombre y precio
    for (auto& producto : productos) {
        if (producto->getNombre() == nuevoProducto->getNombre() && producto->getPrecio() == nuevoProducto->getPrecio()) {
            // Actualizar la cantidad del producto existente
            producto->setCantidad(producto->getCantidad() + nuevoProducto->getCantidad());
            cout << "Se ha actualizado la cantidad del producto existente en el inventario." << endl;
            delete nuevoProducto; // Liberar la memoria del nuevo producto ya que no lo necesitamos
            return;
        }
    }
    // Si no existe, agregar el nuevo producto al inventario
    productos.push_back(nuevoProducto);
    cout << "Producto agregado al inventario." << endl;
}
// Método para buscar un producto por nombre y mostrar sus datos
void Inventario::buscarProducto(const string& nombre) const {
    bool encontrado = false;
    for (const auto& producto : productos) {
        if (producto->getNombre() == nombre) {
            producto->mostrarInformacion();
            encontrado = true;
            break;
        }
    }
    if (!encontrado) {
        cout << "Producto no encontrado en el inventario." << endl;
    }
}
// Método para mostrar el inventario
void Inventario::mostrarInventario() const {
    cout << "Inventario:\n";
    for (const auto& producto : productos) {
        producto->mostrarInformacion();
    }
}
// Método para vender un producto y reducir su cantidad en el inventario
void Inventario::venderProducto(const string& nombre, int cantidadVendida) {
    for (auto& producto : productos) {
        if (producto->getNombre() == nombre) {
            // Validar que la cantidad vendida no sea mayor a la cantidad almacenada
            if (cantidadVendida > producto->getCantidad()) {
                cout << "La cantidad vendida es mayor a la cantidad almacenada. Por favor, ingresa una cantidad válida." << endl;
                return;
            }
            producto->setCantidad(producto->getCantidad() - cantidadVendida);
            cout << "Se han vendido " << cantidadVendida << " unidades del producto '" << nombre << "'." << endl;
            return;
        }
    }
    cout << "Producto no encontrado en el inventario." << endl;
}