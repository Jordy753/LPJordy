//Paso de parametros por referencia
#include<iostream>
#include<algorithm>

using namespace std;

void init(vector<double>& v){  //Llamada por referencia
  for(int i=0;i<v.size();++i) v[i]=i;
}
void g(int x){
  vector<double> vd1(10);   //vector pequeño
  vector<double> vd2(1000000);  //vector largo
  vector<double> vd3(x);    //vector de tamaño desconocido
  init(vd1);
  init(vd2);
  init(vd3);
}
int main(){
  g(10);
}
