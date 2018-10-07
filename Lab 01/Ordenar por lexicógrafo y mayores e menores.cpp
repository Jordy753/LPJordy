#include<iostream>
using namespace std;

int main(){
  
  int num_espc=4, counter=0, aux=0, counter2=0;
  
  cout<<"Ingrese valores cuantos valores desea agregar a el array\n";
  cin>>num_espc;
  int array1[num_espc]={};
  cout<<"Ahora ingrese valores para el array\n";
  while (counter2<num_espc){
    cin>>array1[counter2];
    counter2=counter2+1;
  }
  counter2=0;
  while (counter2<num_espc){
    counter=counter2+1;
    while (counter<num_espc){
      if (array1[counter2]>array1[counter]){
        aux=array1[counter2];
        array1[counter2]=array1[counter];
        array1[counter]=aux;
      }  
      counter+=1;
    }   
    counter2=counter2+1;}
  cout<<array1[0];
  cout<<array1[1];
  cout<<array1[2];
  cout<<array1[3];
  return 0;
}

#include<iostream>
using namespace std;

int main(){
  
  int num_espc=0, counter=0, aux=0, counter2=0;
  
  cout<<"Ingrese valores cuantos valores desea agregar a el array\n";
  cin>>num_espc;
  char array1[num_espc]={};
  cout<<"Ahora ingrese valores para el array\n";
  while (counter2<num_espc){
    cin>>array1[counter2];
    counter2=counter2+1;
  }
  counter2=0;
  while (counter2<num_espc){
    counter=counter2+1;
    while (counter<num_espc){
      if (array1[counter2]>array1[counter]){
        aux=array1[counter2];
        array1[counter2]=array1[counter];
        array1[counter]=aux;
      }  
      counter+=1;
    }   
    counter2=counter2+1;}
  cout<<array1[0];
  cout<<array1[1];
  cout<<array1[2];
  cout<<array1[3];
  return 0;
}
