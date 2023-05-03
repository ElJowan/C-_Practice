///Ejercicio:
///Autor: DEK
///Fecha:
///Comentario:

# include<iostream>
# include<cstdlib>

using namespace std;


int main(){
     int num1, num2, num3, num4, num5, cont;

     cont = 0;
     cout<<"Ingrese un numero: ";
     cin>>num1;
     cout<<"Ingrese un numero: ";
     cin>>num2;
     cout<<"Ingrese un numero: ";
     cin>>num3;
     cout<<"Ingrese un numero: ";
     cin>>num4;
     cout<<"Ingrese un numero: ";
     cin>>num5;
     if(num1>0){
        cont++;
     }
     if(num2>0){
        cont++;
     }
     if(num3>0){
        cont++;
     }
     if(num4>0){
        cont++;
     }
     if(num5>0){
        cont++;
     }
     cout<<cont<<" son positivos"<<endl;

     system("pause");
     return 0;
}
