#include<iostream>
#include <vector>
using namespace std;

//Leyendo algunas temperaturas en un vector
int main(){ //leyendo algunas temperaturas en un vector
  vector<double> temps; //temperaturas
  double temp;
  while(cin>>temp)  //lee
    temps.push_back(temp); //pone en el vector
  // ...hacer algo...

 return 0;
}

