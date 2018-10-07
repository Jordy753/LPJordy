#include<iostream>
using namespace std;

//Calcula e imprime la tabla de cuadrados de 0 a 99 y retorna el cuadrado de x

int square(int x){
  return x*x;
}
int main(){
  int i=0; // empieza de cero
  while(i<100){
    cout<<i<<"\t"<<square(i)<<"\n";
    ++i; //incremento
  }

  return 0;
}
