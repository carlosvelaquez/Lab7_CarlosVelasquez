#include "Soldado.h"

string Soldado::getNombre(){
  return nombre;
}

string Soldado::getCiudad(){
  return ciudad;
}

int Soldado::getEdad(){
  return edad;
}

void Soldado::setNombre(string nNombre){
  nombre = nNombre;
}

void Soldado::setCiudad(string nCiudad){
  ciudad = nCiudad;
}

void Soldado::setEdad(int nEdad){
  edad = nEdad;
}
