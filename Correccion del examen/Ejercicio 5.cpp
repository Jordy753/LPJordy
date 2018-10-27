#include<iostream>
#include<string>
#include<math.h>
//#include<vector>
//#include<algorithm>

using namespace std;

int main(){
	double a=0,b=0,c=0,determinante;
	cout<<"ax^2+bx+c=0"<<"\n";
	cin>>a>>b>>c;
	cout<<a<<"x^2+"<<b<<"x+"<<c<<"=0\n";
	
	if(a!=0){
		determinante=pow(b,2)-4*a*c;
		if(determinante<0){
			cout<<"Oops! Las raices de dicha ecuacion cuadratica son numeros imaginarios\n";
		}
		else{
			cout<<"Una de las respuestas es: "<<(-b+sqrt(determinante))/2*a<<"\n";
			cout<<"La otra es respuesta es: "<<(-b-sqrt(determinante))/2*a<<"\n";
		}
	}
	else{
		cout<<"No se puede resolver la ecuacion cuadratica\n";
	}
	
	
}
