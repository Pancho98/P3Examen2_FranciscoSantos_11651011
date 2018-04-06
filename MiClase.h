#ifndef MICLASE_H
#define MICLASE_H

using namespace std;

class MiClase{
  public:
    char symbolo;
    MiClase* anterior;

    //
    MiClase();
    MiClase(char);
    char getSymbolo();
    void setSymbolo(char);
    MiClase* getAnterior();
    void setAnterior(MiClase*);
  };

#endif
