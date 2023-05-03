///Ejercicio:
///Autor: DEK
///Fecha:
///Comentario:

# include<iostream>
# include<cstdlib>

using namespace std;


int main(){
     int ano;

     cout<<"Ingrese un ano: ";
     cin>>ano;
     if (ano%4==0){
         cout<<ano<<" es biciesto"<<endl;
     }
        else{
            cout<<ano<<" no es biciesto"<<endl;
        }
        if(ano%100==0){
                if(ano%400==0){
                cout<<ano<<" es biciesto"<<endl;
        }
        }
        else{
                if(ano==1800)
                cout<<ano<<" no es biciesto"<<endl;
        }

     system("pause");
     return 0;
}
