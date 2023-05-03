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
     if (num1>num2 && num1>num3){
        cout<<num1<<" Es el mas grande"<<endl;
     }
     else{
            if(num2>num1 && num2>num3){
                    cout<<num2<<" Es el mas grande"<<endl;
            }
            else{
                    if(num3>num1 && num3>num2)
                    cout<<num3<<" Es el mas grande"<<endl;
     }
     }

     system("pause");
     return 0;
}
