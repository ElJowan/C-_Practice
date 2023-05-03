///Ejercicio:
///Autor: DEK
///Fecha:
///Comentario:

# include<iostream>
# include<cstdlib>

using namespace std;


int main(){

    int asientos_disponibles, pasajes_ocupados;
    float porcentaje_ocupacion, porcentaje_no_ocupacion;

    cout << "Ingrese la cantidad de asientos disponibles: ";
    cin >> asientos_disponibles;

    cout << "Ingrese la cantidad de pasajes ocupados: ";
    cin >> pasajes_ocupados;

    porcentaje_ocupacion = (pasajes_ocupados * 100.0) / asientos_disponibles;
    porcentaje_no_ocupacion = 100.0 - porcentaje_ocupacion;

    cout << "Porcentaje de ocupacion: " << porcentaje_ocupacion << "%" << endl;
    cout << "Porcentaje de no ocupacion: " << porcentaje_no_ocupacion << "%" << endl;

     system("pause");
     return 0;
}

