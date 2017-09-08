#include "Ejercito.h"

int menu();
int menuEjercitos();
int anadirEscuadron(Simulador*)

int main(){
  Simulador simulador;

  bool salir = false;

  while (!salir) {
    switch (menu()) {
      case 1:{
        bool salirEjercitos = false;
        while (!salirEjercitos) {
          switch (menuEjercitos()) {
            case 1:{
              anadirEscuadron(&simulador);
            }break;
            case 4:{
              salirEjercitos = true;
              cout << "Regresando a Menú Principal..." << endl;
              cout << "----------------------------------" << endl;
            }break;
            default:{
              cout << "Opción inválida, por favor intente de nuevo." << endl;
            }break;
          }
        }
      }break;
      case 3:{
        salir = true;
        cout << "Saliendo..." << endl;
        cout << "----------------------------------" << endl;
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

int menuEjercitos(){
  int op;

  cout << "----------------------------------" << endl
  << "Menú de Ejércitos" << endl << endl
  << "1. Añadir Escuadron" << endl
  << "2. Añadir Soldados" << endl
  << "3. Listar Escuadrones" << endl
  << "4. Regresar a Menú Principal" << endl << endl
  << "Ingrese el número de la opción que desea - ";

  cin >> op;
  cout << "----------------------------------" << endl;

  return op;
}

int anadirEscuadron(Simulador* sim){
  Ejercito* ejercito;

  int opcion;
  cout << "Seleccione un Ejército" << endl << endl
  << "1. Ejército Romano" << endl
  << "2. Ejército Cartaginés" << endl << endl
  << "Ingrese el número de la opción que desea - ";
  cin >> opcion;
  cout << endl;

  if (opcion < 1 || opcion > 2) {
    cout << "[ERROR] Opción no válida, intente de nuevo." << endl;
    return 1;
  }else{
    if (opcion == 1) {
      ejercito = sim.getEjercitoRoma();
    }else{
      ejercito = sim.getEjercitoCartago();
    }
  }

  opcion = -1;
  cout << "Seleccione el tipo de Escuadrón" << endl << endl
  << "1. Escuadron Frontal" << endl
  << "2. Escuadrón de Retaguardia" << endl << endl
  << "Ingrese el número de la opción que desea - ";
  cin >> opcion;
  cout << "----------------------------------" << endl;

  if (opcion < 1 || opcion > 2) {
    cout << "[ERROR] Opción no válida, intente de nuevo." << endl;
    return 1;
  }else{
    if (opcion == 1) {

    }else{
      if (ejercito->getEscuadronRetaguardia() == NULL) {
        cout << "Añadiendo Escuadrón de Retaguardia..." << endl
        << "Ingrese los datos requeridos" << endl << endl;
        cout << "Nombre: ";
        string nombre;
        cin >> nombre;
        cout << "" << endl;
      }else{
        cout << "[ERROR] El ejército seleccionado ya tiene un escuadrón de retaguardia." << endl;
        return 1;
      }
    }
  }
}
