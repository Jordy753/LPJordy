#include<iostream>
#include<fstream>
#include<vector>

using namespace std;

void Puntaje(vector<int> &_puntaje,int counter);

class Letra{
  public:
  char letr=' ';
  int valr=0;

    Letra(char _letr='0',int _valr=0):letr(_letr),valr(_valr){}     
    //Modifican los valores
    void modif_valr(int n){valr=n;}

    //Valores que retornan
    char letr_letr()const{return letr;}
    int  letr_valr()const{return valr;}
};

class Tabl_Bog{
  Letra A,T,E,P,Y,O,I,N,U,D,S;
  public:
  Letra _map01[4][4];

  //Constructor 
  Tabl_Bog(Letra _A,Letra _T,Letra _E,Letra _P,Letra _Y,Letra _O,Letra _I,Letra _N,Letra _U,Letra _D,Letra _S){ 
    A=_A;T=_T;E=_E;P=_P;Y=_Y;O=_O;I=_I;N=_N;U=_U;D=_D;S=_S;
//    cout<<_A.letr<<_T.letr<<_E.letr<<_P.letr<<_Y.letr<<_O.letr<<_I.letr<<_N.letr<<_U.letr<<_D.letr<<_S.letr;
    _map01[0][0]=A;_map01[0][1]=T;_map01[0][2]=E;_map01[0][3]=E;_map01[1][0]=A;_map01[1][1]=P;_map01[1][2]=Y;_map01[1][3]=O;_map01[2][0]=T;_map01[2][1]=I;_map01[2][2]=N;_map01[2][3]=N;_map01[3][0]=E;_map01[3][1]=D;_map01[3][2]=S;_map01[3][3]=E;
  }
  //Funciones 
  void monstr_matrz();  
  void monstr_matrznum();  
};

void  Tabl_Bog::monstr_matrz(){
  for(int i=0;i<4;i++){
    for(int a=0;a<4;a++){
      cout<<_map01[i][a].letr<<" ";
    }
    cout<<"\n";
  }
}
void  monstr_matrznum(Letra map[4][4]){
    for(int i=0;i<4;i++){
    for(int a=0;a<4;a++){
      cout<<map[i][a].valr<<" ";
    }
    cout<<"\n";
  }
}

class Bogger{
  public:
  int entr;
  vector<char> palabras;
  vector<int> puntajeB;
  Tabl_Bog map0;

  //Constructor
  Bogger(Tabl_Bog _map0,int _entr):map0(_map0),entr(_entr){}

  //Funciones
  void busqu_restant(char* d,Letra map[4][4],int n,int i,int a);
  void busqud_primerletr(char* p,Letra map[4][4],int n);
  void busqud_utilizc_palbrs();
  void monstr_puntj();

};

void Bogger::monstr_puntj(){
  int counter=0;		
  for(int i=0;i<puntajeB.size();i++){
    cout<<puntajeB[i]<<" ";
    counter=counter+puntajeB[i];
  }
  cout<<"\n";
  cout<<"El puntaje maximo que existe es: "<<counter;	
}

void Bogger::busqud_utilizc_palbrs(){
 //char* pp="TAAT";
 vector<char*> pp0;
  char n[30]="TAAT";
  pp0.push_back(n);
  busqud_primerletr(pp0[0],map0._map01,0);
  pp0.push_back("TINNOYE");
  //pp="TINNOYE";
  busqud_primerletr(pp0[1],map0._map01,0);

}

void Bogger::busqud_primerletr(char* p,Letra map[4][4],int n){
  //cout<<*p<<endl;
  for(int i=0;i<4;i++){
    for(int a=0;a<4;a++){
      if(map[i][a].letr_letr()==p[n] && map[i][a].letr_valr()==0){
        map[i][a].modif_valr(1);
        busqu_restant(p,map,n+1,i,a);
        
        //monstr_matrznum(map);
        map[i][a].modif_valr(0); 
        //cout<<"\n";
        //monstr_matrznum(map);
        //cout<<"\n";
        
      }
    }        
  }
  entr=1;
}   

