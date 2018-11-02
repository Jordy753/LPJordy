#include<iostream>
#include<string>
#include<math.h>
//#include<vector>
//#include<algorithm>

using namespace std;

int main()
try{
	double a=0,b=0,c=0,determinante;
	cout<<"ax^2+bx+c=0"<<"\n";
	cin>>a>>b>>c;
	cout<<a<<"x^2+"<<b<<"x+"<<c<<"=0\n";
	
	if(a!=0){
		determinante=pow(b,2)-4*a*c;
		if(determinante<0){
      throw runtime_error("Oops! Las raices de dicha ecuacion cuadratica son numeros imaginarios\n");
		}
		else{
			cout<<"Una de las respuestas es: "<<(-b+sqrt(determinante))/2*a<<"\n";
			cout<<"La otra es respuesta es: "<<(-b-sqrt(determinante))/2*a<<"\n";
		}
	}
	if(a==0){
    throw runtime_error("El valor de a no puede tener como valor el numero 0\n"); 
		}
}

catch(exception & e){
  cerr<<"error: "<<e.what()<<"\n";
  return 1;
}
