///Ejercicio:
///Autor: DEK
///Fecha:
///Comentario:

# include<iostream>
# include<cstdlib>

using namespace std;


int main(){
     int h, resto, caja, precio;

     cout<<"Ingrese cantidad de huevos: ";
     cin>>h;
     resto = h%12;
     caja = (h-resto)/12;
     precio = (caja*100)+(resto*12);
     cout<<"Precio: "<<"$"<<precio<<endl;

     system("pause");
     return 0;
}
