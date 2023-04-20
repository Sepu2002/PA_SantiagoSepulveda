// 02_For.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <locale.h>
using namespace std;

void unoacien() {
    for (int i = 1; i <= 100; i++) {
        cout << i;
        cout << "\n";
    }
}

void unoamilpar() {
    for (int i = 1; i <= 1000; i++) {
        if (i % 2 == 0) {
            cout << i;
            cout << "\n";

        }
        else {
        }
        
    }
}

void sumaparimpar() {
    long sumpar = 0;
    long sumimp = 0;
    for (int i=1; i <= 1000; i++) {
        if (i % 2 == 0) {
            sumpar = sumpar + i;
        }
        else {
            sumimp = sumimp + i;

        }
    }
    cout << "La suma de pares es: ";
    cout << sumpar;
    cout << "\n";

    cout << "La suma de impares es: ";
    cout << sumimp;
    cout << "\n";

}

void factorial() {
    int num;
    
    cout << "Escriba un número para obtener si factorial: \n";
    cin >> num;
    int resul = num;
    for (int i = num - 1; i >= 1; i--) {
        resul = resul * i;
    }
    cout << resul;

}

void fibonacci() {
    int n;
    cout << "Escriba la iteración de Fibbonacci que desea consultar: ";
    cin >> n;
    if (n <= 1) {
        cout<< n;
    }
    long long fib = 1;
    long long antFib = 1;

    for (int i = 2; i < n; i++) {
        long long temp = fib;
        fib += antFib;
        antFib = temp;
    }
    cout << fib;
}

void cienauno() {
    for (int i = 100; i >= 1; i--) {
        cout << i;
        cout << "\n";
        
    }
}

void sumapotencias() {
    int n;
    long suma=0;
    cout << "Escriba el numero de iteraciones para la suma de potenicas de 2: ";
    cin >> n;
    for (int i = 1; i <= n; i++) {
        suma = suma + pow(2, i);

    }
    cout << suma;
}

int main()
{
    setlocale(LC_ALL, "");
    //Descomente el programa que desea correr
    //unoacien();
    //unoamilpar();
    //sumaparimpar();
    //factorial();
    //fibonacci();
    //cienauno();
    sumapotencias();

}

