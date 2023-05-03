///Autor: DEK
///Fecha:
///Comentario:

# include<iostream>
# include<cstdlib>

using namespace std;


int main(){
     int num1;
     cout<<"Ingrese un numero : ";
     cin>>num1;
     if (num1>0){
            cout<<"Es positivo"<<endl;
     }
     if (num1<0){
            cout<<"Es negativo"<<endl;
     }
     if (num1==0){
            cout<<"Es cero"<<endl;
     }

     system("pause");
     return 0;
}

