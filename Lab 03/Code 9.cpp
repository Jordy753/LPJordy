//Errores de logica
#include <iostream>

using namespace std;

int main()
{
    double temp=0;
    double sum=0;
    double high_temp=0; //inicializa
    double low_temp=0;  //inicializa
    int no_of_temps=0;

    while(cin>>temp && temp!=000){   //lee temp
        ++no_of_temps;  //cuenta temps
        sum+=temp;  //calcula la suma
        if(temp>high_temp) high_temp=temp; // Encuentra la mayor
        if(temp<low_temp) low_temp=temp;
        // Enceuntra la menor
    }
    cout<<"Temperatura alta: "<<high_temp<<"\n";
    cout<<"Temperatura baja: "<<low_temp<<"\n";
    cout<<"Temperatura promedio: "<<sum/no_of_temps<<"\n";
    return 0;
}

