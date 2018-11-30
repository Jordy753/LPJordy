//Memoria, direcciones y punteros(1,2y3)
#include<iostream>
#include<string>

using namespace std;

int main(){
  int var=17; //---
  int* ptr=&var; //ptr guarda la direccion de var(ya que ampersand obtiene la direccion del elemento al que esta relacionada)
  char ch='c';
  char* pc=&ch; //puntero a char

  int ii=17;
  int* pi=&ii;  //puntero a entero

  cout<<"pc=="<<pc<<"; contenido de pc=="<<*pc<<"\n";
  cout<<"pi=="<<pi<<"; contenido de pi=="<<*pi<<"\n";
  *pc='x';  //ok puedes asignar 'x' al char apuntado por pc
  *pi=27;   //ok un int* apunta a un entero entonces *pi es un int
  cout<<"Valor de ii: "<<ii<<"\n";
  *pi=*pc;  //ok puedes asignar char(pc) a un int(pi)

  //int i=pi  Error: no puedes puedes asignar un int* a un int
  //pi=7  Error: no puedes asignar un int a un int*
  //pc=pi  Error: no puedes asignar un int* a char*
  //pi=pc Error: no puedes asignar char* a int*
  {
    char ch1='a';
    char ch2='b';
    char ch3='c';
    char ch4='d';
    //int* pi=&ch3; apunta a ch3 un espacio de memoria del tamahno de un char Error: no podemos asignar un char* a un int*
  }

  return 0;
}
