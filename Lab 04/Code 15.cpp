//Inicializacion global
#include<iostream>
#include<algorithm>

using namespace std;

struct Date{
  Date(int y, int m int d){/*........*/}
};
namespace good{
  const Date default date(1970,1,1);
  //La forma por defecto es el 1 de Enero de 1970
}
namespace better{
  const Date default date(){ //retorna la fecha por defecto
    return Date(1970,1,1);
  }
}
namespace best{
  const Date& default date(){
    static const Date dd(1970,1,1);
    //Initialize dd la primera vez que entra aqui
    return dd;
  }
}
int main(){
  Date d1=good::default date;
  Date d2=better::default date();
  Date d3=best::default date();

}
