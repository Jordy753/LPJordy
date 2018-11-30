//Funcion miembro constantes 1,2y3
#include<iostream>

using namespace std;

class Date{
  public:
    enum Month{
      jan=1, feb, mar, apr, may, jun, jul, aug, sep, oct, nov, dec
    };
    Date(int yy,Month mm, int dd):y(yy),m(mm),d(dd){}
    int day() const; //miembro const: no se modifica
    Month month() const; //miembro const: no se modifica
    int year() const; //miembro const: no se modifica
    void add_day(int n);  //se puede modificar
    void add_month(int n);  //se puede modificar
    void add_year(int n);  //se puede modificar
  private:
    int y;
    Month m;
    int d;  
};

int Date::day() const{
  //++d Error: intenta cambiar el objeto de una funcion miembro constante
  return d;
}

void Date::add_day(int n){}

//Investigar que hace esto----------------------------------------
void some_fuction(Date& d, const Date& start_of_term){
  int a=d.day();
  int b=start_of_term.day();
  d.add_day(3);
  //start of term add day(3) Error
}
