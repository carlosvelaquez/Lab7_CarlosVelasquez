#include "AsesinoOculto.h"

AsesinoOculto::AsesinoOculto(string nNombre, string nCiudad, int nEdad, int nAsesinatos, int nStealth){
  nombre = nNombre;
  ciudad = nCiudad;
  edad = nEdad;
  asesinatos = nAsesinatos;
  stealth = nStealth;
}

int AsesinoOculto::getAsesinatos(){
  return asesinatos;
}

int AsesinoOculto::getStealth(){
  return stealth;
}

void AsesinoOculto::setAsesinatos(int nAsesinatos){
  asesinatos = nAsesinatos;
}

void AsesinoOculto::setStealth(int nStealth){
  stealth = nStealth;
}

float AsesinoOculto::calcularAtaque(){
  return asesinatos;
}

float AsesinoOculto::calcularDefensa(){
  return (stealth*10);
}
