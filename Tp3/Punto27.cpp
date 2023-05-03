///Ejercicio:
///Autor: DEK
///Fecha:
///Comentario:

# include<iostream>
# include<cstdlib>

using namespace std;


int main(){
     int i, o, n1, np, nn, n0, ultprimo, posprimo, cimp, cprimo, j;

     cout<<"Ingrese 5 numeros: ";
     for(i=1;i<=10;i++){
            np=0;
            nn=0;
            n0=0;
            ultprimo=0;
        for(o=1;o<=5;o++){
            cin>>n1;
            if(n1>0){
                np++;
            }
            else if(n1<0){
                nn++;
            }
            else{
                n0++;
            }
            cprimo=0;
            for(j=1;j<=n1;j++){
                if(n1%j==0){
                    cprimo++;
                }
            }
            if(cprimo==2)
                ultprimo=n1;
                posprimo=o;

            if(n1%2!=0){
                cimp++;
            }
        }
     cout<<"Grupo: "<<i<<endl;
     cout<<"Cantidad de positivos: "<<np<<endl;
     cout<<"Cantidad de negativos: "<<nn<<endl;
     cout<<"Cantidad de ceros: "<<n0<<endl;
     if(ultprimo==0){
        cout<<"No hay primos"<<endl;
     }
     else{
        cout<<"Ultimo numero primo: "<<ultprimo<<endl;
        cout<<"Posicion del ultimo numero primo: "<<posprimo<<endl;
     }
     }
     cout<<"Cantidad de impares: "<<cimp<<endl;

     system("pause");
     return 0;
}
