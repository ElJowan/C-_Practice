///Ejercicio:
///Autor: DEK
///Fecha:
///Comentario:

# include<iostream>
# include<cstdlib>

using namespace std;


int main(){
int num1, num2, resto;
     cout<<"Ingresar numero: ";
     cin>>num1;
     cout<<"Ingresar numero: ";
     cin>>num2;
     if (num1>0 && num2>0){
             cout<<"Diferencia absoluta: "<<num1-num2<<endl;
     }
     if (num1<0 && num2<0){
            cout<<"Diferencia absoluta2: "<< -(num1)+(num2)<<endl;
     }
     if (num1>0 && num2<0){
            cout<<"Diferencia absoluta3: "<< num1-(-num2)<<endl;
     }
     if (num1<0 && num2>0){
            cout<<"Diferencia absoluta4: "<< num1+(num2*2) <<endl;
     }

     system("pause");
     return 0;
}
