//Scope (ejemplos)
#include<iostream>

using namespace std;

int g(int x){    //g es global: x es local g
  int f=x+2;  //f es local
  return 2*f;
}
int x,y:  //variable global(EVITALAS) 
//Clases anidadas(): Util solo para clases complicadas
class C { 
  public:
    struct M{
    };
};
//Clases dentro de funciones: clases locales(EVITALAS) funcion muy larga
void f(){
  class L{};
  //void g(){} Funciones dentro de funciones es ilegal 
}
