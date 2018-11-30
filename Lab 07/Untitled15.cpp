//Punteros y referencias
#include<iostream>

using namespace std;

int main(){
  int x=10;
  int* p=&x; //necesitamos & para obtener direccion
  *p=7;  //usa * para asignar x mediante p
  int x2=*p;    //lee x a traves de p
  int* p2=&x2   //obtiene un puntero de otro int
  p2=p;   //p2 y p apuntan a x
  p=&x2;    //hace que p apunte a cero obj

  int y=10;  
  int& r=y;   //& esta en el tipo no en el init
  r=7;        //asigna a y mediante r (no usa *)
  int y2=r;   //lee y mediante r(no usa *)
  int& r2=y2; //obtiene la referencia de otro int 
  r2=r;   //el valor de y es asignado a y2
  //r=&y2;    Error:no puedes cambiar el valor de una referencia



}
