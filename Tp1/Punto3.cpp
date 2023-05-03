///Ejercicio:
///Autor: DEK
///Fecha:
///Comentario:

# include<iostream>
# include<cstdlib>

using namespace std;


int main(){
     int autos, sueldo, mas, resultado;

     cout<<"Ingrese la cantidad de autos vendidos: ";
     cin>>autos;
     sueldo = 15000;
     mas = autos*2000;
     cout<<"El sueldo a pagar es: "<<sueldo+mas<<endl;

     system("pause");
     return 0;
}
