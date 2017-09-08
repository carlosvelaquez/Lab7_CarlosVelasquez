#pragma once
#include <string>

using namespace std;

class Soldado{
protected:
  string nombre;
  string ciudad;
  int edad;

public:
  string getNombre();
  string getCiudad();
  int getEdad();

  void setNombre(string);
  void setCiudad(string);
  void setEdad(int);

  virtual float calcularAtaque();
  virtual float calcularDefensa();
};
