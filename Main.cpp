#include "Ejercito.h"
#include "Simulador.h"

int menu();
int menuEjercitos();
int anadirEscuadron(Simulador*);
int anadirSoldado(Simulador*);

int main(){
  Simulador* simulador = new Simulador();

  bool salir = false;

  while (!salir) {
    switch (menu()) {
      case 1:{
        bool salirEjercitos = false;
        while (!salirEjercitos) {
          switch (menuEjercitos()) {
            case 1:{
              anadirEscuadron(simulador);
            }break;
            case 2:{
              anadirSoldado(simulador);
            }break;
            case 3:{
              simulador->simularBatalla();
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
      ejercito = sim->getEjercitoRoma();
    }else{
      ejercito = sim->getEjercitoCartago();
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
      cout << "Añadiendo Escuadrón Frontal..." << endl << endl
      << "Ingrese el nombre del escuadrón: ";
      string nombre;
      cin >> nombre;

      ejercito->anadirEscuadronFrontal(new Escuadron(nombre));
    }else{
      if (ejercito->getEscuadronRetaguardia() == NULL) {
        cout << "Añadiendo Escuadrón de Retaguardia..." << endl << endl
        << "Ingrese el nombre del escuadrón: ";
        string nombre;
        cin >> nombre;

        ejercito->setEscuadronRetaguardia(new Escuadron(nombre));
      }else{
        cout << "[ERROR] El ejército seleccionado ya tiene un escuadrón de retaguardia." << endl;
        return 1;
      }
    }
  }

  cout << endl << "Escuadrón creado exitosamente." << endl;
  return 0;
}

int anadirSoldado(Simulador* sim){
  Ejercito* ejercito;
  Escuadron* escuadron;
  string ciudad;

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
      ejercito = sim->getEjercitoRoma();
      ciudad = "Roma";
    }else{
      ejercito = sim->getEjercitoCartago();
      ciudad = "Cartago";
    }
  }

  opcion = -1;
  cout << "Seleccione el escuadron al cual añadir el soldado" << endl << endl;
  int i;

  for (i = 0; i < ejercito->getEscuadronesFrontales().size(); i++) {
    cout << i << ". " << ejercito->getEscuadronesFrontales().at(i).getNombre() << '\n';
  }

  if (ejercito->getEscuadronRetaguardia() != NULL) {
    cout << i << ". " << ejercito->getEscuadronRetaguardia()->getNombre() << "[Frontal]" << endl << endl;
  }


  cout << "Ingrese el número de la opción que desea - ";
  cin >> opcion;
  cout << "----------------------------------" << endl;

  if (opcion < 0 || opcion > ejercito->getEscuadronesFrontales().size()+1) {
    cout << "[ERROR] Opción no válida, intente de nuevo." << endl;
    return 1;
  }else{
    if (opcion == i) {
      escuadron = ejercito->getEscuadronRetaguardia();
      cout << "Escuadrón Seleccionado: " << escuadron->getNombre() << endl << endl;
    }else{
      escuadron = &(ejercito->getEscuadronesFrontales().at(opcion));
      cout << "Escuadrón Seleccionado: " << escuadron->getNombre() << endl << endl;
    }
  }

  opcion = -1;
  cout << "Seleccione un Tipo de Soldado" << endl << endl
  << "1. Arquero" << endl
  << "2. Coraza Dura" << endl
  << "3. Asesino Oculto" << endl << endl
  << "Ingrese el número de la opción que desea - ";
  cin >> opcion;
  cout << "----------------------------------" << endl;

  string nombre;
  int edad;

  cout << "Ingrese los datos requeridos: " << '\n'
  << "Nombre: ";
  cin >> nombre;
  cout << "Edad: ";
  cin >> edad;
  cout << "Número de Flechas: ";

  switch (opcion) {
    case 1:{
      int flechas;
      int precision;
      cout << "Número de Flechas: ";
      cin >> flechas;
      cout << "Precisión (mm): ";
      cin >> precision;

      escuadron->anadirSoldado(new Arquero(nombre, ciudad, edad, flechas, precision));
    }break;
    case 2:{
      int dureza;
      int lanzas;
      cout << "Dureza (1-10): ";
      cin >> dureza;
      cout << "Cantidad de Lanzas: ";
      cin >> lanzas;

      escuadron->anadirSoldado(new CorazaDura(nombre, ciudad, edad, dureza, lanzas));
    }break;
    case 3:{
      int asesinatos;
      int stealth;
      cout << "Asesinatos Cometidos: ";
      cin >> asesinatos;
      cout << "Nivel de Sigilo: ";
      cin >> stealth;

      escuadron->anadirSoldado(new AsesinoOculto(nombre, ciudad, edad, asesinatos, stealth));
    }break;
    default:{
      cout << "[ERROR] Opción no válida, intente de nuevo." << endl;
      return 1;
    }break;
  }

  cout << endl << "Soldado añadido exitosamente." << endl;
  return 0;
}
