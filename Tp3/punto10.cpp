///Ejercicio:
///Autor: DEK
///Fecha:
///Comentario:

# include<iostream>
# include<cstdlib>

using namespace std;


int main(){
     int maxi, n, i, pi=1;

     cout<<"Ingrese 10 numeros de su agrado: ";
     cin>>maxi;

     for(i=2;i<=10;i++){
            cin>>n;
            if(n>=maxi){
                maxi=n;
                pi= i;
            }
     }
     cout<<maxi<<" es el numero mas grande"<<endl;
     cout<<pi<<" es la posicion del maximo"<<endl;

     system("pause");
     return 0;
}
