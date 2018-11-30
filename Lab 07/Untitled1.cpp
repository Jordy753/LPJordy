//Operador sizeof
#include<iostream>
#include<string>
#include<vector>

using namespace std;

int main(){
  cout<<"El tamño de char es: "<<sizeof(char)<<" "<<sizeof("a")<<"\n";
  cout<<"El tamaño de int es: "<<sizeof(int)<<" "<<sizeof(2+2)<<"\n";
  int* p=0;
  cout<<"El tamaño de int* es: "<<sizeof(int*)<<" "<<sizeof(p)<<"\n";
  vector<int> v(1000);
  cout<<"El tamaño de vector<int>(1000) es: "<<sizeof(vector<int>)<<" "<<sizeof(v)<<"\n";

  //New recien pide un espacio de memoria para guaradar el dato en el RAM
  return 0;
}
