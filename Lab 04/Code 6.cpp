//Funciones dentro clases, clases anidadas, clases locales
#include<iostream>

using namespace std;

class C{
  public:
    void f();
    void g(){}  //Funcion miembro de la clase
};

//Clases anidadas: Util solo para clases complicadas
class C{
  public:
    struct M{
    };
};

//Clases dentro de funciones: clases locales(EVITALAS) Funcion muy larga
void f(){
  class L{};
}
