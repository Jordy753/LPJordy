#include<iostream>
using namespace std;

int main(){ // No podemos poner al comienzo de una definicion numeros o caracteres de signos(@,#,~,€,etc) ya que este nos mandara un error

 double a=2000;
 char c=a;
 unsigned int b=c;

  if(a=b){
    cout<<"Wow tenemos datos enormes\n";
  }
  else{
    cout<<a<<" es diferente de "<<b<<"endl";

  }
  return 0;
}
