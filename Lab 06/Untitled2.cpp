//Sobrecarga de operadores (1 y 2)
#include<iostream>
#include<vector>

using namespace std;

enum Month{
  jan=1, feb, mar, apr, may, jun, jul, aug, sep, oct, nov, dcm 
};

Month operator++(Month& m){ //operador de incremento
m=(m==dcm)? jan:Month(m+1); // Esto es un if (Circular)
return m;
}
//es como un i++ pero este es de tipo Month m++

//Buscar informacion---------
ostream& operator <<(ostream& os, Month m){
  static const char* month_tbl[12]={
    "January","February","March","April","May","June","July","August","September","October","November","December"
  };
  return os<<month_tbl[m-1];
}

class Vector{};

//int operator+(int,int); error: no puedes sobrecargar + porque ya esta construido
Vector operator+(const Vector&, const Vector&); // ok   --------------------Buscar que hace dichas funciones 
Vector operator+=(const Vector&, int); //ok

int main(){
  Month m=sep;
  ++m;  //m se convierte en oct
  ++m;  //m se convierte en nov
  ++m;  //m se convierte en dec
  ++m;  //m se convierte en jan
  cout<<m<<endl;
  return 0;
  }

