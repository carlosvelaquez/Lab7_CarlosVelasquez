#pragma once
#include "Soldado.h"

class AsesinoOculto : public Soldado{
private:
  int asesinatos;
  int stealth;

public:
  AsesinoOculto(string, string, int, int, int);

  int getAsesinatos();
  int getStealth();

  void setAsesinatos(int);
  void setStealth(int);

  float calcularAtaque();
  float calcularDefensa();
};
