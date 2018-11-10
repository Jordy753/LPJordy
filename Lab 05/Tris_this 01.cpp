#include<iostream>
#include<string>
#include<vector>

using namespace std;

void m1(vector<int> pri,vector<int>& _sec){
  int aux,b=pri.size()/2,a=pri.size();
  for(int i=0;i<pri.size();i++){
    a=a-1;
    _sec.push_back(pri[a]);
    }
  }



void m2(vector<int>& pri){
  int aux,b=pri.size()/2,a=pri.size();
  for(int i=0;i<pri.size();i++){
    a=a-1;
    aux=pri[i];
    pri[i]=pri[a];
    pri[a]=aux;
    if(i+1==b){
      break;
    }
  }

}

int main(){
  vector<int> pri;
  vector<int> sec;

  pri.push_back(1);
  pri.push_back(2);
  pri.push_back(3);
  pri.push_back(4);
  

  m1(pri,sec);
  m2(pri);

  //Imprime los dos metodos
  for(int i=0;i<sec.size();i++){
    cout<<sec[i]<<" ";
  }
  cout<<"\n";
  for(int i=0;i<pri.size();i++){
    cout<<pri[i]<<" ";
  }

  return 0;
}
