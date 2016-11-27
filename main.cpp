#include <iostream>
#include "Racional.h"

using namespace std;

int main(){

int opcion = 0;
int numerador1, numerador2, denominador1, denominador2;
  do{
    cout << "1.Sumar dos racionales" << endl << "2.Restar dos racionales" << endl << "3.Multiplicar dos racionales" << endl << "4.Dividir dos racionales" << endl  << "5.Sumar un entero con un racional" << endl;
    cout << "Ingrese su opcion: ";
    cin >> opcion;
    if(opcion == 1){
      cout << "Ingrese el numerador del primer racional: ";
      cin >> numerador1;
      cout << "Ingrese el denominador del primer racional: ";
      cin >> denominador1;
      cout << "Ingrese el numerador del segundo racional: ";
      cin >> numerador2;
      cout << "Ingrese el denominador del segundo racional: ";
      cin >> denominador2;
      Racional n1 = Racional(numerador1, denominador1);
      Racional n2 = Racional(numerador2, denominador2);
      Racional n3 = n1 + n2;
      n3.imprimir();

    }
    if(opcion == 2){
      cout << "Ingrese el numerador del primer racional: ";
      cin >> numerador1;
      cout << "Ingrese el denominador del primer racional: ";
      cin >> denominador1;
      cout << "Ingrese el numerador del segundo racional: ";
      cin >> numerador2;
      cout << "Ingrese el denominador del segundo racional: ";
      cin >> denominador2;
      Racional n1 = Racional(numerador1, denominador1);
      Racional n2 = Racional(numerador2, denominador2);
      Racional n3 = n1 - n2;
      n3.imprimir();
    }
    if(opcion == 3){
      cout << "Ingrese el numerador del primer racional: ";
      cin >> numerador1;
      cout << "Ingrese el denominador del primer racional: ";
      cin >> denominador1;
      cout << "Ingrese el numerador del segundo racional: ";
      cin >> numerador2;
      cout << "Ingrese el denominador del segundo racional: ";
      cin >> denominador2;
      Racional n1 = Racional(numerador1, denominador1);
      Racional n2 = Racional(numerador2, denominador2);
      Racional n3 = n1 * n2;
      n3.imprimir();
    }
    if(opcion == 4){
      cout << "Ingrese el numerador del primer racional: ";
      cin >> numerador1;
      cout << "Ingrese el denominador del primer racional: ";
      cin >> denominador1;
      cout << "Ingrese el numerador del segundo racional: ";
      cin >> numerador2;
      cout << "Ingrese el denominador del segundo racional: ";
      cin >> denominador2;
      Racional n1 = Racional(numerador1, denominador1);
      Racional n2 = Racional(numerador2, denominador2);
      Racional n3 = n1 / n2;
      n3.imprimir();
    }
    if (opcion == 5){
      int numero;
      cout << "Ingrese el numero entero: ";
      cin >> numero;
      //cout << "Ingrese el denominador del primer racional: ";
      denominador1 = 1;
      cout << "Ingrese el numerador del numero racional: ";
      cin >> numerador2;
      cout << "Ingrese el denominador del numero racional: ";
      cin >> denominador2;
      Racional n1 = Racional(numero, 1);
      Racional n2 = Racional(numerador2, denominador2);
      Racional n3 = n1 + n2;
      n3.imprimir();
    }
  }while(opcion != 0 || opcion > 4);

  return 0;
}
