//Acceso a través de punteros
#include<iostream>

using namespace std;

int main(){
  double* p=new double[4];  //Da memoria a 4 enteros 
  double x=*p;  //lee el primer obj apuntado por p
  double y=p[2];  //lee el tercer obj apuntado por p
  *p=7.7; //Escribe en el primero obj apuntado por p
  p[2]=9.9; //Escribe en el tercer obj apuntado por p
  {
    double x=p[3];  //lee el 4to obj apuntado por p
    p[3]=4.4; //Escribe el 4to obj apuntado por p
    double y=p[0];  //[0] es lo mismo que *p
  }
}
