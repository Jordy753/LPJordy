#include<iostream>

using namespace std;

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




