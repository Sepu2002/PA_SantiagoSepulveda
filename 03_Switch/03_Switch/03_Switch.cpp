// 03_Switch.cpp : This file contains the 'main' function. Program execution begins and ends there.
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
	int cuenta = 0;
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
void conversiones() {
	int salir = 1;
	int selec;
	double input=0;
	double output=0;
	do {
		cout << "Selecione una opción: \n";
		cout << "1. Convertir de Metros a Yardas\n";
		cout << "2. Convertir de Kelvin a Rankine\n";
		cout << "3. Convertir de Kilogramos a Libras\n";
		cout << "4. Convertir de Horas a segundos\n";
		cout << "5- Salir\n";
		cin >> selec;

		switch (selec)
		{
		case 1:
			cout << "1. Convertir de Metros a Yardas\n";
			cout << "Ingrese el valor en Metros a convertir:\n";
			cin >> input;
			output = input * 1.094;
			cout << "Equivale a: ";
			cout << output;
			cout << " Yardas\n";
			break;
		case 2:
			cout << "2. Convertir de Kelvin a Rankine\n";
			cout << "Ingrese el valor en Kelvin a convertir:\n";
			cin >> input;
			output = input * (9/5);
			cout << "Equivale a: ";
			cout << output;
			cout << " Rankine\n";
			break;
		case 3:
			cout << "3. Convertir de Kilogramos a Libras\n";
			cout << "Ingrese el valor en Kilogramos a convertir:\n";
			cin >> input;
			output = input * 2.2046;
			cout << "Equivale a: ";
			cout << output;
			cout << " Libras\n";
			break;
		case 4:
			cout << "4. Convertir de Horas a Segundos\n";
			cout << "Ingrese el valor en Horas a convertir:\n";
			cin >> input;
			output = input * 3600 ;
			cout << "Equivale a: ";
			cout << output;
			cout << " Segundos\n";
			break;
		case 5:
			salir++;
			break;
		default:
			break;
		}


	} while (salir==1);

}
void agenda() {
	int salir = 1;
	int selec;
	int fecha;
	int hora;
	do {
		cout << "Seleccione una opción para agendar su cita: ";
		cout << "1. General\n";
		cout << "2.Dentista\n";
		cout << "3. Oftalmólogo\n";
		cout << "4. Otorrinolaringólogo\n";
		cout << "5. Salir\n";

		cin >> selec;

		switch (selec)
		{
		case 1:
			cout << "Ingrese un dían\n";
			cin << fecha;
			cout << "Ingrese una hora\n";
			cin << hora;
			cout <<"Ha sido agendada con la médico Virginia Landeros\n";
			break;
		case 2:
			cout << "Ingrese un dían\n";
			cin << fecha;
			cout << "Ingrese una hora\n";
			cin << hora;
			cout << "Ha sido agendada con la medico Fernanda Iruretagoyena\n";
			break;
		case 3:
			cout << "Ingrese un dían\n";
			cin << fecha;
			cout << "Ingrese una hora\n";
			cin << hora;
			cout << "Ha sido agendada con el médico Ramiro Sepúlveda\n";
			break;
		case 4:
			cout << "Ingrese un dían\n";
			cin << fecha;
			cout << "Ingrese una hora\n";
			cin << hora;
			cout << "Ha sido agendada con el médico Victor Reinoso\n";
			break;
		case 5:
			salir++;
			break;
		default:
			break;
		}

	} while (salir == 1);
}




int main()
{
	setlocale(LC_ALL, "");
	//Descomente el programa que desea correr
	//operaciones();
	//restaurante();
	conversiones();
	//agenda();

}


