///Ejercicio:
///Autor: DEK
///Fecha:
///Comentario:

# include<iostream>
# include<cstdlib>

using namespace std;


int main(){
     int num1, num2, num3, num4, num5, maxi, mini;

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
     if (num1>num2){
         maxi = num1;
         mini = num2;
     }
     else{
        maxi = num2;
        mini = num1;
     }
      if (num3>maxi){
        maxi = num3;
      }
      else{
        if (num3<mini){
           mini = num3;
        }
      }
      if(num4>maxi){
        maxi = num4;
      }
     else{
        if(num4<mini){
            mini = num4;
        }
     }
     if(num5>maxi){
        maxi = num5;
     }
     else{
        if(num5<mini){
            mini = num5;
        }
     }
     cout<<"El maximo es: "<<maxi<<endl;
     cout<<"El minimo es: "<<mini<<endl;
     cout<<"El maximo y minimo son: "<<maxi<<" y "<<mini<<endl;

     system("pause");
     return 0;
}
