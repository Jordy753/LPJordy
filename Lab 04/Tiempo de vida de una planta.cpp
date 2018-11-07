//Tiempo de vida de una planta

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
  vector<int> plantas;
  vector<int> muertas;

  while(cin>>a>>b>>c){
  	plantas.clear();
    vector<int> vida(c);

    for(int i=1;i<=c;i++){
      plantas.push_back(i);
      cout<<plantas[i-1]<<" ";
    }
    
    cout<<"\n";
    
    while(b!=0){
      cin>>x1>>x2;
      for(int i=0;i<plantas.size();i++){
        if((plantas[x1-1]>plantas[i])||(plantas[i]>plantas[x2-1])){
          vida[i]=vida[i]+1;
          if(vida[i]==a){
            muertas.push_back(plantas[i]);
          }
        }
        else{
          vida[i]=0;
        }
      }
     b=b-1;
    }
    
	plantas.clear();
    for(int i=1;i<=c;i++){
    	if(buscar(i,muertas)==1)
            plantas.push_back(i);
    }
    for(int i=0;i<plantas.size();i++){
    	cout<<plantas[i]<<" ";
    }
	cout<<"\n";
  }
  return 0;
}
