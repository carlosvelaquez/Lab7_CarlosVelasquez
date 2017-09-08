#include "CorazaDura.h"

CorazaDura::CorazaDura(string nNombre, string nCiudad, int nEdad, int nDureza, int nLanzas){
  nombre = nNombre;
  ciudad = nCiudad;
  edad = nEdad;
  dureza = nDureza;
  lanzas = nLanzas;
}

int CorazaDura::getDureza(){
  return dureza;
}

int CorazaDura::getLanzas(){
  return lanzas;
}

void CorazaDura::setDureza(int nDureza){
  dureza = nDureza;
}

void CorazaDura::setLanzas(int nLanzas){
  lanzas = nLanzas;
}

float CorazaDura::calcularAtaque(){
  return lanzas;
}

float CorazaDura::calcularDefensa(){
  return dureza;
}
