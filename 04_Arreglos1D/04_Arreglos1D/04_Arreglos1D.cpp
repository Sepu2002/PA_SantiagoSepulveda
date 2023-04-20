// 04_Arreglos1D.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <iostream>
#include <locale.h>
#include <cstdlib> 
using namespace std;

void maxminsumprom() {
    int nums[10];
    int max;
    int min;
    double suma=0;
    double prom;
    for (int i = 0; i <= 9; i++) {
        cout << "Escriba un número\n";
        cin >> nums[i];
    }
    if (nums[0] > nums[1]) {
        max = nums[0];
        min = nums[1];
    }
    else {
        max = nums[1];
        min = nums[0];
    }

    for (int j = 2; j <= 9; j++) {
        if (nums[j] > max) {
            max = nums[j];
        }
        else if (nums[j] < min) {
            min = nums[j];
        }
        else {
            max = max;
            min = min;
        }
    }

    for (int x = 0; x <= 9; x++) {
        suma = suma + nums[x];
    }

    prom = suma / 10;

    cout << "El mayor es: ";
    cout << max;
    cout << "\n";
    cout << "El menor es: ";
    cout << min;
    cout << "\n";
    cout << "La suma es: ";
    cout << suma;
    cout << "\n";
    cout << "El promedio es: ";
    cout << prom;
    cout << "\n";




}
void sumvector() {
    int a[10];
    int b[10];
    int sum[10];
    for (int i = 0; i <= 9; i++) {
        cout << "Escriba un número para el 1er vector\n";
        cin >> a[i];
    }
    for (int j = 0; j <= 9; j++) {
        cout << "Escriba un número para el 2o vector\n";
        cin >> b[j];
    }
    for (int k = 0; k <= 9; k++) {
        sum[k] = a[k] + b[k];
    }
    cout << "Las sumas de los elementos de las 2 listas son: ";
    for (int x = 0; x <= 9; x++) {
        cout << sum[x];
        cout << "\n";
    }

}
void randvector() {
    
    int nums[100];
    int size = sizeof(nums) / sizeof(nums[0]);
    for (int i = 0; i <= 99; i++) {
        nums[i] = rand();
    }
    for (int i = 0; i <= 99; i++) {
        cout<<nums[i];
        cout << " ";
    }
    cout << "\n";
    for (int i = 0; i < size - 1; i++) {
        for (int j = i + 1; j < size; j++) {
            if (nums[i] > nums[j]) {
                int temp = nums[i];
                nums[i] = nums[j];
                nums[j] = temp;
            }
        }
    }
    for (int i = 0; i <= 99; i++) {
        cout << nums[i];
        cout << " ";
    }
}
void salarios() {
    string trabajadores[5] = { "José Hernandez", "Martina Iruretagoyena", "Alejandro Morfín", "Ricardo Reyes","Jose Antonio Ramírez" };
    int horas[5] = {4,5,7,2,4};
    int salario[5] = {30,35,40,25,25};

    for (int i = 0; i <= 4; i++) {
        cout << "Nombre: ";
        cout << trabajadores[i] << endl;
        cout << "Horas: ";
        cout << horas[i] << endl;
        cout << "Salario: ";
        cout << salario[i] << endl;
        cout << "Paga correspondiente: ";
        cout << (horas[i] * salario[i]) << endl;
        cout << endl;
    }
}
void chescos() {
    string nombre[5] = { "Coca Cola","Sprite", "Mtn Dew", "Mello Yellow", "Dr. Pepper" };
    int cantidad[5] = { 3,5,2,1,0 };
    int salir = 1;
    do {
        int selec;
        cout << "Seleccione una opción para comprar: " << endl;
        cout << "1. Coca Cola" << endl;
        cout << "2. Sprite" << endl;
        cout << "3. Mtn Dew" << endl;
        cout << "4. Mello Yellow" << endl;
        cout << "5. Dr. Pepper" << endl;
        cout << "6. Salir" << endl;
        cin >> selec;

        switch (selec)
        {
        case 1:
            int comp;
            cout << nombre[0] << endl;
            cout << "Inventario actual: ";
            cout << cantidad[0] << endl;
            cout << "Escriba 1 para comprar o 0 para regresar" << endl;
            cin >> comp;

            if (comp == 1) {
                if (cantidad[0] > 0) {
                    cout << "Compra exitosa" << endl;
                    cantidad[0]--;
                    break;
                }
            }
            else {
                cout << "Compra fallida, ya no hay inventario" << endl;
                break;
            }
        case 2:
            int comp;
            cout << nombre[1] << endl;
            cout << "Inventario actual: ";
            cout << cantidad[1] << endl;
            cout << "Escriba 1 para comprar o 0 para regresar" << endl;
            cin >> comp;

            if (comp == 1) {
                if (cantidad[1] > 0) {
                    cout << "Compra exitosa" << endl;
                    cantidad[1]--;
                    break;
                }
            }
            else {
                cout << "Compra fallida, ya no hay inventario" << endl;
                break;
            }

        case 3:
            int comp;
            cout << nombre[2] << endl;
            cout << "Inventario actual: ";
            cout << cantidad[2] << endl;
            cout << "Escriba 1 para comprar o 0 para regresar" << endl;
            cin >> comp;

            if (comp == 1) {
                if (cantidad[2] > 0) {
                    cout << "Compra exitosa" << endl;
                    cantidad[2]--;
                    break;
                }
            }
            else {
                cout << "Compra fallida, ya no hay inventario" << endl;
                break;
            }

        case 4:
            int comp;
            cout << nombre[3] << endl;
            cout << "Inventario actual: ";
            cout << cantidad[3] << endl;
            cout << "Escriba 1 para comprar o 0 para regresar" << endl;
            cin >> comp;

            if (comp == 1) {
                if (cantidad[3] > 0) {
                    cout << "Compra exitosa" << endl;
                    cantidad[3]--;
                    break;
                }
            }
            else {
                cout << "Compra fallida, ya no hay inventario" << endl;
                break;
            }

        case 5:
            int comp;
            cout << nombre[4] << endl;
            cout << "Inventario actual: ";
            cout << cantidad[4] << endl;
            cout << "Escriba 1 para comprar o 0 para regresar" << endl;
            cin >> comp;

            if (comp == 1) {
                if (cantidad[4] > 0) {
                    cout << "Compra exitosa" << endl;
                    cantidad[4]--;
                    break;
                }
            }
            else {
                cout << "Compra fallida, ya no hay inventario" << endl;
                break;
            }

        case 6:
            salir++;
            break;
        default:
            break;
        }

    } while (salir==1);
}

int main()
{
    setlocale(LC_ALL, "");
    //Descomente una función para correrla

    maxminsumprom();
    //sumvector();
    //randvector();
    //salarios();
    //chescos();
}


