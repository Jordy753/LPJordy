#include<iostream>
using namespace std;

/*Calcula el cuadrado de v y lo imprime
No es reusable
Requiere documentaci�n*/
void print_square(int v){ // Declaraci�n de la funci�n
 
  cout<<v<<"\t"<<v*v<<"\n";

}
int main(){

  for(int i=0; i<100; ++i) print_square(i);

}
