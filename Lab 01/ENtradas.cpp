#include<iostream>
using namespace std;

int main(){
	int numero; 
	
	cout<<"Digite un numero para observar si es par o impar ";
	cin>>numero;
	if (numero%2==0){
		cout<<"Este numero es par";
	}	
	else{
		cout<<"Este numero es impar";
	}	
		
	return 0;
}

#####################################################################################################################################

#include<iostream>
#include<string>
using namespace std;

int main(){
	string num_nam;
	
	cout<<"Digite usted algun nombre de numeros del cero al cuatro "<<endl;
	cin>>num_nam;
	if(num_nam=="cero"){
		cout<<"La representacion del numero cero es: 0"<<endl;
	}
	else if(num_nam=="uno"){
		cout<<"La representacion del numero cero es: 1"<<endl;
	}
	else if(num_nam=="dos"){
		cout<<"La representacion del numero cero es: 2"<<endl;
	}
	else if(num_nam=="tres"){
		cout<<"La representacion del numero cero es: 3"<<endl;
	}
	else if(num_nam=="cuatro"){
		cout<<"La representacion del numero cero es: 4"<<endl;
	}
	else{
		cout<<"Digite nuevamente un nombre de algun numero indicado"<<endl;
    cout<<endl;
		main();
	}
	return 0;
}

######################################################################################################################################
#include<iostream>
#include<string>
using namespace std;

int main(){
	double num1, num2;
	string operad;
	
	cout<<"Ahora usted digite alguna operacion o nombre para operar"<<endl;
	cin>>operad;
	cout<<"Ahora digite usted dos numeros para hacer dicha operacion"<<endl;
	cin>>num1>>num2;
	if(operad=="+" or operad=="suma"){
	cout<<num1<<operad<<num2<<"="<<num1+num2<<endl;
	}
	else if(operad=="-" or operad=="resta"){
	cout<<num1<<operad<<num2<<"="<<num1-num2<<endl;
	}
	else if(operad=="*" or operad=="multiplicacion"){
	cout<<num1<<operad<<num2<<"="<<num1*num2<<endl;
	}
	else if(operad=="/" or operad=="division"){
	cout<<num1<<operad<<num2<<"="<<num1/num2<<endl;
	}
	else{
		cout<<"Digite un operador valido";main();
	}
	return 0; 
}
