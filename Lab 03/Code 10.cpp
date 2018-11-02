#include<iostream>
#include<random>

using namespace std;

int randint(int min, int max){
  static default random engine ran;
  return uniform int distribution<>{min,max}(ran);
}
int radint(int max){ return radint(0,max);}

int main(){
  for(int i=0;i<20;i++)
    cout<<randint(9)<<" ";
  cout<<"\n";
  return  0;
}
