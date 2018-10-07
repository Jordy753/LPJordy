#include <iostream>
using namespace std;

/*Convertir de pulgadas(in) a cm y viceversa
Sufijos "i" o "c" indican la unidad
Cualquier otro es error*/
int main(){
  const double cm_per_inch=2.54;
  int length=1;
  char unit=' ';
  cout<<"Por favor ingrese una longitud seguida de su unidad (c o i):\n";
  cin>>length>>unit;
  if (unit=='i')
    cout<<length<<"in == "<<cm_per_inch<<"cm\n";
  else if (unit=='c')
    cout<<length<<"cm == "<<length/cm_per_inch<<"in\n";
  else
    cout<<"Lo siento, no conosco una unidad llamada"<<unit<<"\n"; 
  return 0;
}
