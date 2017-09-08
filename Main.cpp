#include "Ejercito.h"

int menu();

int main(){
  bool salir = false;

  while (!salir) {
    switch (menu()) {

      case 3:{
        salir = true;
      }break;
      default:{
        cout << "Opción inválida, por favor intente de nuevo." << endl;
      }break;
    }
  }
}

int menu(){
  int op;

  cout << "----------------------------------" << endl
  << "Menú Principal" << endl << endl
  << "1. Menú de Ejércitos" << endl
  << "2. Correr Simulación" << endl
  << "3. Salir del Programa" << endl << endl
  << "Ingrese el número de la opción que desea - ";

  cin >> op;
  cout << "----------------------------------" << endl;

  return op;
}
