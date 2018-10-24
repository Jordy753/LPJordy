#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
using namespace std;



int par_o_impar(int x){
	int counter;
	

	for(int i=1;i<x;i++){
		if(x%i==0){
			counter=counter+1;
			if(counter>2){
				cout<<"Es no primo "<<x<<"\n";
				break;
			}	
		}	
	}
	if(counter<=2){
		cout<<"Es primo "<<x<<"\n";
	}

return 0;	
}
// si es par o impar nos indicara la funcion de arriba

int main(){
	int limite,counter,maxlimit;
	vector<int> numeros_primos;
	
	maxlimit = 1000000;
	cin>>limite;
	
	//par_o_impar(limite);	
	
	for(int i=1;i<100;i++){
		counter=0;
		for(int a=1;a<100;a++){
			if(i%a==0){
				counter=counter+1;
			}
			if(counter>2){
				break;
			}
		}
		if(counter<=2){
			numeros_primos.push_back(i);
		}
	}
	
	//nos determinara los numeros primos del 1 al 1000
	
	for(unsigned long long i=101;i<limite;i++){
		counter=0;
		for(unsigned long long a=1;a<numeros_primos.size();a++){
			if(i%numeros_primos[a]==0){
				counter=counter+1;
				break;
			}
		}
		if(counter==0){
			numeros_primos.push_back(i);
		}
		
	}
	for(int i=0;i<numeros_primos.size();i++){
		cout<<numeros_primos[i]<<"\n";
	}
	
	//hallar grandes proporciones de numeros primos la parte de arriba 
	
	return 0;
}



