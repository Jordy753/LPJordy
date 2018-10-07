#include<iostream>
#include<string>
using namespace std;
int main(){
	double num1,num2;
	string a;
	while(a!="#"){
		cin>>num1>>num2;
		cout<<num1<<"\t"<<num2<<"\n";
		if(num1<num2){
			cout<<"El menor valor es "<<num1<<" y el mayor valor es: "<<num2<<"\n";
		}
		else if(num1>num2){
			cout<<"El menor valor es "<<num2<<" y el mayor valor es: "<<num1<<"\n";
		}	
		else{
			cout<<"Ambos numeros son iguales\n";	
		}
		cout<<"Si desea salir digite #\n";
		cin>>a;
	}
	return 0;
}
