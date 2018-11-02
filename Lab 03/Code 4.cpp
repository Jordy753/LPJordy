//Errores en tiempo de enlace(link-time).

#include<iostream>
#include<string>

int area(int length, int width);
int main(){
	int x=area(2,3);
	
	return 0;
}

//int area (int x, int y) {return x*y;}// es esta
//funcion con mismo nombre pero diferentes tipos no coinciden y son ignoradas

double area(double x,double y){
	return x*y;
}
int area(int x,int y, char unit){
	return x*y;
}
