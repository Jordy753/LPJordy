#include<iostream>
#include<string>
#include<vector>

using namespace std; //tijera=0 papel=1 piedra=2

int juego(int deci_cpu,string decision_0){
  int x=2;
  if(deci_cpu==0){
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

int main(){
  int x,deci_cpu=0,counter1=0,counter2=0;
  string decision_0; 


  while(counter1<3 && counter2<3){
    cout<<"Escoja su eleccion que sea piedra, papel o tijera\n";
    cin>>decision_0;
    
    x=juego(deci_cpu,decision_0);
    
    if(deci_cpu<3){
      deci_cpu=deci_cpu+1;  
    }
    if(deci_cpu==3){
      deci_cpu=0;
    }

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


  return 0; 
}
