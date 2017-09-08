#include "Arquero.h"

Arquero::Arquero(string nNombre, string nCiudad, int nEdad, int nFlechas, int nPrecision){
  nombre = nNombre;
  ciudad = nCiudad;
  edad = nEdad;
  flechas = nFlechas;
  precision = nPrecision;
}

int Arquero::getFlechas(){
  return flechas;
}

int Arquero::getPrecision(){
  return precision;
}

void Arquero::setFlechas(int nFlechas){
  flechas = nFlechas;
}

void Arquero::setPrecision(int nPrecision){
  precision = nPrecision;
}

float Arquero::calcularAtaque(){
  return (flechas*(precision/1000));
}

float Arquero::calcularDefensa(){
  return 0;
}
