
#include <iostream>
using namespace std;



void detdig(int num) {

    if (num > 99 && num < 1000 ) {
        cout << "El numero tiene 3 digitos\n";
    }
    else if (num < -99 && num > -1000) {
        cout << "El numero tiene 3 digitos\n";
    }
    else {
        cout << "El numero no tiene 3 digitos\n";
    }
}

void detsign(int num) {
    
    if (num > 0) {
        cout << "El numero es positivo\n";
    }
    else if (num==0) {
        cout << "El numero es cero\n";
    }
    else {
        cout << "El numero es negativo\n";
    }

}

void sumdig(int num) {
    if (num > 9 && num < 100) {
        int numdec = num / 10;
        int numuni = num % 10;

        int sumnum = numdec + numuni;

        cout << "La suma de sus digitos es: ";
        cout << sumnum;
        cout << "\n";
    }
    else if (num < -9 && num > -100) {
        int numdec = num / 10;
        int numuni = num % 10;

        int sumnum = numdec + numuni;

        cout << "La suma absoluta de sus digitos es: ";
        cout << abs(sumnum);
        cout << "\n";
    }
    else {
        cout << "Esta funcion solo suma numeros con 2 digitos\n";
    }

}

int main()
{
    int num;
    cout << "Escriba un numero para ver su informacion: \n";
    cin >> num;
    detdig(num);
    detsign(num);
    sumdig(num);

}


