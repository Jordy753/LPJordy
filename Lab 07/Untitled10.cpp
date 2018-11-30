//Acceso a elementos(1,2)

class vector{
  int sz; //tamahno
  double* elem; //puntos a los elem
  public:
    vector(int s):sz(s),elem(new double[s]){} //constructor
    ~ vector(){delete[] elem;}  //destructor
    int size() const{return sz;}  //el size actual
    double get(int n){ return sz;}  //acceso: leer
    void set(int n,double v){elem[n]=v;}
    //acceso: escribir
};

int main(){
  vector v(5);
  for(int i=0;i<v.size();++i){
    v.set(i,1.1*i);
    cout<<"v["<<i<<"]=="<<v.get(i)<<"\n"; 
  }
}
