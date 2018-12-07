//La clase Lita(1,2y3)
#include<iostream>

using namespace std;

class Link{
  public:
    string value;

    //Constructor
    Link(const string& v,Link* p=0, Link* s=0):value(v),prev(p),succ(s){}
    Link();

    Link* insert0(Link* n);  //inserta n antes de este obj ok 
    Link* insert1(Link* n);  //ok
    Link* printf();
    Link* erase();  //elimina este obj de la lista
    Link* find(const string& s);  //encuentra s en la list
    Link* next() const{return succ;}
    Link* previous() const{return prev;}
  private:
    Link* prev;  
    Link* succ;
}; 

/*Link* default_const(){

}
*/
Link::Link():value("Vacio"),prev(0),succ(0) {}

//inserta n antes de este objeto
Link* Link::insert0(Link* n){
  //if(n==0) return this;
  //if(this==0) return n;
  n->succ=this; //el objeto this viene despues de n
  if(this->prev==0) this->prev=n;
  //n->prev=this->prev;   el anterior de this se convierte en anterior de n
  if(this->prev==n)cout<<"Todo ok\n";   //n es ahora en el anterior de this
  cout<<this->value<<endl;
  cout<<this->prev<<endl;   //**
  cout<<"El anterior a this es: "<<this->prev->value<<endl;
  return n;
}

//Inserta n antes que p. retorna n
Link* Link::insert1(Link* n){
  Link* p=this; //puntero al obj this
  cout<<"El valor de p es: "<<p->value<<endl; 
  //if(n==0) return p;  //nada que insertar
  //if(p==0)  return n; //nada donde insertar
  n->prev=p;    
  cout<<"El valor de p->prev es: "<<p->prev<<"\n";  //**
  if(p->succ==0) p->succ=n;  //-------
  //cout<<p->prev->value;
  //n->prev=p->prev;  //el ant de p sera ant de n
 
  cout<<"El valor de p->succ es: "<<p->succ->value<<endl;
  return n;
}
//Que un obj1 queda configurado de por si con el elemento insertado Y porque retorna un valor Link*?

Link* Link::printf(){
  Link* p=this;
  if(p->succ==0){
    cout<<p<<endl; 
    while(p!=0){
      cout<<p->value<<" ";
      p=p->prev;
      //cout<<p<<endl; 
    }
  }
  else{
  if(p->prev==0){  
    while(p!=0){
      cout<<p->value<<" ";
      p=p->succ;
    }
  }
  }
  return p;
}  

Link* Link::find(const string& s){
  Link* p=this;
  if(p->succ==0){ 
    while(p!=0){
      if(p->value==s){
        cout<<"Valor encontrado\n";
        break;
      }
      p=p->prev;
      if(p==0){
        cout<<"Valor no encontrado\n";
      } 
    }
  }
  else{
  if(p->prev==0){  
    while(p!=0){
      if(p->value==s){
        cout<<"Valor encontrado\n";
        break;
      }
      p=p->succ;
      if(p==0){
        cout<<"Valor no encontrado\n";
      }
    }
  }
}

  return p;
}

int main(){
Link obj1;
Link obj2;
obj1.insert0(new Link("hola"));
obj2.insert1(new Link("Hola2",0,0));
obj1.printf();
cout<<"\n";
obj2.printf();
cout<<"\n";
obj2.find("Hola2");
obj1.find("Vacio2");  //no existe dicho valor
cout<<obj1.next()<<"\n";
cout<<obj1.previous();

 return 0;
}
