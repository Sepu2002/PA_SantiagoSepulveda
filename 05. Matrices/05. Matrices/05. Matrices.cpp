// 05. Matrices.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cstdlib>
#include <time.h>
#include <stdlib.h>
using namespace std;

void multimatrix() {
	int matrixresul[3][3];
	int matrix1[3][3] = { {1,4,5},{6,9,4},{2,8,1} };
	int matrix2[3][3] = { {7,9,3},{1,8,5},{6,6,7} };
	cout << "Matriz 1:" << endl;
	for (int i = 0; i <= 2; i++) {
		for (int j = 0; j <= 2; j++) {
			cout << matrix1[i][j];
			cout << " ";
		}
		cout << endl;
	}

	cout << endl;
	cout << "Matriz 2:" << endl;
	for (int i = 0; i <= 2; i++) {
		for (int j = 0; j <= 2; j++) {
			cout << matrix2[i][j];
			cout << " ";
		}
		cout << endl;
	}
	cout << endl;

	for (int i = 0; i < 3; ++i) {
		for (int j = 0; j < 3; ++j) {
			int sum = 0;
			for (int k = 0; k < 3; ++k) {
				sum += matrix1[i][k] * matrix2[k][j];
			}
			matrixresul[i][j] = sum;
		}
	}

	cout << endl;
	cout << "Matriz Resultante:" << endl;
	for (int i = 0; i <= 2; i++) {
		for (int j = 0; j <= 2; j++) {
			cout << matrixresul[i][j];
			cout << " ";
		}
		cout << endl;
	}
	cout << endl;



}
void elecciones() {
	int registro[2][3] = { {1,2,3},{0,0,0} };
	int salir = 1;
	do {
		int selec;
		cout << "1. Votar por candidato 1" << endl;
		cout << "2. Votar por candidato 2" << endl;
		cout << "3. Votar por candidato 3" << endl;
		cout << "4. Ver resultados" << endl;
		cin >> selec;

		switch (selec)
		{
		case 1:
			registro[1][0] = registro[1][0] + 1;
			cout << "Voto agregado a candidato 1" << endl;

			break;
		case 2:
			registro[1][1] = registro[1][1] + 1;
			cout << "Voto agregado a candidato 2" << endl;
			break;
		case 3:
			registro[1][2] = registro[1][2] + 1;
			cout << "Voto agregado a candidato 3" << endl;
			break;
		case 4:
			int ganador;
			if (registro[1][0] > registro[1][1]) {
				ganador = registro[0][0];
			}
			else {
				ganador = registro[0][1];
			}
			if (registro[1][ganador] < registro[1][2]) {
				ganador = registro[0][2];
			}
			else {
				ganador = registro[0][ganador];
			}
			cout << "El ganador es: ";
			cout << registro[0][ganador] << endl;
			salir++;
			break;
		default:
			break;
		}

	} while (salir == 1);
}
void torres() {
	srand((unsigned int)time(NULL));
	double sum=0;
	int complejo[7][20][6];
	for (int i = 0; i <= 6; i++) {
		for (int j = 0; j <= 19; j++) {
			for (int k = 0; k <= 5; k++) {
				complejo[i][j][k] = 1 + rand() % (5 - 1);
			}
		}
	}

	for (int i = 0; i <= 6; i++) {
		for (int j = 0; j <= 19; j++) {
			for (int k = 0; k <= 5; k++) {
				sum = sum + complejo[i][j][k];
			}
		}
	}




	cout << "La cantidad total de habitantes es: ";
	cout << sum << endl;

	cout << "El promedio de habitantes por piso es de: ";
	cout << (sum / 7) / 20 << endl;

	cout << "El promedio de habitantes por torre es de: ";
	cout << (sum / 7) << endl;



}
void trabajo() {
	int registro[3][3] = { {1,2,3},{25,35,37},{5,4,7} };

	for (int i = 0; i <= 2; i++) {

		cout << " Empleado: " << registro[0][i] << endl;
		cout << " Paga por hora: " << registro[1][i] << endl;
		cout << " Horas laboradas: " << registro[2][i] << endl;
		cout << "Paga correspondiente: " << (registro[1][i]) * (registro[2][i]) << endl;
		cout << endl;

	}

}
void chescos() {
	int inventario[2][3] = { {1,2,3},{4,7,0} };
	int salir = 1;
	do {
		int selec;
		cout << "Seleccione un referesco" << endl;
		cout << "1. CocaCola" << endl;
		cout << "2. Sprite" << endl;
		cout << "3. Mtn Dew" << endl;
		cout << "4. Salir" << endl;
		cin >> selec;

		switch (selec)
		{
		case 1:
			if (inventario[1][0] > 0) {
				cout << "Venta excitosa: " << endl;
				inventario[1][0]--;
				break;
			}
			else {
				cout << "El producto está agotado: " << endl;
				break;
			}
		case 2:
			if (inventario[1][1] > 0) {
				cout << "Venta excitosa: " << endl;
				inventario[1][1]--;
				break;
			}
			else {
				cout << "El producto está agotado: " << endl;
				break;
			}
		case 3:
			if (inventario[1][2] > 0) {
				cout << "Venta excitosa: " << endl;
				inventario[1][2]--;
				break;
			}
			else {
				cout << "El producto está agotado: " << endl;
				break;
			}
		case 4:
			salir++;
			break;
		default:
			break;
		}



	} while (salir == 1);
}



int main()
{
	//Descomente la función que desea correr
	multimatrix();
	//elecciones();
	//torres();
	//trabajo();
	//chescos();
}


