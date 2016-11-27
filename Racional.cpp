#include "Racional.h"
#include <iostream>

using namespace std;

int gcd( int x, int y )
{
   if( x < y )
      return gcd( y, x );
   int f = x % y;
   if( f == 0 )
     return y;
   else
      return gcd( y, f );
}

int lcm(int a, int b)
{
    int temp = gcd(a, b);
    return temp ? (a / temp * b) : 0;
}

void Racional::simplificar()
{
    int numerador = this->numerador;
    int denominador = this->denominador;
        for (int i = denominador * numerador; i > 1; i--) {
                if ((denominador % i == 0) && (numerador % i == 0)) {
            denominador /= i;
                numerador /= i;
        }

         }
    this->numerador = numerador;
    this->denominador = denominador;
}

void Racional::imprimir(){
  cout << this->numerador << "/" << this->denominador << endl;
  //cout << "hola";
}


Racional::Racional(int numerador, int denominador){
  this->numerador = numerador;
  this->denominador = denominador;
}

Racional& Racional::operator + (Racional& numero2){
  int numerador = this->numerador;
  int denominador = this->denominador;
  int nuevoDenominador = denominador * numero2.denominador;
  int nuevoNumerador = numerador = (numero2.denominador*numerador) + (denominador*numero2.numerador);
  this->numerador = nuevoNumerador;
  this->denominador = nuevoDenominador;
  this->simplificar();
}

Racional& Racional::operator - (Racional& numero2){
  int numerador = this->numerador;
  int denominador = this->denominador;
  int nuevoDenominador = denominador * numero2.denominador;
  int nuevoNumerador = numerador = (numero2.denominador*numerador) - (denominador*numero2.numerador);
  this->numerador = nuevoNumerador;
  this->denominador = nuevoDenominador;
  this->simplificar();
}

Racional& Racional::operator * (Racional& numero2){
  int numerador = this->numerador;
  int denominador = this->denominador;
  int nuevoNumerador = numerador * numero2.numerador;
  int nuevoDenominador = denominador * numero2.denominador;
  this -> numerador = nuevoNumerador;
  this -> denominador = nuevoDenominador;
  this->simplificar();
}

Racional& Racional::operator / (Racional& numero2){
  int numerador = this->numerador;
  int denominador = this->denominador;
  int nuevoNumerador = numerador * numero2.denominador;
  int nuevoDenominador = denominador * numero2.numerador;
  this -> numerador = nuevoNumerador;
  this -> denominador = nuevoDenominador;
  this->simplificar();
}
