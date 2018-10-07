#include <iostream>
using namespace std;

int square(int);

int square(int numero, int repetidas){
    int square=0;
    while (repetidas>0){
      square=numero+square;
      repetidas=repetidas-1;
    }
    cout<<square;  
  return 0;
}

int main() {
  int numero;
  int repetidas;
  cin>>numero;
  cin>>repetidas;
  square(numero,repetidas);
  

}
