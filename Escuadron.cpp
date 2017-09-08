#include "Escuadron.h"

Escuadron::Escuadron(string nNombre){
  nombre = nNombre;
}

string Escuadron::getNombre(){
  return nombre;
}

vector<Soldado> Escuadron::getSoldados(){
  return soldados;
}

void Escuadron::setNombre(string nNombre){
  nombre = nNombre;
}

void Escuadron::setSoldados(vector<Soldado> nSoldados){
  soldados = nSoldados;
}

float Escuadron::calcularAtaque(){
  float atk = 0;

  for (int i = 0; i < soldados.size(); i++) {
    atk += soldados.at(i).calcularAtaque();
  }

  return atk;
}

float Escuadron::calcularDefensa(){
  float def = 0;

  for (int i = 0; i < soldados.size(); i++) {
    def += soldados.at(i).calcularDefensa();
  }

  return def;
}

void Escuadron::anadirSoldado(Soldado* sold){
  soldados.push_back(*sold);
}
