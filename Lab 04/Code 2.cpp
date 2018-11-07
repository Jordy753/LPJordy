//Declaraciones y definiciones
#include<iostream>

using namespace std;

int f(int);     //declaracion de f

int main(){
  int i=7;      //declaracion de i
  cout<<f(i)<<"\n";
}
double my_sqrt(double); //sin cuerpo de funcion
extern int a;   //extern sin inicializacion no es una definicion
int a;          //definicion int a(Error: definicion doble)
int x=7;        //definicion
extern int x;   //declaracion
extern int x;   //otra declaracion

double my_sqrt(double); //declaracion
double my_sqrt(double d){ return 0.0; //definicion double my_sqrt(double d) {return 1.0; } //Error doble definicion
double my_sqrt(double); //otra declaracion de my_sqrt
double my_sqrt(double); //otra declaracion de my_sqrt
//int my_sqrt(double);  Error: declaraciones inconsistentes de my_sqrt
double expression();  //solo declaracion; no definicion
double primary(){
  return expression();
}
double term(){
  return primary();
}
double expression(){
  return term();
}
intf(int n){
  return n;
}
