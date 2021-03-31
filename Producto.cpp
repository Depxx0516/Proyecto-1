//
// Created by deivy on 31/3/2021.
//

#include "Producto.h"


Producto::Producto(const string &nombre, float precio, int cantidad) : nombre(nombre), precio(precio),
                                                                       cantidad(cantidad) {
    this->nombre=nombre;
    this->precio=precio;
    this->cantidad=cantidad;
}
