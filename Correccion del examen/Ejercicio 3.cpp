#include<iostream>
#include<string>

using namespace std;

int main(){
	int counter;
	
	for(int i=1;i<100;i++){
		counter=0;
		for(int a=1;a<100;a++){
			if(i%a==0){
				counter++;
			}
			if(counter>2){
				break;
			}	
			
		}
		if(counter<=2){
			cout<<i<<" ";
		}
	}
	
	
	return 0;
	
}
