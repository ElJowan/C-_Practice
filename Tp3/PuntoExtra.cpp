///Ejercicio:
///Autor: DEK
///Fecha:
///Comentario:

# include<iostream>
# include<cstdlib>

using namespace std;


int main(){
     int nroAfi, edad, genero, maxTemp, Masculino, Femenino, Otros, maxTempF, contM=0, contF=0, contO=0;
     float temp, promEdadF, porcPacientesHipo, porcPacientesNormal, porcPacientesFiebre;

     cout<<"Ingrese numero de afiliado: ";
     cin>>nroAfi;
     maxTemp=0;
     while(nroAfi!=0){
        cout<<"Ingrese la edad: ";
        cin>>edad;
        cout<<"Ingrese la temperatura: ";
        cin>>temp;
        cout<<"Ingrese genero (1: Masculino/ 2: Femenino/ 3: Otro): ";
        cin>>genero;
        switch(genero){
            case 1: contM++;break;
            case 2: contF++;break;
            default: contO++;break;
        }
        cout<<"Ingrese numero de afiliado: ";
        cin>>nroAfi;
        }
        cout<<
     system("pause");
     return 0;
}
