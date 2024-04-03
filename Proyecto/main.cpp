#include <iostream>
#include <vector>
#include <string>
#include "Calzado.h"
#include "Camisetas.h"
#include "Pantalones.h"
#include "Inventario.h"

using namespace std;


int main() {
    // Crear un inventario
    Inventario inventario;

    // Variable para almacenar la opción del usuario
    int opcion;

    // Bucle que se ejecuta hasta que el usuario elija la opción de salir
    while (true) {
        // Menú de opciones
        cout << "\nBienvenido al sistema de gestión de inventario\n";
        cout << "1. Agregar un nuevo producto\n";
        cout << "2. Buscar un producto por nombre\n";
        cout << "3. Mostrar inventario\n";
        cout << "4. Vender un producto\n";
        cout << "5. Salir\n";

        // Leer la opción del usuario
        cout << "Por favor, seleccione una opción: ";
        cin >> opcion;

        // Ejecutar la opción seleccionada por el usuario
        switch (opcion) {
            case 1: {
                // Agregar un nuevo producto
                // Variable para almacenar la opción del usuario
                int opcion;
                // Menú para elegir el tipo de producto
                cout << "\nSeleccione el tipo de producto:\n";
                cout << "1. Camiseta\n";
                cout << "2. Pantalón\n";
                cout << "3. Calzado\n";
                cout << "Ingrese su elección: ";
                cin >> opcion;
                // Datos comunes para todos los productos
                string nombre;
                int cantidad;
                float precio;
                // Leer datos específicos del tipo de producto
                switch (opcion) {
                    case 1: {
                        string tipoTela;
                        cout << "Ingrese el nombre de la camiseta: ";
                        cin >> nombre;
                        cout << "Ingrese la cantidad de camisetas: ";
                        cin >> cantidad;
                        cout << "Ingrese el precio de la camiseta: ";
                        cin >> precio;
                        cout << "Ingrese el tipo de tela de la camiseta: ";
                        cin >> tipoTela;
                        inventario.agregarProducto(new Camisetas(nombre, cantidad, precio, tipoTela));
                        break;
                    }
                    case 2: {
                        string tipoPantalon;
                        cout << "Ingrese el nombre del pantalón: ";
                        cin >> nombre;
                        cout << "Ingrese la cantidad de pantalones: ";
                        cin >> cantidad;
                        cout << "Ingrese el precio del pantalón: ";
                        cin >> precio;
                        cout << "Ingrese el tipo de pantalón: ";
                        cin >> tipoPantalon;
                        inventario.agregarProducto(new Pantalones(nombre, cantidad, precio, tipoPantalon));
                        break;
                    }
                    case 3: {
                        int talla;
                        cout << "Ingrese el nombre del calzado: ";
                        cin >> nombre;
                        cout << "Ingrese la cantidad de calzados: ";
                        cin >> cantidad;
                        cout << "Ingrese el precio del calzado: ";
                        cin >> precio;
                        cout << "Ingrese la talla del calzado: ";
                        cin >> talla;
                        inventario.agregarProducto(new Calzado(nombre, cantidad, precio, talla));
                        break;
                    }
                    default:
                        cout << "Opción no válida.\n";
                }
                break;
            }
            case 2: {

                string nombreProducto;
                cout << "\nIntroduce el nombre del producto que deseas buscar: ";
                cin >> nombreProducto;
                inventario.buscarProducto(nombreProducto);
                break;
            }
            case 3: {

                inventario.mostrarInventario();
                break;
            }
            case 4: {

                string nombreProducto;
                int cantidadVendida;
                cout << "\nIntroduce el nombre del producto que deseas vender: ";
                cin >> nombreProducto;
                cout << "Introduce la cantidad que deseas vender: ";
                cin >> cantidadVendida;
                inventario.venderProducto(nombreProducto, cantidadVendida);
                break;
            }
            case 5: {

                cout << "Saliendo del programa.\n";
                return 0;
            }
            default: {
                cout << "Opción no válida.\n";
            }
        }
    }

    return 0;
}