#include<iostream>
using namespace std;

/*Calcula el cuadrado de v y lo imprime
No es reusable
Requiere documentación*/
void print_square(int v){ // Declaración de la función
 
  cout<<v<<"\t"<<v*v<<"\n";

}
int main(){

  for(int i=0; i<100; ++i) print_square(i);

}
