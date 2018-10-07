#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
  double num1;
  double dist=0,distn=0;
  int i=0,c1,c2,a;
  
  vector<double> distancias;
  
  while(cin>>num1 && num1>-1){
    distancias.push_back(num1);
  }
  
  sort(distancias.begin(),distancias.end());
  cout<<"La mayor distancia es: "<<distancias[distancias.size()-1]<<endl;
  cout<<"La menor distancia es: "<<distancias[0]<<endl;
  a=distancias.size();
  while(i<a){
      dist=dist+distancias[i];
      ++i;
  }
  cout<<"La distancia total de todas las ciudades es: "<<dist<<endl;
  cout<<"La digite ciudades para hallar la mediana\n";
  cin>>c1;
  cin>>c2;
  c1=c1-1;
  c2=c2-1;
  if(c1<c2){
    i=0;
    dist=0;
    a=c2-c1;
    while(i<c1){
      distn=distn+distancias[i];
      ++i;
    }
    i=0;
    while(i<c2){
      dist=dist+distancias[i];
      ++i;
    }
    cout<<"La media es: "<<(dist-distn)/a<<endl;  
  }
  else{
    i=0;
    dist=0;
    a=c1-c2;
    while(i<c2){
      distn=distn+distancias[i];
      ++i;
    }
    while(i<c1){
      dist=dist+distancias[i];
      ++i;      
    }
    cout<<"La media es: "<<dist/a<<endl;
  }
  
  
  return 0;
}

