///Ejercicio:
///Autor: DEK
///Fecha:
///Comentario:

# include<iostream>
# include<cstdlib>

using namespace std;


int main(){
    int i, n, np=0, nn=0, n0=0, aux, aux2, aux3;

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
     aux=((np*100)/20);
     aux2=((nn*100)/20);
     aux3=((n0*100)/20);

     cout<<aux<<"%"<<" son positivos"<<endl;
     cout<<aux2<<"%"<<" son negativos"<<endl;
     cout<<aux3<<"%"<<" son cero"<<endl;

     system("pause");
     return 0;
}
