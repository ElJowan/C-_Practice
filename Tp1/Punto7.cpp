///Ejercicio:
///Autor: DEK
///Fecha:
///Comentario:

# include<iostream>
# include<cstdlib>

using namespace std;


int main(){
     float p, por, regla1, regla2, regla3;
     cout<<"Ingrese precio del producto: ";
     cin>>p;
     cout<<"Ingrese el descuento: ";
     cin>>por;
     regla1 = por/100;
     regla2 = p*regla1;
     regla3 = p - (regla2);
     cout<<"Precio final: "<<regla3<<endl;

     system("pause");
     return 0;
}
