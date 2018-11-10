//Struct(Clase pública por defecto)
#include <iostream>

using namespace std;

struct Date{
  int y;  //Year
  int m;  //Month
  int d;  //Day
};
//Funciones de ayuda
void init_day(Date& dd, int y, int m, int d){
}
//verificar si es valido
//si lo es inicializar la fecha
void add_day(Date& dd,int n){
} //incrementa n días
int main(){
  Date hoy;
  init_day("hoy",12,24,2005); //Error:
	// dia 2005 dl anho 12
  add_day("Today",1);

  return 0;
}
