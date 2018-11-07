//Paso de parametros por referencia
#include<iostream>
#include<algorithm>

using namespace std;

int incr1(int a){ return a+1;}
//retorna el nuevo valor

void incr2(int& a){ ++a;}
//modifica el objeto que le pasan como referencia

int main(){
  int x=7;
  x=incr1(x);   //muy obvio
  incr2(x);     //muy oscuro
  return 0;
}

void larger(vector<int>& v1, vector<int>& v2){
  //en v1 deja los mayores y en v2 los menores
  for(int i=0;i<v1.size();++i){
    if(v1[i]<v2[i])
      swap(v1[i],v2[i]);
  }
}

int main(){
  vector<int> vx;
  vector<int> vy;
  // lee vx y vy desde la entrada
  larger(vx,vy);
  return 0;
}
