#include<iostream>
#include<algorithm>
#include<vector>
#include<random>
#include<string>

using namespace std;

int toros(vector<int> numero_yo,vector<int> numero_game){
  int counter1=0;
  for(int i=0;i<4;i++){
    for(int a=0;a<4;a++){
      if(i==a && numero_yo[i]==numero_game[a]){
        counter1=counter1+1;
      }
    }
  }

  return counter1;
}

int vacas(vector<int> numero_yo,vector<int> numero_game){
  int counter1=0;
  for(int i=0;i<4;i++){
    for(int a=0;a<4;a++){
        if(i!=a && (numero_yo[i]==numero_game[a])){
        counter1=counter1+1;

        }
    }
  }

  return counter1;
}

int randint(int min, int max)
{
    static default_random_engine ran;
    return uniform_int_distribution<>{min, max}(ran);
}

int main(){
  string respuesta="si";
  int x,y;
  int counter=0,numero,n1,n2,n3,n4;
  vector<int> numero_game;
  vector<int> numero_yo;
  
  while(respuesta=="si"){
   y=0;
   numero_game.clear();
  
  while(numero_game.size()!=4){
    numero=randint(0,9);
    for(int i=0;i<numero_game.size();i++){
      if(numero_game[i]==numero){
        counter++;
      }
    }
    if(counter<1){
      numero_game.push_back(numero);
    }
  }
  for(int i=0;i<numero_game.size();i++){
    cout<<numero_game[i];
  }
cout<<"\n";

  while(y!=4){
    cin>>n1>>n2>>n3>>n4;
    numero_yo.push_back(n1);
    numero_yo.push_back(n2);
    numero_yo.push_back(n3);
    numero_yo.push_back(n4);

    x=vacas(numero_yo,numero_game);
    y=toros(numero_yo,numero_game);

    cout<<"El numero de vacas son: "<<x<<"\n";
    cout<<"El numero de toros son: "<<y<<"\n";
    numero_yo.clear();
  }
  cout<<"Quiere jugar de nuevo\n";
  cin>>respuesta;
  }
  return 0;
}
