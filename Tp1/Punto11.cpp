///Ejercicio:
///Autor: DEK
///Fecha:
///Comentario:

# include<iostream>
# include<cstdlib>

using namespace std;


int main(){
     int mins, minutos, hs, horas, dias;

     cout<<"Ingrese minutos: ";
     cin>>mins;
     minutos = mins%60;
     hs = (mins-minutos)/60;
     horas = hs%24;
     dias = (hs-horas)/24;
     cout<<"Son "<<dias<<" dias, "<<horas<<" horas y "<<minutos<<" minutos"<<endl;

     system("pause");
     return 0;
}
