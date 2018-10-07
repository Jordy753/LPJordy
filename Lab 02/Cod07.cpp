#include<iostream>
using namespace std;

int square(int x){

  return x*x;
}

int main(){
  for(int i=0; i<100; ++i){
    //para i en el rango de 0 a 100
    cout<<i<<"\t"<<square(i)<<"\n";
    //++i; error
  }
  return 0;
}
