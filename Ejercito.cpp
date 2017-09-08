#include "Ejercito.h"

Ejercito::Ejercito(string nNombre){
  nombre = nNombre;
  escuadronesFrontales.clear();
}

Escuadron* Ejercito::getEscuadronRetaguardia(){
  return escuadronRetaguardia;
}

void Ejercito::setEscuadronRetaguardia(Escuadron* nEscuadron){
  escuadronRetaguardia = nEscuadron;
}

vector<Escuadron> Ejercito::getEscuadronesFrontales(){
  return escuadronesFrontales;
}

void Ejercito::anadirEscuadronFrontal(Escuadron* escuadron){
  escuadronesFrontales.push_back(*escuadron);
}
