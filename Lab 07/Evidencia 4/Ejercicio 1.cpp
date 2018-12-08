#include<iostream>
#include<string>

using namespace std;

char* find(const char* d,const char* e){
  int counter=0,counter2=0;
  char* temp=0;
   while(d[counter]!='\0'){
   while(e[counter2]!='\0'){ 
    if(e[counter2]==d[counter]){
        //return d[counter]; //retorno un char

    }
    counter2=counter2+1;   
   }
    counter2=0; 
    counter++;
  }
  return '0';
}

int main(){
  //const char* d="holas";
  //const char e="ol";
  char* temp;
  temp=find("holas","ol");
  cout<<temp;
  return 0;
}
