#pragma once
#include <vector>
#include <string>
#include <iostream>
#include "Ejercito.h"
#include "Escuadron.h"
#include "Soldado.h"
#include "Arquero.h"
#include "CorazaDura.h"
#include "AsesinoOculto.h"

class Simulador{
private:
  Ejercito* roma = NULL;
  Ejercito* cartago = NULL;
public:
  Simulador();
  Ejercito* getEjercitoCartago();
  Ejercito* getEjercitoRoma();
  void simularBatalla();
};
