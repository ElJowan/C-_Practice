///Ejercicio:
///Autor: DEK
///Fecha:
///Comentario:

# include<iostream>
# include<cstdlib>

using namespace std;


int main(){

    int imp_o, imp_d, dec;

     cout<<"Ingrese importe original: ";
     cin>>imp_o;
     cout<<"Ingrese importe con descuento: ";
     cin>>imp_d;
     dec = 100-(imp_d*100)/imp_o;
     cout<<"El descuento es de: "<<dec<<"%"<<endl;

     system("pause");
     return 0;
}
