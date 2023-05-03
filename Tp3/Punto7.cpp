///Ejercicio:
///Autor: DEK
///Fecha:
///Comentario:

# include<iostream>
# include<cstdlib>

using namespace std;


int main(){
     int i,n ,np=0, nn=0, n0=0;

     cout<<"Ingrese 20 numeros: ";
     for(i=1;i<=20;i++){
        cin>>n;
        if(n>0){
            np++;
        }
        else if (n<0){
            nn++;
        }
        else{
            n0++;
        }
     }
     cout<<np<<" son positivos"<<endl;
     cout<<nn<<" son negativos"<<endl;
     cout<<n0<<" son cero"<<endl;

     system("pause");
     return 0;
}
