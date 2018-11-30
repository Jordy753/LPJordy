//Enumeraciones (1 y 2)
#include<iostream>
#include<string>

using namespace std;

enum Month{
  jan=1, feb, mar, apr, may, jun, jul, aug, sep, oct, nov, dcm
};
enum Day{
  lunes, martes, miercoles, jueves, viernes, sabado, domingo 
};

void error(const char* errmsg){ //Investigar-----------
  cerr<<errmsg<<endl;
}

Month int_to_month(int x){
  if(x<jan||dcm<x) error("mes_invalido");
  return Month(x);
}
Month f(int m){
  Month mm = int_to_month(m);
  return mm;
}

int main() 
try{
  Month m=feb;
  //m=7;  //error: no se puede asignar int a Month
  int n=m; //ok podemos obtener el valor numerico de Month
  Month mm=Month(7); //convertir int en month
  //Month bad=9999;  //error: no se puede convertir int a Month
  cout<<f(4)<<endl;
  cout<<n<<" "<<mm<<" ";
  f(99); //run-time error: mes invalido
}
catch(exception& e){
  cerr<<"error: "<<e.what()<<"\n";
  return 1;
}

//xk imprime numeros en vez de las que el mes preterminadas
