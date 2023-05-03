///Ejercicio:
///Autor: DEK
///Fecha:
///Comentario:

# include<iostream>
# include<cstdlib>

using namespace std;


int main(){
     int a, b, c, d;

     cout<<"Ingrese nota de los examenes: ";
     cin>>a;
     cin>>b;
     cin>>c;
     cin>>d;
     if(a>7 && b>7 && c>7 && d>7){
        cout<<"Promociona"<<endl;
     }
        if(a>4 || b>4 || c>4 || d>4){
        cout<<"recupera parciales"<<endl;
        }
        else{
             if (a>4){
            }
            else{
        cout<<"Rinde examen final"<<endl;
     }
            if(b>4){
            }
            else{
        cout<<"Rinde examen final"<<endl;
     }
                    if(c>4){
                    }
                    else{
                        cout<<"Rinde examen final"<<endl;
                    }
                            if(d>4){
                            }
     else{
        cout<<"Rinde examen final"<<endl;
     }

        }

     system("pause");
     return 0;
}
