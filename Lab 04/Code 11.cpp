//Paso de parametros por referencia(2)
#include<iostream>
#include<algorithm>

using namespace std;

int g(int& x);
int f(int& x);
void h(int x,int y){
  int i=7;
  int& r=i;   //r es un referencia a i
  r=9;        //i se convierte en 9
  i=10;
  cout<<r<<" "<<i<<"\n"; //imprime: 10 10

  vector<vector<double>> v; //vector de vector double

  double val=v[f(x)][g(y)]; //val es el valor de v[f(x)][g(y)]

  double& var=v[f(x)][g(y)]; //var es una referencia a v[f(x)][g(y)]

  var=var/2+sqrt(var);

  //La funcion devuelve el valor modificado
  int f(int& x){
    x=x+1;
    return x;
  }
  int main(){
    int xx=0;
    cout<<f(xx)<<endl;   //imprime:1
    cout<<xx<<endl;      //imprime:1; f() cambia el valor de xx

    int yy=7;
    cout<<f(yy)<<endl;   //imprime:8
    cout<<yy<<endl;      //imprime:8; f() cambia el valor de yy
  }
  
}
