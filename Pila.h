#ifndef PILA_H
#define PILA_H
#include "MiClase.h"

using namespace std;

class Pila{
  public:
    MiClase* pila;

    //
    Pila();
    Pila(MiClase*);
    MiClase* getPila();
    void setPila(MiClase*);
    void Apilar(MiClase*);
    MiClase* Desapilar();
    MiClase* Tope();
    bool EstaVacia();

};

#endif
