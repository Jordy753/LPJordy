#include<iostream>
using namespace std;


int main(){
  cout<<"Por favor ingrese un digito\n";
  char a;
  cin>>a;

  switch(a){
    case'0':case'2':case'4':case'6':case'8':
      cout<<"es par\n";
      break;
    case'1':case'3':case'5':case'7':case'9':
      cout<<"es impar\n";
      break;
    default:
      cout<<"No es un digito\n";
      break;              
  }

  return 0;
}
