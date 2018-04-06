#include "MiClase.h"
#include <iostream>

using namespace std;

MiClase::MiClase(){

}

MiClase::MiClase(char symbolo){
  this->symbolo=symbolo;
  this->anterior=NULL;
}

char MiClase::getSymbolo(){
  return symbolo;
}

void MiClase::setSymbolo(char symbolo){
  this->symbolo=symbolo;
}

MiClase* MiClase::getAnterior(){
  return anterior;
}

void MiClase::setAnterior(MiClase* anterior){
  this->anterior=anterior;
}
