// 06_Cadenas.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#pragma warning(disable : 4996) //_CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
#include <locale.h>
#include <cstdlib> 

using namespace std;

void test() {
    string cad1 = "Esta es una cadena";
    cout << cad1 << endl;

    string cad2 = cad1.substr(12);
    cout << cad2 << endl;

    string cad3 = cad1.substr(0, 4);
    cout << cad3 << endl;
}
void test2() {
    char completo[80];

    char nombre[32] = "Pedro";
    char apellidos[32] = "Medario Arenas";

    strcpy(completo, nombre);
    strcat(completo, " ");
    strcat(completo, apellidos);

    printf("El nombre completo es %s\n", completo);

}

void charrepe() {
    char repes[32][2];
    char frase[32] = "Esta es la frase.";

}

int main()
{
    setlocale(LC_ALL, "");
    //test();
    //test2();
    
}


