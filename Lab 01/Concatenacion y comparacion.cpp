//Este programa lee y compara nombres ”
#include<iostream>
#include<string> 
using namespace std;
int main ( )
{
cout <<"Ingrese dos nombres \n";
string first;
string second;
cin>>first>>second;// lee dos strings
if (first==second) cout<<"Ambos son iguales\n";
if (first<second)
cout<<first<<" esta lexico graficamenteantes "<<second<<"\n";
if (first>second)
cout<<first<<" esta lexico graficamente despues "<<second<<"\n";
cout<<"Aqui la concatenacion de nombres"
cout<<first+second;
}
