#include "Simulador.h"

Simulador::Simulador(){
  roma = new Ejercito("Ejercito Romano");
  cartago = new Ejercito("Ejercito Cartaginés");
}

int Simulador::simularBatalla(){
  Escuadron* esc;

  if (roma->getEscuadronRetaguardia() == NULL || cartago->getEscuadronRetaguardia() == NULL ) {
    std::cout << "[ERROR] Uno de los ejércitos no tiene un escuadrón de retaguardia" << '\n';
    return 1;
  }

  std::cout << "Simulando Batalla..." << '\n';
  std::cout << "Es el turno de los romanos." << endl << '\n';

  std::cout << "Seleccione el ejercito frontal que atacará: " << '\n';

  int op;
  for (int i = 0; i < roma->getEscuadronesFrontales().size(); i++) {
    std::cout << i << ". " << roma->getEscuadronesFrontales().at(i).getNombre() << '\n';
  }
  cout << "Ingrese el número de la opción que desea - ";
  cin >> op;

  esc = &(roma->getEscuadronesFrontales().at(op));

  int defensa = roma->getEscuadronRetaguardia()->calcularDefensa();
  int ataque = esc->calcularAtaque();

  std::cout << "Defensa Romana: " << defensa << '\n';
  std::cout << "Ataque Romano: " << ataque << '\n';

  std::cout << endl << "Es el turno de los cartagineses" << '\n';
  std::cout << "Seleccione el ejercito frontal que atacará: " << '\n';

  for (size_t i = 0; i < cartago->getEscuadronesFrontales().size(); i++) {
    std::cout << i << ". " << cartago->getEscuadronesFrontales().at(i).getNombre() << '\n';
  }
  cout << "Ingrese el número de la opción que desea - ";
  cin >> op;

  esc = &(roma->getEscuadronesFrontales().at(op));

  int defensaC = roma->getEscuadronRetaguardia()->calcularDefensa();
  int ataqueC = esc->calcularAtaque();

  std::cout << "Defensa Cartaginesa: " << defensa << '\n';
  std::cout << "Ataque Cartaginés: " << ataque << '\n';

  if (defensa > ataqueC*10) {
    std::cout << "Los romanos ganan!" << '\n';
  }else{
    if (defensaC > ataque*10) {
      std::cout << "Los cartagineses ganan!" << '\n';
    }else{
      std::cout << "Es un empate!" << '\n';
    }
  }

  return 0;
}

Ejercito* Simulador::getEjercitoRoma(){
  return roma;
}

Ejercito* Simulador::getEjercitoCartago(){
  return cartago;
}
