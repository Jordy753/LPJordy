#include<iostream>
#include<string>
#include<vector>
#include <algorithm>
#include <stdexcept>


using namespace std;

string busqud(string _dato){
  vector<string> genros_anm;
  vector<string> formts_anm;
 
  formts_anm.push_back("serie");
  formts_anm.push_back("OVA");
  formts_anm.push_back("pelicula");
 
  genros_anm.push_back("Comedia");
  genros_anm.push_back("Cyberpunk");
  genros_anm.push_back("Ecchi");
  genros_anm.push_back("Gekiga");
  genros_anm.push_back("Gore");
  genros_anm.push_back("Harem");
  genros_anm.push_back("Shonen");
  genros_anm.push_back("Hentai");
  genros_anm.push_back("Jidaigeki");
  genros_anm.push_back("Kemono");
  genros_anm.push_back("Maho shojo");
  genros_anm.push_back("Mecha");
  genros_anm.push_back("Meitantei");
  genros_anm.push_back("Nekketsu");
  genros_anm.push_back("Post-apocaliptico");
  genros_anm.push_back("Romakome");
  genros_anm.push_back("Sentai");
  genros_anm.push_back("Shotacon");
  genros_anm.push_back("Yuri");
  genros_anm.push_back("Spokon");
  genros_anm.push_back("Steampunk");
  genros_anm.push_back("Suspenso");

  for(int i=0;i<genros_anm.size();i++){
        if(_dato==genros_anm[i])
              return "existe";
     
       
  }
  for(int i=0;i<formts_anm.size();i++){
        if(_dato==formts_anm[i])
              return "existe";
      
  }
 
}


class Anime
{
  string  nombre,autor,genero,formato;
  int     anho;
  public:
    Anime(string _nombre,string _autor, string _genero, string _formato, int _anho);
    string a(){return nombre;}
    string b(){return autor;}
    string c(){return genero;}
    string d(){return formato;}
    int e(){return anho;}


};

Anime::Anime(string _nombre,string _autor, string _genero, string _formato, int _anho){
  if(_nombre=="0"){
    _nombre="Desconocido";
  }
  if(_autor=="0"){
    _autor="Desconocido";
  }
  if(busqud(_genero)!="existe"){
    throw runtime_error("No conosco dicho genero");
  } //crear funcion genero encargado de verificar la veracidad del genero
  if(busqud(_formato)!="existe"){
    throw runtime_error("No conosco dicho formato");
  }
  if(_anho<1917 || _anho>2018 ){
    throw runtime_error("Anho de publicacion invalida");
  }
  nombre=_nombre;
  autor=_autor;
  genero=_genero;
  formato=_formato;
  anho=_anho;
}


int main()
try{
string nombre,autor,genero,formato;
int a=0,anho=0;
while(a==0){
	cout<<"Escriba en orden: el nombre, autor, genero, formato y anho"<<endl;
	cin>>nombre>>autor>>genero>>formato>>anho;
	Anime p1(nombre,autor,genero,formato,anho);

	cout<<"El nombre es: "<<p1.a()<<"\n";
	cout<<"El autor es: "<<p1.b()<<"\n";
	cout<<"El genero es: "<<p1.c()<<"\n";
	cout<<"El formato es: "<<p1.d()<<"\n";
	cout<<"El anho es: "<<p1.e()<<"\n";
cout<<"\n";
}

}
catch(exception & e){
  cout<<"Error: "<<e.what()<<"\n";
  return 1;
}
