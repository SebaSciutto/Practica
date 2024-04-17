#include <iostream>

using namespace std;

int main () {
 float PesoCorporal;
 cout << "Ingrese el peso en kilogramos: ";
 cin >> PesoCorporal;
 float Altura;
 cout << "Ingrese la altura en metros: ";
 cin >> Altura;
 float IMC;

IMC = PesoCorporal / ( Altura * Altura );

cout << "El IMC es de:" << IMC;

if (IMC < 18.5) {
 cout << "Tenes bajo peso";
} else if (IMC >= 18.5 && PesoCorporal <= 25){
 cout << "Tenes un peso saludable";
 } else if (IMC > 25){
    cout << "Tenes sobrepeso";
 }



return 0;

}




/*
  [] declarar las variables van a ser float
  [] pedir los datos al usuario (peso en kilos, altura en metros)
  [] reemplaar las variables con los datos del usuario
  [] inicializar las variables numericas que pueden ser un float
  [] asignar la operacion de multiplicaciones a las variables
  [] mostrar el resultado
*/
