#include <iostream>
#include <string>
#include "Pila.h"
#include "MiClase.h"
#include <vector>

using namespace std;

double Operacion(Pila*, vector<char>&, vector<double>&);

int main(int argc, char const *argv[]) {
  std::cout << "----------Gracias Victor por probar este programa----------" << '\n';
  vector<double> numeros;
  vector<char> variables;
  int opc=0;
  string cadena;
  Pila* p= new Pila();


  while (opc!=3) {
    std::cout << "1. Hacer operacion" << '\n';
    std::cout << "2. ver resultados guardados" << '\n';
    std::cout << "3. salir" << '\n';
    cin>>opc;
    switch (opc) {
      case 1:{
        std::cout << "Ingrese una cadena" << '\n';
        cin>>cadena;

        for (int i = 0; i < cadena.length(); i++) {
          p->Apilar(cadena.at(i));
        }
        double resp=0;
        resp=Operacion(p, variables, numeros);
        std::cout << "Resultado= " << resp << '\n';
      }
      break;
      case 2:{
        for (int i = 0; i < variables.size(); i++) {
          std::cout << "Variable" << variables[i] << " = " << numeros[i] << '\n';
        }
      }
      break;
      case 3:{
        delete p;
        std::cout << "Tenga buen dia" << '\n';
      }
      break;
    }
  }




  return 0;
}

double Operacion(Pila* op,vector<char> &letra, vector<double> &asig){
  double resultado=0;
  char sym;
  double valor=0;
  bool guardar=false;
  bool primero=true;
  char operacion;
  while (op->Tope()!=NULL) {
    sym=op->Contenido();
    op->Desapilar();
    if (guardar) {
      letra.push_back(sym);
      asig.push_back(resultado);
    }
    if (sym=='+' || sym=='-' || sym=='*' || sym=='/' || sym=='(' || sym==')' || sym=='=') {
      if (sym=='(' || sym== ')' ) {
        continue;
      }else if (sym=='=') {
        guardar=true;
      }else{
        operacion=sym;
      }
    }else{
      if(primero){
        resultado=(int)sym-48;
        primero=false;
      }else{
        valor=(int)sym-48;
        if (operacion=='+') {
          resultado=valor + resultado;
        }else if(operacion=='-'){
          resultado=valor - resultado;
        }else if(operacion=='*'){
          resultado=valor * resultado;
        }else if(operacion=='/'){
          resultado=valor / resultado;
        }
      }
    }

  }
  return resultado;
}//end metodo
