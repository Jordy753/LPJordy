//Punteros a objetos de clase
#include<iostream>

using namespace std;

vector* f(int s){
  vector* p=new vector(s);  //asigna memoria
  return p;
}

void ff(){
  vector* q=f(4);
  delete q;   //libera la memoria
}

int main(){
  vector<vector<double>>* p=new vector<vector<double>>  (10);
  delete p;
  vector<vector<vector<double>>>* q=vector<vector<vector<double>>>(20);
  delete q;

}
