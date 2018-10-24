#include<iostream>
#include<string>
#include<algorithm>
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


int main(){
	int limite,counter,maxlimit;
	maxlimit = 1000000;
	cin>>limite;
	
	par_o_impar(limite);	
	
	cout<<"1"<<"\n";
	for(int i=1;i<limite;i++){
		counter=0;
		for(int a=1;a<maxlimit;a++){
			if(i%a==0){
				counter=counter+1;
			}
			if(counter>2){
				break;
			}
		}
		if(counter<=2){
			cout<<i<<"\n";
		}
	}
	
	
	
	return 0;
}


//basarse en primos ya obtenidos como base como los 100 primeros no primos para ejecutar mas numeros multiplos    la crip
