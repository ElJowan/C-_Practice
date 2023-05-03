///Ejercicio:
///Autor: DEK
///Fecha:
///Comentario:

# include<iostream>
# include<cstdlib>

using namespace std;


int main(){
     int maxi, n, i;

     cout<<"Ingrese 10 numeros de su agrado: ";
     cin>>maxi;

     for(i=1;i<=9;i++){
            cin>>n;
            if(n>=maxi){
                maxi=n;
            }
     }
     cout<<maxi<<" es el numero mas grande"<<endl;

     system("pause");
     return 0;
}
