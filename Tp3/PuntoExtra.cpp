///Ejercicio:
///Autor: DEK
///Fecha:
///Comentario:

# include<iostream>
# include<cstdlib>

using namespace std;


int main(){
     int nroAfi, edad, sexo, maxTemp, maxafi, acumulador, contafi=0, contF=0;
     float temp, fiebre=0, hipo=0, normal=0, acu=0;

     cout<<"Ingrese numero de afiliado: ";
     cin>>nroAfi;
     while(nroAfi!=0){
        cout<<"Ingrese la edad: ";
        cin>>edad;
        cout<<"Ingrese la temperatura: ";
        cin>>temp;
        if(temp>37.5){
            fiebre++;}
            else if(temp<35){
                hipo++;}
                else{
                    normal++;}
        cout<<"Ingrese genero (1: Masculino/ 2: Femenino/ 3: Otro): ";
        cin>>sexo;
        switch(sexo){
            case 1: if(temp>maxTemp);{
            maxafi=nroAfi;
            maxTemp=temp;};break;
            case 2: contF++;break;
            default: ;break;}
            if(sexo==2){
            acumulador=acumulador+edad;}
            acu=(float)acumulador/contF;
        cout<<"Ingrese numero de afiliado: ";
        cin>>nroAfi;
        contafi++;
        }

        cout<<"El numero de afiliado es "<<maxafi<<" y la temperatura maxima es "<<maxTemp<<endl;
        if(contF>0){
            cout<<"El promedio de la edad de las mujeres es: "<<acu<<endl;}
            else{
                cout<<"NO HAY MUJERES!!!";
                }
            cout<<"El porcentaje es: "<<(hipo/contafi)*100<<"% Hipotermia, "<<(fiebre/contafi)*100<<"% Fiebre y "<<(normal/contafi)*100<<"% Normal"<<endl;
     system("pause");
     return 0;
}
