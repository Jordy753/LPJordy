#include<iostream>
#include<string>
#include<vector>
#include<algorithm>

using namespace std;

string moda(vector<string> conjunto){
	int counter,counter2=0;
	string moda;
	for(int i=0;i<conjunto.size();i++){
		counter=0;
		for(int a=0;a<conjunto.size();a++){
			if(conjunto[i]==conjunto[a]){
				counter=counter+1;
			}
		}
		if(counter>counter2){
			moda=conjunto[i];
			counter2=counter;
		}
	}
	return moda;
}

int main(){
	string elemento;
	vector<string> conjunto;
	
	while(cin>>elemento && elemento!="salir"){
		conjunto.push_back(elemento);
	}	
	elemento=moda(conjunto);
	cout<<elemento;
	
	return 0;
}
