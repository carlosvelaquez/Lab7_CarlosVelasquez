#pragma once
#include <vector>
#include <string>
#include "Soldado.h"
#include "Arquero.h"
#include "CorazaDura.h"
#include "AsesinoOculto.h"

using namespace std;

class Escuadron{
private:
  string nombre;
  vector<Soldado> soldados;

public:
  Escuadron(string);

  string getNombre();
  vector<Soldado> getSoldados();

  void setNombre(string);
  void setSoldados(vector<Soldado>);

  void anadirSoldado(Soldado*);

  float calcularAtaque();
  float calcularDefensa();
};
