///Ejercicio:
///Autor: DEK
///Fecha:
///Comentario:

# include<iostream>
# include<cstdlib>

using namespace std;


int main(){
     int num1, num2, num3;

     cout<<"Ingrese un numero: ";
     cin>>num1;
     cout<<"Ingrese un numero: ";
     cin>>num2;
     cout<<"Ingrese un numero: ";
     cin>>num3;

     if(num1==num2 && num2==num3 && num1==num3){
                        cout<<"Equilatero"<<endl;
     }
     else{
                 if(num1!=num2 && num2!=num3 && num1!=num3){
                        cout<<"Escaleno"<<endl;
     }
     else{
        cout<<"Isosceles"<<endl;
     }
     }

     system("pause");
     return 0;
}
