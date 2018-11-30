//Destructores 1,2
class vector{
    int sz; //el tamaño
    double* elem; //puntero a los elementos
  public:
    vector(int s):sz(s),elem(new double[s]){ //asigna memoria  y es un constructor
    for(int i=0;i<s;++i) elem[i]=0;
    }

    -vector()    //destructor
    {
      delete[] elem;  //libera memoria
    }

};

void f3(int n){
  int* p=new int[n];  //asigna n ints
  vector v(n);        //----define un vector 
  //(tambien asigna otros n ints) usa p y v        
  delete[] p;         //des-asigna los ints
} //vector limpia su memoria al morir: v

int main(){
  f3(42);
}