void Bogger::busqu_restant(char* p,Letra map[4][4],int n,int i,int a){
    
  if(a-1>=0 && map[i][a-1].letr_letr()==p[n]&& map[i][a-1].letr_valr()==0){//izquierda
    map[i][a-1].modif_valr(1);
    //cout<<p[n]<<endl;
    //cout<<"encontre\n";
    busqu_restant(p,map,n+1,i,a-1);
    map[i][a-1].modif_valr(0); //fat
  }
  if(a+1<=3 && map[i][a+1].letr_letr()==p[n]&& map[i][a+1].letr_valr()==0){//derecha
      map[i][a+1].modif_valr(1);
      //cout<<p[n]<<endl;
      //cout<<"encontre\n";
      busqu_restant(p,map,n+1,i,a+1);
      map[i][a+1].modif_valr(0); 
  }
  if(i-1>=0 && map[i-1][a].letr_letr()==p[n]&& map[i-1][a].letr_valr()==0){//arriba
      map[i-1][a].modif_valr(1);
      //cout<<p[n]<<endl;
      //cout<<"encontre\n";
      busqu_restant(p,map,n+1,i-1,a);
      map[i-1][a].modif_valr(0); 
  }
  if(i+1<=3 && map[i+1][a].letr_letr()==p[n]&& map[i+1][a].letr_valr()==0){//abajo
    map[i+1][a].modif_valr(1);
    //cout<<p[n]<<endl;
    //cout<<"encontre\n";
    busqu_restant(p,map,n+1,i+1,a);
    map[i+1][a].modif_valr(0); 
  }
  if(i-1>=0 && a-1>=0 && map[i-1][a-1].letr_letr()==p[n] && map[i-1][a-1].letr_valr()==0){//Diagonal superior izquierda
  	map[i-1][a-1].modif_valr(1);
  	
	busqu_restant(p,map,n+1,i-1,a-1);
  	map[i-1][a-1].modif_valr(0);
  }
  if(i-1>=0 && a+1<=3 && map[i-1][a+1].letr_letr()==p[n] && map[i-1][a+1].letr_valr()==0){//Diagonal superior derecha
	map[i-1][a+1].modif_valr(1);
	
	busqu_restant(p,map,n+1,i-1,a+1);
	map[i-1][a+1].modif_valr(0);
  }
  if(i+1<=3 && a-1>=0 && map[i+1][a-1].letr_letr()==p[n] && map[i+1][a-1].letr_valr()==0){//Diagonal inferior izquierda
    map[i+1][a-1].modif_valr(1);
	
	busqu_restant(p,map,n+1,i+1,a-1);
	map[i+1][a-1].modif_valr(0);
  }
  if(i+1<=3 && a+1<=3 && map[i+1][a+1].letr_letr()==p[n] && map[i+1][a+1].letr_valr()==0){//Diagonal inferior derecha
	map[i+1][a+1].modif_valr(1);
	
	busqu_restant(p,map,n+1,i+1,a+1);
	map[i+1][a+1].modif_valr(0);
  }

  if(p[n]=='\0'){
    if(entr==1){  
    //cout<<p[0]<<p[1]<<p[2]<<p[3]<<endl;
    cout<<"Si se encuentra la palabra\n";
    //Siempre cuando la palabra no se halla ya regstrado
     
      entr=entr-1;
      
      int counter=0; 
      while(p[counter]!='\0'){
      	cout<<p[counter];
        counter=counter+1;
      }
	  cout<<"\n"; 
      cout<<counter<<"\n";
      Puntaje(puntajeB,counter);   
    } 
  }

} 

void Puntaje(vector<int>& _puntaje,int counter){  
    if(0<=counter && 2>=counter){
      _puntaje.push_back(0);          
    }
    else if(3<=counter && 4>=counter){
      _puntaje.push_back(1);        
    }
    else if(counter==5){
      _puntaje.push_back(2);
    }
    else if(counter==6){
      _puntaje.push_back(3);        
    }
    else if(counter==7){
      _puntaje.push_back(5);
    }
    else if(counter==8){
      _puntaje.push_back(11);
    }
}

class Diccionario{
  public:
	int i;
 	char n[30];
	fstream f;
  Bogger a;
	
  //Constructor
  Diccionario(int _i,Bogger _a):i(_i),a(_a){}

  void iniciaz();

};

void Diccionario::iniciaz(){
  f.open("diccionario.txt",ios::in);
  while(!f.eof()){
		f>>n;
		a.busqud_primerletr(n,a.map0._map01,0);
	}
	f.close();
	a.monstr_puntj();

}



ostream& operator<<(ostream& os,Letra& d){
  return os<<d.letr_letr();
}

int main(){
/*
  ifstream archivo_entrada("diccionario.txt");
  string linea, arch_leer;
  //char* linea;
  int contador=0;
  int max;

  cout << "Escribe una linea: ";
  cin >> max;

  while(getline(archivo_entrada, linea)) {
    if(max == contador) {
		    arch_leer=linea;
        //*pp=linea; cout << *pp;
        //Para cambiar el valor o inicializarlo con el valor que encuentre en el diccionario poniendo la dicha posicion
    }
    contador++;
  }
    archivo_entrada.close();
*/
Letra A('A'),T('T'),E('E'),P('P'),Y('Y'),O('O'),I('I'),N('N'),U('U'),D('D'),S('S');
Tabl_Bog map00(A,T,E,P,Y,O,I,N,U,D,S); 
Bogger juego(map00,1);
Diccionario inici(0,juego);
Letra _map[4][4]={{A,T,E,E},{A,P,Y,O},{T,I,N,U},{E,D,S,E}};

//El supuesto caso si hubiera dos palabras repetidas seria unpuntaje de 8 para avanzar otro menu 
//Problemas con el resultado simplmente con los datos bool a la que retornan

map00.monstr_matrz();
inici.iniciaz();
//juego.busqud_utilizc_palbrs();
//juego.monstr_puntj(); 

  //despues de todo esto se sumara todo el vector que tenemos con los puntajes 


//Ahora todo esto convertirlos en sus recpetivas clases alguna sugerencia o ayuda Miss  
 return 0;
}
