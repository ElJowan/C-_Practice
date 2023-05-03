///Ejercicio:
///Autor: DEK
///Fecha:
///Comentario:

# include<iostream>
# include<cstdlib>

using namespace std;


int main(){
     int semana1, semana2, semana3, semana4, total;
     float regla1, regla2, regla3, regla4;

     cout<<"Ingrese la recaudacion de la semana 1: ";
     cin>>semana1;
     cout<<"Ingrese la recaudacion de la semana 2: ";
     cin>>semana2;
     cout<<"Ingrese la recaudacion de la semana 3: ";
     cin>>semana3;
     cout<<"Ingrese la recaudacion de la semana 4: ";
     cin>>semana4;
     total = semana1+semana2+semana3+semana4;
     cout<<"Promedio: "<<total/4<<endl;
     regla1 = (semana1*100)/total;
     regla2 = (semana2*100)/total;
     regla3 = (semana3*100)/total;
     regla4 = (semana4*100)/total;
     cout<<"Porcentaje de semana 1: "<<regla1<<"%"<<endl;
     cout<<"Porcentaje de semana 2: "<<regla2<<"%"<<endl;
     cout<<"Porcentaje de semana 3: "<<regla3<<"%"<<endl;
     cout<<"Porcentaje de semana 4: "<<regla4<<"%"<<endl;

     system("pause");
     return 0;
}
