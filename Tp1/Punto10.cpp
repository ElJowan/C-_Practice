///Ejercicio:
///Autor: DEK
///Fecha:
///Comentario:

# include<iostream>
# include<cstdlib>

using namespace std;


int main(){
     int h, dias, horas;

     cout<<"Ingrese horas: ";
     cin>>h;
     horas = h%24;
     dias = (h-horas)/24;
     cout<<"Respuesta: "<<dias<<" dias y "<<horas<<" horas"<<endl;

     system("pause");
     return 0;
}
