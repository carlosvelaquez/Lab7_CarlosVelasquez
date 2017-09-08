#pragma once
#include "Soldado.h"

class Arquero : public Soldado{
private:
  int flechas;
  int precision;

public:
  Arquero(string, string, int, int, int);

  int getFlechas();
  int getPrecision();

  void setFlechas(int);
  void setPrecision(int);

  float calcularAtaque();
};
