//Paso de parametros constantes por referencia
#include<iostream>
#include<algorithm>

using namespace std;

void f(int a, int&r, const int& cr){
  ++a;    //cambia la variable local a
  ++r;    //cambia el objeto referido por r
  // ++cr   Error: cr es constante
}
void g(int a,int& r,const int& cr){
  ++a;      //cambia la variable local a
  ++r;      //cambia el objeto referido por r
  int x=cr; //lee el objeto referido por cr
}

int main(){
  int x=0;
  int y=0;
  int z=0;

  g(x,y,z); /*x==0, y==1, z==0
    g(1,2,3); error: el argumento r necesita una variable a quien referirse*/
  g(1,y,3); /*ok: como cr es const podemos pasarle un valor literal*/

}
