//Archivos de cabecera
#include<iostream>

using namespace std;

//Archivo f.h
int f(int);
//Archivo cpp
#include "f.h"
//Copia las declaraciones de f.h en este archivo
int g(int i){
  return f(i);
}


int main(){
  return g(0);
}


int f(int n){
  return n;
}
