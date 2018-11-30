#include<iostream>
#include<string>
#include<vector>
#include<stdexcept>


using namespace std;

class Anime{
  public:
    enum Geners{
      Gore,Spokon,Romakone,Meitantei,Mecha,Shojo,MahoShojo,Gekiga,MagicalGirlfriend,Josei,Kemono,Kodomo,Cyberpunk,Shonen,Seinen,Sentai,comedia,Postapocaliptico
    }; 
    enum Formats{
      serie,OVA,pelicula,manga
    };

    Anime(string _nombre,string _autor,vector<Geners>& alm_gen,Formats _formato, int _anho);


    //  Operaciones que no se modificaran
    string a() const {return nombre;}
    string b() const {return autor;}
    Geners c() const {return genero[0];}
    Formats d() const {return formato;}
    int e()    const {return anho;}
	//void c()  { alm_gen[0]=genero[0];  alm_gen[1]=genero[1];}
  private:
    string  nombre,autor;
    int     anho;
    Formats formato;
    vector<Geners> genero;

};

//Constructor de parametros y validacion
Anime::Anime(string _nombre,string _autor, vector<Geners>& alm_gen,Formats _formato, int _anho){
  if(_nombre=="0"){
    _nombre="Desconocido";
  }
  if(_autor=="0"){
    _autor="Desconocido";
  }
  for(int i=0;i<alm_gen.size();i++){
  if( alm_gen[i]<Gore || alm_gen[i]>Postapocaliptico){ throw runtime_error("No conosco dicho genero");}
  }
  if( _formato<serie || _formato>manga){
    throw runtime_error("No conosco dicho formato");
  }
  if(_anho<1917 || _anho>2018 ){
    throw runtime_error("Anho de publicacion invalida");
  }
  nombre=_nombre;
  autor=_autor;
  genero=alm_gen;
  formato=_formato;
  anho=_anho;
}
 
 ostream& operator<<(ostream& os,const Anime::Geners& d){
    static const char* genrs_tbl[18]={
    "Gore","Spokon","Romakone","Meitantei","Mecha","Shojo","MahoShojo","Gekiga","MagicalGirlfriend","Josei","Kemono","Kodomo","Cyberpunk","Shonen","Seinen","Sentai","comedia","Postapocaliptico"
  };
  return os<<genrs_tbl[d];
 }

 ostream& operator<<(ostream& os,const Anime::Formats& d){
 	static const char* form_tbl[4]={
	 	"serie","OVA","pelicula","manga"
	 };
	 return os<<form_tbl[d];
 }
int main()
try{
string nombre,autor;
//  Anime genero;
//  Anime formato;
int a=0,anho=0;
//Investigar como ingresar objetos nuevos creado en la class

while(a==0){
	cout<<"Escriba en orden: el nombre, autor, anho, formato y genero"<<endl;
	cin>>nombre>>autor>>anho;
	vector<Anime::Geners> alm_gen; 
		alm_gen.push_back(Anime::Shonen);
		alm_gen.push_back(Anime::Mecha);
	
	Anime p1(nombre,autor,alm_gen,Anime::OVA,anho);

	cout<<"El nombre es: "<<p1.a()<<"\n";
	cout<<"El autor es: "<<p1.b()<<"\n";
	cout<<"Los generos son: "<<alm_gen[0]<<" "<<alm_gen[1]<<"\n";
	cout<<"El formato es: "<<p1.d()<<"\n";
	//cout<<"El genero es: "<<p1.c()<<"\n";
	//cout<<"El formato es: "<<p1.d()<<"\n";
	cout<<"El anho es: "<<p1.e()<<"\n";
cout<<"\n";
}

}
catch(exception & e){
  cerr<<"Error: "<<e.what()<<"\n";
  return 1;
}

