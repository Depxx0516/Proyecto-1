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
};

#endif //PROYECTO__1_V1_0_PRODUCTO_H
