#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
	int numrs;
	int a;
	int counter;
	vector<int> mediana;
	
	while(cin>>numrs && numrs!=000){
		mediana.push_back(numrs);
	}
	if(mediana.size()%2!=0){
		while(counter<=mediana.size()/2){
		 ++counter;
			if(counter==mediana.size()/2){
				cout<<"La mediana es: "<<mediana[counter];
		}
		}
	} 
	else{
		while(counter<=mediana.size()/2){
		 ++counter;
			if(counter==mediana.size()/2){
				a=mediana[counter]/2+mediana[counter-1]/2;
				cout<<"La mediana es: "<<a<<"\n";
			}
		}
	}
	
	
	
	
	
	return 0;
}
