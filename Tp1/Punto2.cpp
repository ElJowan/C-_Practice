///Ejercicio:
///Autor: DEK
///Fecha:
///Comentario:

# include<iostream>
# include<cstdlib>

using namespace std;


int main(){
     int num1, num2, variable;
     cout<<"Inserte numero 1: ";
     cin>>num1;
     cout<<"Inserte numero 2: ";
     cin>>num2;
     variable = num1;
     num1 = num2;
     cout<<num2<<endl;
     cout<<variable<<endl;

     system("pause");
     return 0;
}
