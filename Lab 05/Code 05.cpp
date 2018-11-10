//Clase Date
#include <iostream>

using namespace std;

class Date{
  int y,m,d;  //año mes dia
  public:
    Date(int _y,int _m,int _d);  //Verifica si es valido e inicializa
  
    void add_day(int n);//incrementa los dias por n
	int month(){return m;} 
    int day(){return d;}
    int year(){return y;}
};

Date::Date(int _y,int _m, int _d):y(_y),m(_m),d(_d){}

int main(){
  int m=12;
  Date birthday(1970,m,30);
  cout<<birthday.month()<<endl;

}
