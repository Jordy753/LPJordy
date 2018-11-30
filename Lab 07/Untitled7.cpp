//liberando memoria 
#include <iostream>


using namesapce std;

double* calc(int res_size, int max){
//el que llama se hara responsable por la memoria de res
  double* p=new double[max];
  double* res=new double[res_size];
//usamos p para calcular los resultados de res
  delete[] p; //no lo necesitamos mas hay que liberar
  return res;
}
int main() {
    double* r=calc(100,1000);
    //usar r
    delete[]  r;  /*ya no necesitaras r: liberala!
    delete[] r; Error: no la puedes liberar dos veces ahora pertenece al administrador de memoria libre
*/


}
