///Autor: DEK
///Fecha:
///Comentario:

# include<iostream>
# include<cstdlib>

using namespace std;


int main(){
     int num1, num2;
     cout<<"Ingrese un numero : ";
     cin>>num1;
     cout<<"Ingrese un numero : ";
     cin>>num2;
     if((num1%num2)==0){
        cout<<"Es multiplo"<<endl;
}
     else{
        cout<<"NO es"<<endl;
}

     system("pause");
     return 0;
}
