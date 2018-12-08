#include<iostream>

using namespace std;

void to_lower(char* S){
 int d='a',f='A',j=d-f,c=0;
 	while(S[c]!='\0'){
      int hj=S[c];
      S[c]=hj-j;
      c++;
    }
}
