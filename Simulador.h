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
  Ejercito roma;
  Ejercito cartago;
public:
  Ejercito* getEjercitoCartago();
  Ejercito* getEjercitoRoma();
  void simularBatalla();
};
