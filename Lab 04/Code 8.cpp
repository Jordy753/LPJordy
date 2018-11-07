//Retornando valores
#include<iostream>
#include<algorithm>

using namespace std;

typedef int T;
typedef double V;
T f(){ //f() retorna un T
  V v;
  // ...
  return v;
}
// Codigo con bugs
double my_abs(int x){
  if(x<0)
    return -x;
  else if(x>0)
    return x;
} // si x es cero no retorna nada

void print_until(const vector<string> v, const string_quit){
  for(int i=0;i<v.size();++i){
    if(v[i]==quit) return;
    cout<<v[i]<<"\n";
  }
}
