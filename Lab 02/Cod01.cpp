include<iostream>
using namespace std;
// Simple IF else
int main(){
  int a=0,b=0;
  cout<<"Por favor ingrese dos enteros\n";
  cin>>a>>b;

  if(a<b) // Condici�n
   // Si la condici�n es verdaera
   cout<<"max("<<a<<","<<b<<") es "<<b<<"\n";
  else
   //Si la condici�n es falsa
   cout<<"max("<<a<<","<<b<<") es "<<a<<"\n";   

  return 0;
}

