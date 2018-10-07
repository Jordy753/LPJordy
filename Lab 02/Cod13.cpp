#include<iostream>
#include <vector>
#include <algorithm>
using namespace std;


int main(){
  vector<string> words;
  string temp;
  while (cin>>temp) //leer palabras separadas por " "
    words.push_back(temp); //poner en el vector
    cout<<"Numero de palabras: "<<words.size()<<endl;
    //ordenar de inicio a fin
    sort(words.begin(),words.end());

    for(int i=0; i<words.size();++i){
      //es una palabra nueva?
      if (i==0 || words [i-1] != words[i])
        cout<<words [ i ] << "\n";

    }

  return 0;
} 
