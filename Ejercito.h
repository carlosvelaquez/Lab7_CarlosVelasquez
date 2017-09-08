#pragma once
#include <vector>
#include <string>
#include <iostream>
#include "Escuadron.h"
#include "Soldado.h"
#include "Arquero.h"
#include "CorazaDura.h"
#include "AsesinoOculto.h"

using namespace std;

class Ejercito{
private:
  string nombre;
  vector<Escuadron> escuadronesRetaguardia;
  vector<Escuadron> escuadronesFrontales;
public:
  Ejercito(string);
};
