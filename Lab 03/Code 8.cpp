//Errores de rango
#include<iostream>
#include<vector>
#include<string>
using namespace std;

int main()
try
{
  vector<int>v;
  for(int x; cin>>x;)
    v.push_back(x);
  for (int i=0; i<=v.size(); ++i)
    cout<<"v["<<i<<"] == "<<v[i]<<"\n";
}
catch(out_of_range){
  cerr<<"Oops! Error de rango\n";
  return 1;
}
catch(...)
{
  cerr<<"Error: algo salio mal\n";
  return 2;
}
