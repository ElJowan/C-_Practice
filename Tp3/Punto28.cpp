///Ejercicio:
///Autor: DEK
///Fecha:
///Comentario:

# include<iostream>
# include<cstdlib>

using namespace std;


int main(){
     int num, i, o, contPP=0;

     cout<<"Ingrese 7 numeros diferenes: ";
     for(i=1;i<=7;i++){
        cin>>num;
        if(num>1){
            if (num%i==0){
            for(o=1;o<=num;o++){
                if (num%o==0){
                    contPP++;}
            else{
                contPP=-999;
            }}}}
     }
     if(contPP>0){
            cout<<"Ordenada"<<endl;
     }
     else if (contPP<0){
        cout<<"Desordenada"<<endl;
     }
     system("pause");
     return 0;
}
