///Ejercicio:
///Autor: DEK
///Fecha:
///Comentario:

# include<iostream>
# include<cstdlib>

using namespace std;


int main(){
     int a, b ,c, total;
     float regla1, regla2, regla3;

     cout<<"Ingrese la cantidad de alfajores A vendidos: ";
     cin>>a;
     cout<<"Ingrese la cantidad de alfajores B vendidos: ";
     cin>>b;
     cout<<"Ingrese la cantidad de alfajores C vendidos: ";
     cin>>c;
     total = a+b+c;
     regla1 = (a*100)/total;
     regla2 = (b*100)/total;
     regla3 = (c*100)/total;
     cout<<"Porcentaje de alfajores A vendidos: "<<regla1<<"%"<<endl;
     cout<<"Porcentaje de alfajores B vendidos: "<<regla2<<"%"<<endl;
     cout<<"Porcentaje de alfajores C vendidos: "<<regla3<<"%"<<endl;

     system("pause");
     return 0;
}
