#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
	double num0,a; //(in),(cm),(ft)y(m)
	string medida;
	vector<double> numeros;	
	vector<double> in;
	vector<double> cm;
	vector<double> ft;
	vector<double> m;
	
	cout<<"Digite usted las respectivas medidas segun: (in),(cm),(ft) y (m)\n";
	while(cin>>medida && medida!="salir"){
		if(medida=="in"){
			cin>>num0;
			num0=num0*0.0254;
			in.push_back(num0);
			numeros.push_back(num0);
		}
		else if(medida=="cm"){
			cin>>num0;
			num0=num0*0.01;
			cm.push_back(num0);
			numeros.push_back(num0);
		}
		else if(medida=="ft"){
			cin>>num0;
			num0=num0*0.3048;
			ft.push_back(num0);
			numeros.push_back(num0);
		}
		else if(medida=="m"){
			cin>>num0;
			m.push_back(num0);
			numeros.push_back(num0);			
		}
		else{
			cout<<"No conosco esta unidad\n";
		}
	}
	sort(numeros.begin(),numeros.end());
	for(int i=0;i<numeros.size();++i){
		cout<<"Los numeros en el vector son: "<<numeros[i]<<"\n";
	}
	for(int i=0;i<numeros.size();++i){
		a=a+numeros[i];
		if(i==numeros.size()-1){
			cout<<"La sumatoria total es: "<<a<<"\n";
		}
	}
	cout<<"s\n";
	for(int i=0;i<numeros.size();++i){ //while dentro para hacer comprobaciones
		if(numeros[0]==cm[i]){
			cout<<"El menor hasta ahora es: "<<numeros[0]/0.01<<"cm"<<"\n";
			break;	
		}
		else if(numeros[0]==in[i]){
			cout<<"El menor hasta ahora es: "<<numeros[0]/0.0254<<"in"<<"\n";
			break;
		}
		else if(numeros[0]==ft[i]){
			cout<<"El menor hasta ahora es: "<<numeros[0]/0.01<<"ft"<<"\n";
			break;
		}
		else if(numeros[0]==m[i]){
			cout<<"El menor hasta ahora es: "<<numeros[0]<<"m"<<"\n";
			break;
		}
	}
	cout<<"s\n";
  a=numeros.size();
  
	for(int z=0;z<numeros.size();++z){ 
		if(numeros[a-1]==cm[z]){
			cout<<"El mayor hasta ahora es: "<<numeros[a-1]/0.01<<"cm"<<"\n";
			break;	
		}
		else if(numeros[a-1]==in[z]){
			cout<<"El mayor hasta ahora es: "<<numeros[a-1]/0.0254<<"in"<<"\n";	
			break;			
		}
		else if(numeros[a-1]==ft[z]){
			cout<<"El mayor hasta ahora es: "<<numeros[a-1]/0.01<<"ft"<<"\n";
			break;				
		}
		else if(numeros[a-1]==m[z]){
			cout<<"El mayor hasta ahora es: "<<numeros[a-1]<<"m"<<"\n";
			break;				
		}
	}

	return 0;
}
