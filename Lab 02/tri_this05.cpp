#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
  vector<string> pm;
  vector<string> p;
  string palabra=" ";
  int a=0,b=0;
  
  pm.push_back("mierd");
  pm.push_back("carj");
  pm.push_back("hola");
  pm.push_back("tonto");
  pm.push_back("baka");
  
  while (cin>>palabra && palabra!="j"){
	p.push_back(palabra);
 }
  while(a<p.size()){
    //cout<<"b"<<endl;
	b=0;
	while(b<pm.size()){
    	if(p[a]==pm[b]){
    		p[a]="Pii";
    	//cout<<"b"<<endl;
		}
    	b++;
    	//cout<<"b"<<endl;
	}
	a++;
	//cout<<"b"<<endl;
  }
  for(int i=0;i<p.size();i++){
  		cout<<p[i]<<" ";
  	
  }


  return 0;
}
