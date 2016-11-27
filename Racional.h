#ifndef RACIONAL_H
#define RACIONAL_H
#include <iostream>

class Racional{

  public:

    int numerador, denominador;

  public:

    Racional(int, int);

    Racional& operator + (Racional&);
    Racional& operator - (Racional&);
    Racional& operator * (Racional&);
    Racional& operator / (Racional&);

    /*Racional operator + (int, Racional);
    Racional operator - (int, Racional);
    Racional operator * (int, Racional);
    Racional operator / (int, Racional);
    */
    void simplificar();
    void imprimir();

};
#endif
