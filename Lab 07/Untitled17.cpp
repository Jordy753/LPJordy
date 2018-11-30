//La clase Lita(1,2y3)
#include<iostream>

using namespace std,

class Link{
  public:
    string value;
    Link(const string& v,Link* p=0, Link* s=0):value(v),prev(p),succ(s){}
    Link* insert(Link* n);  //inserta n antes de este obj 
    Link* erase();  //elimina este obj de la lista
    Link* find(const string& s);  //encuentra s en la list
    const Link* find(const string& s)const;
    Link* next() const{return succ;}
    Link* previous() const{return prev;}
  private:
    Link* prev;  
    Link* succ;
}; 

//inserta n antes de este objeto
Link* Link::insert(Link* n){
  if(n==0) return this;
  if(this==) return n;
  n->succ=this; //el objeto this viene despues de n
  if(this->prev) this->prev->succ=n;
  n->prev=this->prev;   //el anterior de this se convierte en anterior de n
  this->prev=n;   //n es ahora en el anterior de this
  return n;
}

//Inserta n antes que p. retorna n
Link* Link::insert(Link* n){
  Link* p=this; //puntero al obj this
  if(n==0) return p;  //nada que insertar
  if(p==0)  return n; //nada donde insertar
  n->succ=p;    //p viene despues de n
  if(p->prev) p->prev->succ=n;
  n->prev=p->prev;  //el ant de p sera ant de n
  p->prev=n;    //n sera el ant de p
  return n;
}

