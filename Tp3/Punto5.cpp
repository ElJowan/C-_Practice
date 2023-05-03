///Ejercicio:
///Autor: DEK
///Fecha:
///Comentario:

# include<iostream>
# include<cstdlib>

using namespace std;


int main(){
     int i, a, b, maxi, mini;

     cout<<"Ingrese un numero: ";
     cin>>a;
     cout<<"Ingrese otro numero: ";
     cin>>b;
     if(a>b){
        maxi=a;
        mini=b;
        }
        else if(b>a){
                maxi=b;
                mini=a;
        }
        for(i=mini+1; i<=maxi-1; i++){
            cout<<i<<endl;
        }

     system("pause");
     return 0;
}
