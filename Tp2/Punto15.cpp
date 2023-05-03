///Ejercicio:
///Autor: DEK
///Fecha:
///Comentario:

# include<iostream>
# include<cstdlib>

using namespace std;


int main(){
     int mes, dia, ano, mes1, dia1, ano1;

     cout<<"Ingrese su dia de nacimiento: ";
     cin>>dia;
     cout<<"Ingrese su mes de nacimiento: ";
     cin>>mes;
     cout<<"Ingrese su año de nacimiento: ";
     cin>>ano;
     cout<<"Ingrese dia actual: ";
     cin>>dia1;
     cout<<"Ingrese mes actual: ";
     cin>>mes1;
     cout<<"Ingrese año actual: ";
     cin>>ano1;
     if(mes1<mes || dia1<dia){
        cout<<"Su edad actual es de: "<<ano1-ano-1<<endl;
        }

     system("pause");
     return 0;
}
