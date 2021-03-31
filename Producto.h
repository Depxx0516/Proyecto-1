//
// Created by deivy on 31/3/2021.
//

#ifndef PROYECTO__1_V1_0_PRODUCTO_H
#define PROYECTO__1_V1_0_PRODUCTO_H
#include <iostream>

using namespace std;

class Producto {
private:
    string nombre;
    float precio;
    int cantidad;
public:
    Producto(const string &nombre="", float precio=0, int cantidad=0);

    const string &getNombre() const;

    void setNombre(const string &nombre);

    float getPrecio() const;

    void setPrecio(float precio);

    int getCantidad() const;

    void setCantidad(int cantidad);
};

#endif //PROYECTO__1_V1_0_PRODUCTO_H
