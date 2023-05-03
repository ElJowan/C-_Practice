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
     if (num1<num2 && num1<num3){
        if (num2>num1 && num2<num3){
            if (num3>num1 && num3>num2){
                cout<<num1<<", "<<num2<<" y "<<num3<<endl;
            }
        }
     }
     if (num2<num1 && num2<num3){
        if (num1>num2 && num1<num3){
                if (num3>num1 && num3>num2){
                        cout<<num2<<", "<<num1<<" y "<<num3<<endl;
            }
        }
     }
     if (num1>num2 && num1>num3){
        if (num2<num1 && num2>num3){
                if (num3<num1 && num3<num2){
                        cout<<num3<<", "<<num2<<" y "<<num1<<endl;
                }
        }
     }
     if (num1>num2 && num1>num3){
        if (num2<num1 && num2<num3){
            if (num3<num1 && num3>num2){
                cout<<num2<<", "<<num3<<" y "<<num1<<endl;
            }
        }
     }
     if (num1<num2 && num1<num3){
        if(num2>num1 && num2>num3){
            if(num3>num1 && num3<num2){
                cout<<num1<<", "<<num3<<" y "<<num2<<endl;
            }
        }
     }
     if (num1>num3 && num1<num2){
        if (num2>num1 && num2>num3){
            if (num3<num1 & num3<num2){
                cout<<num3<<", "<<num1<<" y "<<num2<<endl;
            }
        }
     }

     system("pause");
     return 0;
}
