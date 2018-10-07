#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;

vector<double> numeros;
int main(){
	double num1,num2;
	string a;
	
	while(a!="#"){
		cin>>num1>>num2;
		int num_2=num2;
		numeros.push_back(num1);
		numeros.push_back(num_2);
		sort(numeros.begin(),numeros.end());
		cout<<"El menor hasta ahora es: "<<numeros[numeros.size()-1]<<" y el mayor hasta ahora es: "<<numeros[0]<<endl;
		main();
		/*cout<<"Si desea salir digite #\n";
		cin>>a;*/
	}
	
	return 0;
}
