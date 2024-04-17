#include <iostream>

using namespace std;

int main () {
 float AlturaDelObjeto;
 cout << "Ingrese la altura del objeto: ";
 cin >> AlturaDelObjeto;
 float BaseDelObjeto;
 cout << "Ingrese la base del objeto: ";
 cin >> BaseDelObjeto;
 float ProfundidadDelObjeto;
 cout << "Ingrese la profundidad del objeto: ";
 cin >> ProfundidadDelObjeto;
 float VolumenDelObjeto;

VolumenDelObjeto = BaseDelObjeto * ProfundidadDelObjeto * AlturaDelObjeto;

cout << "El volumen del cuerpo es de:" << VolumenDelObjeto;

return 0;
}



/*
  [] declarar las variables van a ser float
  [] pedir los datos al usuario (base, altura, profundidad)
  [] reemplaar las variables con los datos del usuario
  [] inicializar las variables numericas que pueden ser un float
  [] asignar la operacion de multiplicaciones a las variables
  [] mostrar el resultado
*/


