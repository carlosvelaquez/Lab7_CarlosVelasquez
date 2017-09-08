#include "Simulador.h"

Simulador::Simulador(){
  roma = new Ejercito("Ejercito Romano");
  cartago = new Ejercito("Ejercito Cartaginés");
}
void Simulador::simularBatalla(){}

Ejercito* Simulador::getEjercitoRoma(){
  return roma;
}

Ejercito* Simulador::getEjercitoCartago(){
  return cartago;
}
