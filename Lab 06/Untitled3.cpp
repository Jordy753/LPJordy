//Tipos como argumentos (1, 2 y3)
#include<iostream>
#include<vector>

using namespace std;
//variable static permanece en la memoria 

class Year{ //anho entre un rango min y max
  static const int min= 1800;
  static const int max= 2200;
public:
  class Invalid{};
  Year(int x):y(x){
    if(x<min||max<x ) throw Invalid();
  }
  int year() {return y;}
private:
  int y;  
};

class Date{
  public:
    enum Month{
      jan=1, feb, mar, apr, may, jun, jul, aug, sep, oct, nov, dec
    };
  Date(Year yy, Month mm, int dd):y(yy),m(mm),d(dd) //Verfica e inicializa 
  {}
  private:
    Year y;
    Month m;
    int d;  //dia
};

int main() 
try{
  //Date dx1(Year(1998), 4, 3);     Error: 2do arg no es Month
  //Date dx2(4,Date::mar,Year(1998));  Error: 1er arg no es Year
  //Date dx2(Date::mar,4,Year(1998));  Error: 2do arg no es Month
  Date dx3(Year(1998),Date::mar, 30); // ok OJO en el segundo argumento
  Date dx5(Year(4), Date::mar, 1998); //Run-time error Year::Invalid
}
catch (Year::Invalid&){
  cerr<<"Error: Anho invalido\n";
  return 1;
}

