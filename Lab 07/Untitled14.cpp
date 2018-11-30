//Punteros y parametros de referencia(1,2)
#include<iostream>

using namespace std;

int incr_v(int x){return x+1;} //calcula un nuevo valor y re
void incr_p(int* p){++*p;}  //pasa un puntero lo dereferencia e incrementa el resultado
void incr_r(int& r){++r;} //pasa una referencia
inline void error(const string& s){
  throw runtime_error(s);
}
void incr_p(char* p){
  if(p==0)error("puntero_nulo");
  ++*p; //dereferencia e incrementa al obj apuntando
}

int main()
try{
  { int x=2;
    x=incr_v(x);  //copia x a incr_v(); luego copia el resultado y lo asigna}
    //Al usar el puntero sabemos que algo puede cambiar
    {int x=7;
      incr_p(&x); //el & es necesario
      incr_r(x);
    }
    // si alguien llama con puntero nulo
    //incr.p(0);  crash!
    char* p=0;
    incr_p(p);   //crash: incr_p()tratara de
}
catch(exception& e){
  cerr<<"Error: "<<e.what()<<"\n";
  return 1;
}

