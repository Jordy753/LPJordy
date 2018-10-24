#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    vector<int> num1;
    vector<int> num2;
    string respuesta;
    int a,counter=0;
   
    for(int i=1;i<=100;i++){
        num1.push_back(i);
    }
	   
    while(counter<7 && num1.size()!=1){
    	a=num1.size()/2;
    	if(num1.size()<=3){
        	cout<<"Su numero es divisible entre dos\n";
        	cin>>respuesta;
        	if(respuesta=="si"){
				for(int i=0;i<num1.size();i++){
        			if(num1[i]%2==0){
        				num2.push_back(num1[i]);
        			}
        		}
        		num1.clear();
        	}
        	else{
        		for(int i=0;i<num1.size();i++){
        			if(num1[i]%2!=0){
        				num2.push_back(num1[i]);
        			}
        		}
        		num1.clear();
        	}
        }	
        else{
		cout<<"Su numero es menor o igual a "<<num1[a]<<"\n";
        cin>>respuesta;
        if(respuesta=="si"){
            for(int i=0;i<num1.size();i++){
                if(num1[i]<=num1[a]){
                    num2.push_back(num1[i]);
                }
            }
			num1.clear();
        }
        else{
            for(int i=0;i<num1.size();i++){
                if(num1[i]>num1[a]){
                    num2.push_back(num1[i]);
                }
            }
            num1.clear();
        }
        }
        
        for(int i=0;i<num2.size();i++){
        	num1.push_back(num2[i]);
        }
        num2.clear();
        counter=counter+1;
        
    }
       
    for(int i=0;i<num1.size();i++){
        cout<<num1[i]<<"\n";
    }
	
	return 0;
    
    }
