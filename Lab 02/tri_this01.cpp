#include<iostream>
#include<string>
using namespace std;

int main(){
  const double de=0.86, dy=113.69, dl=0.77;
  double cantid;
  string tipo;

  cout<<"Digite por favor la cantidad con la que dispone y luego que moneda es:\n";
  cin>>cantid>>tipo;

  if (tipo=="dolares"){
    cout<<"A que moneda desea convertir\n";
    cin>>tipo;
    
    if (tipo=="euros"){
      cantid=cantid*de;
      cout<<"la conversion del cambio de moneda USD a EUR es: ("<<cantid<<")";
    }  
    else if(tipo=="libras"){
      cantid=cantid*dl;
      cout<<"la conversion del cambio de moneda USD a GBP es: ("<<cantid<<")";
    }  
    else if(tipo=="yenes"){
      cantid=cantid*dy;
      cout<<"la conversion del cambio de moneda USD a JPY es: ("<<cantid<<")";  
    }
    }   
  else 
    
    if(tipo=="euros"){
      cantid=cantid/de;
      cout<<"la conversion del cambio de moneda EUR a USD es: ("<<cantid<<")";
    }
    else if(tipo=="libras"){
      cantid=cantid/dl;
      cout<<"la conversion del cambio de moneda GBP a USD es: ("<<cantid<<")";  
    }
    else if(tipo=="yenes"){
      cantid=cantid/dy;
      cout<<"la conversion del cambio de moneda JPY a USD  es: ("<<cantid<<")";
    } 
    else

    cout<<"No conosco ese valor";

  return 0;
  }
