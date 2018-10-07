#include <iostream>
using namespace std;

int main(){

  const double cm_per_inch=2.54;//cm por pulgada
  int legth=1;
  char unit='a';
  cout<<"Por favor ingrese una longitud y su unidad(c o i):\n";
  cin>>legth>>unit;
  switch(unit){
  case 'i':
    cout<<legth<<"in == "<<cm_per_inch*legth<<"cm\n";
    break;   
  case 'c':
    cout<<legth<<"cm == "<<legth/cm_per_inch<<"in\n";   
    break;
  default:
    cout <<"Lo siento no conosco ese unidad "<< unit<<"\n";
    break; 
  }
  return 0;
}
