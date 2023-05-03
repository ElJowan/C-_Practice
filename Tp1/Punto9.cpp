///Ejercicio:
///Autor: DEK
///Fecha:
///Comentario:

# include<iostream>
# include<cstdlib>

using namespace std;


int main(){
     int mins, resto, hs;

     cout<<"Inserte cantidad de minutos: ";
     cin>>mins;
     resto = mins%60;
     hs = (mins-resto)/60;
     cout<<"Respuesta: "<<hs<<" horas y "<<resto<<" minutos"<<endl;

     system("pause");
     return 0;
}
