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

const string &Producto::getNombre() const {
    return nombre;
}

void Producto::setNombre(const string &nombre) {
    Producto::nombre = nombre;
}

float Producto::getPrecio() const {
    return precio;
}

void Producto::setPrecio(float precio) {
    Producto::precio = precio;
}

int Producto::getCantidad() const {
    return cantidad;
}

void Producto::setCantidad(int cantidad) {
    Producto::cantidad = cantidad;
}
