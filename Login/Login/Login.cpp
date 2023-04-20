// Login.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <string.h>
using namespace std;


int main()
{
    string user = "sepu2002", pass = "Chocoaventura";
    string usuario, clave;
    cout << "Ingrese su usuario: ";
    getline(cin, usuario);
    cout << "Ingrese su contraseña: ";
    cin >> clave;
    if (user == usuario){ 
        if (pass == clave) {
            cout << "Bienvenido wapo" << endl;
        }
        else {
            cout << "Tu contraseña es incorrecta" << endl;
        }

    }
    else {
        cout << "Tu usuario es incorrecto" << endl;
    
    }
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
