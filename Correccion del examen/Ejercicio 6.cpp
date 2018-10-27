#include<iostream>
#include<string>
#include<vector>
#include<algorithm>

using namespace std;

int main(){
	string nombre,puntaje;
	vector<string> c_nombres;
	vector<string> c_puntaje;
	
	while(cin>>nombre>>puntaje && nombre!="SinNombre" && puntaje!="0"){
		for(int i=0;i<c_nombres.size();i++){
			if(c_nombres[i]==nombre){
				cout<<"¡Error!"<<"\n";
				exit(-1);
			}
		}
		c_nombres.push_back(nombre);
		c_puntaje.push_back(puntaje);
	}
	
	
	
}
