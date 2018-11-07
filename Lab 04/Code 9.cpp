//Paso de parametros por valor
#include<iostream>
#include<algorithm>

using namespace std;

//Da a la funcion una copia del valor pasado
int f(int x){
  x=x+1;    //da a la variable local x un nuevo valor
  return x;
}
int main(){
  int xx=0;
  cout<< f(xx) <<endl;    //imprime: 1
  cout<< xx <<endl;       //imprime: 0; f() no cambia xx

  int yy=7;
  cout<< f(yy) <<endl;    //imprime: 8
  cout<< yy <<endl;       //imprime: 7; f() no cambia yy
}
