///Ejercicio:
///Autor: DEK
///Fecha:
///Comentario:

# include<iostream>
# include<cstdlib>

using namespace std;


int main(){
     int i, cdupla=0, cimpar=0, n;

     cout<<"Ingrese 10 numeros: ";
     for(i=1;i<=10;i++){
            cin>>n;
        if(n%2!=0){
        cimpar++;
     }
     else{
        cimpar=0;
     }
     if(cimpar==2){
        cdupla++;
        cimpar=1;
     }
     }
     cout<<"Duplas: "<<cdupla<<endl;

     system("pause");
     return 0;
}
