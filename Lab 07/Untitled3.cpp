//Asignacion de memoria libre---
#include<iostream>
#include<string>

using namespace std;

int main(){
  int n=7;    
  int* pi=new int;  //asigna un int
  int* qi=new int[4]  //asigna 4 ints

  double* pd=new double;  //asigna un double
  double* qd=new double[n]; //asigna n doubles 
  //Un array de n doubles

  //Punteros a objetos de diferencia tipos son diferentes tipos. Por ejemplo
  //pi=pd; Error: no puede asignar double* a int*
  //pd=pi; Error: no puedes asignar int* a double*

  return 0;
}
