#include <iostream>
using namespace std;

int main() {
  const double de=0.86; 
  const double dy=113.69;
  const double dl=0.77;
  double cantid;
  char tipo;

  cout<<"Digite por favor la cantidad con la que dispone y luego que moneda por unidad es:\n";
  cin>>cantid>>tipo;
  switch(tipo){
    case 'd':
       cout<<"A que tipo desea convertir\n";
       cin>>tipo;
       switch(tipo){  
       case 'e':
          cantid=cantid*de;
          cout<<"la conversion del cambio de moneda USD a EUR es: ("<<cantid<<")";
          break;
       case 'l':
          cantid=cantid*dl;
          cout<<"la conversion del cambio de moneda USD a GBP es: ("<<cantid<<")";break;                 
       case 'y':
          cantid=cantid*dy;
          cout<<"la conversion del cambio de moneda USD a JPY es: ("<<cantid<<")";
          break;
        }

  switch(tipo){  
      case 'e':
        cantid=cantid/de;
        cout<<"la conversion del cambio de moneda EUR a USD es: ("<<cantid<<")";
        break;
      case 'l':
        cantid=cantid/dl;
        cout<<"la conversion del cambio de moneda GBP a USD es: ("<<cantid<<")";
        break;    
      case 'y':
        cantid=cantid/dy;
        cout<<"la conversion del cambio de moneda JPY a USD es: ("<<cantid<<")"; 
        break;   
      default:
        cout<<"No conosco la unidad que me presenta";
        break;
  }
  
  }
  return 0;  
}
