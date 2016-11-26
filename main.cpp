#include <iostream>

using namespace std;

int main(){

int opcion = 0;
  do{
    cout << "1.Sumar dos racionales" << endl << "2.Restar dos racionales" << endl << "3.Multiplicar dos racionales" << endl << "4.Dividir dos racionales" << endl;
    cout << "Ingrese su opcion: ";
    cin >> opcion;
    if(opcion == 1){
      cout << "Entro 1" << endl;
    }
    if(opcion == 2){
      cout << "Entro 2" << endl;
    }
    if(opcion == 3){
      cout << "Entro 3" << endl;
    }
    if(opcion == 4){
      cout << "Entro 4" << endl;
    }
  }while(opcion != 0 || opcion > 4);

  return 0;
}
