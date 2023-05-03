///Ejercicio:
///Autor: DEK
///Fecha:
///Comentario:

# include<iostream>
# include<cstdlib>

using namespace std;


int main(){
int num;
     cout<<"Ingrese el importe: ";
     cin>>num;
     if (num<100){
        cout<<"El precion final es1: "<<num*0.95<<endl;
     }
        if(num>100 || num<500){
            cout<<"El precio final es2: "<<num*0.90<<endl;
     }
        if(num>500){
            cout<<"El precio final es3: "<<num*0.85<<endl;
     }

     system("pause");
     return 0;
}
