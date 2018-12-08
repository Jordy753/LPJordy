//Lista enlazada(1,2)

struct Link{
  string value;
  Link* prev;
  Link* succ;
  Link(const string& v, Link* p=0, Link* s=0):value(v),prev(p),succ(s){}
};
//Inserta n antes de p (incompleto)
Link* insert(Link* p,Link* n){
  n->succ=p;    //p viene despues de n
  p->prev->succ=n;  //n viene despues de lo que solia ser el anterior de p
  n->prev=p->prev;  //el anterior de p se convierte en el anterior de n
  p->prev=n;    //n se convierte en el anterior de p
  return n;
}

int main(){
  Link* nord_gods=new Link("Thor",0,0);
  nord_gods=new Link("Odin",nord_gods,0);
  nord_gods->succ->prev=nord_gods;
  nord_gods=new Link("Freia",norse_gods,0);
  nord_gods->succ->prev=nord_gods;



}
