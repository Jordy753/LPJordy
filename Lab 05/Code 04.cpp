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
	Date today; //variable tipo Date
	today.y=2005;
	today.m=24;
	today.d=12;
	Date x;
	x.y=-3;
	x.m=13;
	x.d=32;
	Date y;
	y.y=2000;
	y.y=2;
	y.y=29;
	init_day(y,2000,1,1);
	add_day(y,28);
	return 0; 
}
