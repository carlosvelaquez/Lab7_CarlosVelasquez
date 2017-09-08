#pragma once
#include "Soldado.h"

class AsesinoOculto{
private:
  int asesinatos;
  int stealth;

public:
  AsesinoOculto();

  int getAsesinatos();
  int getStealth();

  void setAsesinatos(int);
  void setStealth(int);

  float calcularAtaque();
  float calcularDefensa();
};
