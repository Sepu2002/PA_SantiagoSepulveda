// 02_DoWhile.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <locale.h>
using namespace std;


void operaciones() {
	double numa;
	double numb;

	int salir = 1;
	int opcion;
	cout << "Escriba el 1er número: ";
	cin >> numa;
	cout << "\n";
	cout << "Escriba el 2o número: ";
	cin >> numb;
	do {
		cout << "Eliga una opción: \n";
		cout << "1. Sumar\n";
		cout << "2. Restar\n";
		cout << "3. Multiplicar\n";
		cout << "4. Dividir\n";
		cout << "5. Salir\n";
		cin >> opcion;

		switch (opcion)
		{
		case 1:
			cout << numa + numb;
			cout << "\n";
			break;
		case 2:
			cout << numa - numb;
			cout << "\n";
			break;
		case 3:
			cout << numa * numb;
			cout << "\n";
			break;
		case 4:
			cout << numa / numb;
			cout << "\n";
			break;
		case 5:
			salir++;
			break;
		default:
			break;
		}


	
	} while (salir == 1);
}

void restaurante() {
	int salir = 1;
	int cuenta=0;
	int opcion;
	int selec;
	
	do {
		int regresar = 1;
		cout << "Seleccione una opción:\n";
		cout << "1. Entradas\n";
		cout << "2. Platos Fuertes\n";
		cout << "3. Bebidas\n";
		cout << "4. Pedir cuenta\n";
		cin >> opcion;

		switch (opcion)
		{
		case 1:
			do {

				cout << "Seleccione una opción:\n";
				cout << "1. Calamari $55\n";
				cout << "2. Palos de queso $30\n";
				cout << "3. Dip de alcachofa $35\n";
				cout << "4. Regresar\n";
				cin >> selec;

				switch (selec)
				{
				case 1:
					cuenta = cuenta + 55;
					cout << "Agregado!\n";
					break;
				case 2:
					cuenta = cuenta + 30;
					cout << "Agregado!\n";
					break;
				case 3:
					cuenta = cuenta + 35;
					cout << "Agregado!\n";
					break;
				case 4:
					regresar++;
					break;
				default:
					break;
				}

			} while (regresar == 1);
			break;
		case 2:
			do {

				cout << "Seleccione una opción:\n";
				cout << "1. Ribeye $150\n";
				cout << "2. Tilapia $100\n";
				cout << "3. Flautas $70\n";
				cout << "4. Regresar\n";
				cin >> selec;

				switch (selec)
				{
				case 1:
					cuenta = cuenta + 150;
					cout << "Agregado!\n";
					break;
				case 2:
					cuenta = cuenta + 100;
					cout << "Agregado!\n";
					break;
				case 3:
					cuenta = cuenta + 70;
					cout << "Agregado!\n";
					break;
				case 4:
					regresar++;
					break;
				default:
					break;
				}

			} while (regresar == 1);
			break;
		case 3:
			do {

				cout << "Seleccione una opción:\n";
				cout << "1. Refresco $21\n";
				cout << "2. Michelada $50\n";
				cout << "3. Limonada $20\n";
				cout << "4. Regresar\n";
				cin >> selec;

				switch (selec)
				{
				case 1:
					cuenta = cuenta + 21;
					cout << "Agregado!\n";
					break;
				case 2:
					cuenta = cuenta + 50;
					cout << "Agregado!\n";
					break;
				case 3:
					cuenta = cuenta + 20;
					cout << "Agregado!\n";
					break;
				case 4:
					regresar++;
					break;
				default:
					break;
				}

			} while (regresar == 1);
			break;
		case 4:
			salir++;
			break;
		default:
			break;
		}

	} while (salir == 1);
	cout << "Su cuenta es de : $";
	cout << cuenta;
}

void factorial() {
	int num;
	
	cout << "Escriba un número para obtener su factorial: \n";
	cin >> num;
	int contador = num-1;
	long long resul = num;
	do {
		resul = resul * contador;

		contador--;
	} while (contador > 1);
	cout << resul;
	
}

int main()
{
	setlocale(LC_ALL, "");
	//descomente el programa que desee correr
	//operaciones();
	//restaurante();
	//factorial();
}


