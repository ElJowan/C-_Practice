///Ejercicio:
///Autor: DEK
///Fecha:
///Comentario:

# include<iostream>
# include<cstdlib>

using namespace std;


int main(){
     int edad, distancia, valor1, valor2;

     cout<<"Ingrese su edad: ";
     cin>>edad;
     cout<<"Ingrese la distancia de su ciudad: ";
     cin>>distancia;
     if (edad>18 && edad<70){
        valor1 = 1;
     }
     else{
        if (edad>70){
           valor1 = 0;
        }
     }
     if(distancia<500){
        valor2 = 2;
     }
     else{
            if (distancia>500){
                valor2 = 0;
            }
     }
     if (valor1==1 && valor2==2){
        cout<<"Puede votar"<<endl;
     }
     else{
            if(valor1 == 0 || valor2 == 0){
                    cout<<"No puede votar"<<endl;
            }
     }

     system("pause");
     return 0;
}
