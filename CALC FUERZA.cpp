#include <iostream>

using namespace std;


/*
  [] declarar las variables van a ser float
  [] pedir los datos al usuario
  [] reemplaar las variables con los datos del usuario
  [] inicializar las variables numericas que pueden ser un float
  [] asignar la operacion de multiplicacion a las variables
  [] mostrar el resultado
*/

 int main () {

 float PesoDelObjeto;
 cout << "Ingrese el peso ";
  cin >> PesoDelObjeto;
 float VelocidadDelObjeto;
 cout << "Ingrese velocidad ";
  cin >> VelocidadDelObjeto;

 float ResultadoOperacion = PesoDelObjeto*VelocidadDelObjeto;
 cout << "La fuerza del impacto es de: " << ResultadoOperacion;

 return 0;


 }
