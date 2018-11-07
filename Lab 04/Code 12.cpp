//Paso de parametros por referencia(3)
#include<iostream>
#include<algorithm>

using namespace std;

void swap(double& d1, double& d2){
  double temp=d1; //copia el valor de d1 en temp
  d1=d2;          //copia el valor de d2 en d1
  d2=temp;        //Copia el valor de temp en d2  
}
int main(){
  double x=1;
  double y=2;
  cout<<"x=="<<x<<"y=="<<y<<"\n";
  //imprime: x==1 y==2
  swap(x,y);
  cout<<"x=="<<x<<"y=="<<y<<"\n";
  //imprime x==2 y==1
}
