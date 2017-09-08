#pragma once
#include "Soldado.h"

class CorazaDura : public Soldado{
private:
  int dureza;
  int lanzas;

public:
  CorazaDura(string, string, int, int, int);

  int getDureza();
  int getLanzas();

  void setDureza(int);
  void setLanzas(int);

  float calcularAtaque();
  float calcularDefensa();
};
