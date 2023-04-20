// Estructuras.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<string>

using namespace std;

struct persona {
    string nombre;
    int edad;
    double calificaciones[3];
};

int main()
{
    //persona estudiante;
    //cout << "Ingresa el nombre: ";
    //getline(cin, estudiante.nombre);
    //cout << "Ingresa el nombre: ";
    //cin >> estudiante.edad;
    persona estudiantes[3];
    for (int i = 0; i < 3; i++) {
        cout << "Ingrese el nombre del estudiante " << i + 1 << ": ";
        cin.ignore();
        getline(cin, estudiantes[i].nombre); 
        cout << "Ingrese la edad: ";
        cin>> estudiantes[i].edad;
        for (int j = 0; j < 3; j++) {
            cout << "Ingresa la calificación " << j + 1 << ": ";
            cin >> estudiantes[i].calificaciones[j];
        }
    }
}

