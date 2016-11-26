#ifndef RACIONAL_H
#define RACIONAL_H
#include <iostream>

int numerador, int denominador;

Racional sumar(Racional, Racional);
Racional restar(Racional, Racional);
Racional multiplicar(Racional, Racional);
Racional dividir(Racional, Racional);

Racional operator + (int, Racional);
Racional operator - (int, Racional);
Racional operator * (int, Racional);
Racional operator / (int, Racional);
void simplificar();

};
#endif
