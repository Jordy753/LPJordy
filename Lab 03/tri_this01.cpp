#include<iostream>
#include<string>
#include <cstdlib>
#include <time.h>


using namespace std; //tijera=0 papel=1 piedra=2

int azar(){
  int fin_intervalo = 3;
  srand(time(NULL));
  int numero = rand() % fin_intervalo;
  return numero;
}

int juego(int deci_cpu,string decision_0){
  int x=2;
  if(deci_cpu==0){
      cout<<"La maquina escogio tijera\n";
      if(decision_0=="tijera"){
       cout<<"Empate!\n";
      }
      else if(decision_0=="papel"){
       cout<<"Usted a perdido esta ronda\n";
       x=1;
      }
      else if(decision_0=="piedra"){
       cout<<"Usted a ganado esta ronda\n";
       x=0;
      }
  }
  else if(deci_cpu==1){
      cout<<"La maquina escogio papel\n";
      if(decision_0=="tijera"){
       cout<<"Usted a ganado esta ronda\n";
       x=0;
      }
      else if(decision_0=="papel"){
       cout<<"Empate!\n";
      }
      else if(decision_0=="piedra"){
       cout<<"Usted a perdido esta ronda\n";
       x=1;
      }
  }
  else if(deci_cpu==2){
      cout<<"La maquina escogio piedra\n";
      if(decision_0=="tijera"){
       cout<<"Usted a perdido esta ronda\n";
       x=1;
      }
      else if(decision_0=="papel"){
       cout<<"Usted a ganado esta ronda\n";
       x=0;
      }
      else if(decision_0=="piedra"){
       cout<<"Empate!\n";
      }
  }

  return x;
}

int main()
try{
  int x,deci_cpu=0,counter1=0,counter2=0;
  string decision_0; 


  while(counter1<3 && counter2<3){
    cout<<"Escoja su eleccion que sea piedra, papel o tijera\n";
    cin>>decision_0;
    if((decision_0!="tijera")&&(decision_0!="piedra")&&(decision_0!="papel")){
      throw runtime_error("argumento invalido");
    }
    deci_cpu=azar();

    x=juego(deci_cpu,decision_0);

    if(x==0){
      counter1=counter1+1;
    }
    else if(x==1){
      counter2=counter2+1;
    }
  }
  if(counter1>counter2){
    cout<<"Usted a ganado\n";
  } 
  else{
    cout<<"Usted a perdido\n";
  }
}
catch(exception & e){
  cerr<<"error: "<<e.what()<<"\n";
  return 1;
}
