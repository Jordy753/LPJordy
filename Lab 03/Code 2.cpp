//Errores de tipos

#include<iostream>
#include<string>

int area(int legth, int width);

int main(){
	int x0=arena(7); // error: funcion no declarada
	int x1=arena(7); // error: numero de argumentos
	int x2=area("seven",2) //error: error en el tipo del primer argumento
	return area(4,4);
}

int area(int legth, int width){
	return length*width;
}
