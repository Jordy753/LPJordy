//Punteros a void

int main(){
  //void v; //error no hay objetos de tipo vacio
  void* pv1=new int;  //ok int* se convierte a void*
  void* pv2=new double[10]  //ok double* se convierte a void*
}

void f(void* pv){
  void* pv2=pv; //copiar esta ok
  //double* pd=pv Error: no se puede convertir 
  //*pv=7 Error: no se puede de referenciar void*(porque no sabemos el tipo de dato al que apunta)
  //pv[2]=9 Error:no se puede acceder a un void*
  int* pi=static_cast<int*>(pv);  //ok conversion explicita------------
}

