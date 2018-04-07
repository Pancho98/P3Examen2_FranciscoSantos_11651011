#include "Pila.h"
#include <iostream>

using namespace std;

Pila::Pila(){

}

Pila::Pila(MiClase* pila){
  this->pila=pila;
}

MiClase* Pila::getPila(){
  return pila;
}

void Pila::setPila(MiClase* pila){

}

void Pila::Apilar(char sym){
  MiClase* a = new MiClase(sym);
  if (pila==NULL) {
    pila=a;
  }else{
    a->setAnterior(pila);
    pila=a;
  }

}

MiClase* Pila::Desapilar(){
  if (pila!=NULL) {
    MiClase* temp=pila;
    pila=pila->getAnterior();
    return temp;
  }else{
    return pila;
  }
}

MiClase* Pila::Tope(){
  return pila;
}

bool Pila::EstaVacia(){

}

char Pila::Contenido(){
  return pila->getSymbolo();
}
