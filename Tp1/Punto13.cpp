///Ejercicio:
///Autor: DEK
///Fecha:
///Comentario:

# include<iostream>
# include<cstdlib>

using namespace std;


int main(){
     int a, r1000, b1000, r500, b500, r200, b200, b100;

     cout<<"Ingre cantidad monetaria a retirar: ";
     cin>>a;
     r1000 = a%1000;
     b1000 = (a-r1000)/1000;
     cout<<b1000<<" billetes de mil"<<endl;
     r500 = r1000%500;
     b500 = (r1000-r500)/500;
     cout<<b500<<" billetes de quinientos"<<endl;
     r200 = r500&200;
     b200 = (r500-r200)/200;
     cout<<b200<<" billetes de doscientos"<<endl;
     b100 = r200/100;
     cout<<b100<<" billetes de cien"<<endl;

     system("pause");
     return 0;
}
