//Tiempo de vida de una planta
//Configurado para solo el uso de dos vectores de las cuales son: la vida de cada planta y aquellas que ya estan muertas 

#include<iostream>
#include<string>
#include<algorithm>
#include<vector>

using namespace std;

int buscar(int i,vector<int> muertas){
  for(int a=0;a<muertas.size();a++){
    if(i==muertas[a]){
      return 0;
    }
  }
  return 1;
}

int main(){
  int a,b,c,x1,x2; //dias_vida cuantas_vecs cantidad
  vector<int> muertas;

  while(cin>>a>>b>>c){
  	muertas.clear();
    vector<int> vida(c);

    for(int i=1;i<=c;i++){
      cout<<i<<" ";
    }
    
    cout<<"\n";
    
    while(b!=0){
      cin>>x1>>x2;
      for(int i=1;i<=c;i++){
        if((x1>i)||(i>x2)){
          vida[i-1]=vida[i-1]+1;
          if(vida[i-1]==a){
            muertas.push_back(i);
          }
        }
        else{
          vida[i-1]=0;
        }
      }
     b=b-1;
    }
    

    for(int i=1;i<=c;i++){
    	if(buscar(i,muertas)==1)
            cout<<i<<" ";
    }
	cout<<"\n";
  }
  return 0;
}
