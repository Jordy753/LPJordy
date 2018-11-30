//Copiando 1y2
#include<iostream>
#include<string>

using namespace std;
class Date{
  public:
    enum Month{
      jan=1, feb, mar, apr, may, jun, jul, aug, sep, oct, noc, dec
    };
    
    Date (int yy, Month mm, int dd):y(yy),m(mm),d(dd){}

    //-----------------------------------------Buscara mas sobre la declaracion friend
    friend ostream& operator<<(ostream& os, const Date& d){
      return os<<"("<<d.y<<","<<d.m<<","<<d.d<<")"<<"\n";
    }
  private:
    int y; //anho
    Month m;
    int d; //dia
};

int main(){
  Date holiday(1978,Date::jul,4); //Inicializacion
  Date d2=holiday;
  Date d3=Date(1978,Date::jul,4);

  holiday=Date(1978,Date::dec,24); //asignacion
  d3=holiday;

  cout<<d2;
  cout<<Date(1978,Date::dec,24);
  return 0;
}

//el compilador no sabe de que forma imrpimir datos que no conoce; pero si imprime todos lo demas datos que le han declarado como int, string, char, entre otros

