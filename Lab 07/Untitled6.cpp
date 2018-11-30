//Inicialización(1,2y3)
class X{
  public:
    X(){} //Constructor por defecto
};

class Y{
  public:
  Y(int){}  //constrcutor recibe 1 arg no hay constrcutor por defecto
};

int main(){
  double* p0; //sin inicializar(problemas)
  double* p1=new double;  //obtiene un double no inicializado
  double* p2=new double(5.5); //obtiene un double inicializado con 5.5
  double* p3=new double[5]; //Obtiene 5 doubles inicializados
  //Obviamente si declaramos p0 sin inicializarlo estamos pidiendo problemas  
  *p0=7.0;
  //No sabemos a que parte de la memoria esta apuntando podria hacer un crash

  double* p4=new double[5];
  //double* p4=now double[5](0,1,2,3,4);
  for(int i=0;i<5;i++) p4[i]=i;

  X* px1=new X; // px1 apunta a un obj X inicializado por defecto
  X* px2=newX[17];  //17 objs X inicializados por defecto

  //Y* py1=new Y; Error: no hay constructor por defecto
  //Y* py2=new Y[17];
  Y* py3=newY(13);  //ok inicializamos a Y(13)
}
