//Constructor por default 1,2y 3
#include<iostream>
#include<vector>

using namespace std;

class Date{
  public:
    enum Month{
      jan=1, feb, mar, apr, may, jun, jul, aug, sep, oct, nov, dec
    };
    Date(); //constructor por default
    Date(int yy,Month mm, int dd);  //constructor 
    // vemos funciones que cuenta con un dato const 
    Month month() const{return m;}
    int day()     const{return d;}
    int year()    const{return y;}

  private:
    int y;
    Month m;
    int d;  
};

const Date& default_date(){
  static const Date dd(2001,Date::jan,1);
  return dd;
}

Date::Date():
  y(default_date().year()),
  m(default_date().month()), //Observar OJO
  d(default_date().day())
  {}

Date::Date(int yy,Month mm, int dd):y(yy),m(mm),d(dd){}


int main(){
  vector<Date> birthdays(10);
  //Sin el constructor por defecto tendriamos que haber sido explicitos
  {
    vector<Date> birthdays(10,default_date());
  }
  return 0;

}

//Revisar

