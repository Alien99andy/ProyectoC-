cmake_minimum_required(VERSION 3.27)
project(Proyecto)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -static-libstdc++ -static-libgcc")

set(SOURCE_FILES main.cpp)
add_executable(Proyecto main.cpp
        Camisetas.cpp
        Camisetas.h
        Pantalones.cpp
        Pantalones.h
        Calzado.cpp
        Calzado.h
        Inventario.cpp
        Inventario.h
        Producto.cpp
        Producto.h
)
