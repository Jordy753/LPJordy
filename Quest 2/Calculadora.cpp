#include<iostream>
#include<vector>
#include<string>
using namespace std;

vector<string> numeros;
 int conversion(string a){
 	int x;
    for(int i=0;i<numeros.size();i++){
      if(a=="cero"||a=="0"){
        x=0;
      }
      else if(a=="uno"||a=="1"){
        x=1;
      }
      else if(a=="dos"||a=="2"){
        x=2;
      }
      else if(a=="tres"||a=="3"){
        x=3;
      }
      else if(a=="cuatro"||a=="4"){
        x=4;
      }
      else if(a=="cinco"||a=="5"){
        x=5;
      }
      else if(a=="seis"||a=="6"){
        x=6;
      }
      else if(a=="siete"||a=="7"){
        x=7;
      }
      else if(a=="ocho"||a=="8"){
        x=8;
      }
      else if(a=="nueve"||a=="9"){
        x=9;
      }      
    }

    return x;
  }
 

int main(){
  string num1,num2;
  char signo;
  
  numeros.push_back("uno");numeros.push_back("1");
  numeros.push_back("dos");numeros.push_back("2");
  numeros.push_back("tres");numeros.push_back("3");
  numeros.push_back("cuatro");numeros.push_back("4");
  numeros.push_back("cinco");numeros.push_back("5");
  numeros.push_back("seis");numeros.push_back("6");
  numeros.push_back("siete");numeros.push_back("7");
  numeros.push_back("ocho");numeros.push_back("8");
  numeros.push_back("nueve");numeros.push_back("9");
  numeros.push_back("cero");numeros.push_back("0");

  while(cin>>num1>>signo>>num2){
  switch(signo){
    case'+':
    cout<<conversion(num1)+conversion(num2)<<endl;
    break;
	case'*':
	cout<<conversion(num1)*conversion(num2)<<endl;
	break;
    case'/':
	cout<<conversion(num1)/conversion(num2)<<endl;
	break;
	case'-':
	cout<<conversion(num1)-conversion(num2)<<endl;
	break;
  }
}


  return 0;
}
