#include <iostream>
#include <malloc.h>
#include <string.h>

using namespace std;

struct libro {
	char nombre[200];
	char autor[200];
	bool estado;
};

void menu();
void addLibro(libro*& biblioteca, int& numLibros);
void imprimirLibros(libro* biblioteca, int numLibros);
void prestarLibro(libro*& biblioteca, int numLibros);
void devLibro(libro*& biblioteca, int numLibros);
void eliLibro(libro*& biblioteca, int& numLibros);

int main()
{
	int opcion, numLibros = 0;
	libro* biblioteca = NULL;
	do
	{
		system("cls");
		menu();
		cin >> opcion;
		switch (opcion)
		{
		case 1:
			system("cls");
			addLibro(biblioteca, numLibros);
			system("pause");
			break;

		case 2:
			system("cls");
			imprimirLibros(biblioteca, numLibros);
			system("pause");
			break;

		case 3:
			system("cls");
			prestarLibro(biblioteca, numLibros);
			system("pause");
			break;

		case 4:
			system("cls");
			devLibro(biblioteca, numLibros);
			system("pause");
			break;

		case 5:
			system("cls");
			eliLibro(biblioteca, numLibros);
			system("pause");
			break;

		case 6:
			system("cls");
			cout << "Adios..." << endl;
			system("pause");
			break;

		default:
			cout << "Opcion incorrecta..." << endl;
		}
	} while (opcion != 6);
}

void menu()
{
	cout << "Funciones, memoria dinamica y estructuras" << endl;
	cout << "1. Agregar un libro" << endl;
	cout << "2. Imprimir los libros" << endl;
	cout << "3. Prestar un libro" << endl;
	cout << "4. Devolver un libro" << endl;
	cout << "5. Eliminar un libro" << endl;
	cout << "6. Salir" << endl;
	cout << "Ingrese una opcion: ";
}

void addLibro(libro*& biblioteca, int& numLibros)
{
	biblioteca = (libro*)realloc(biblioteca, (numLibros + 1) * sizeof(libro));
	cout << "Ingrese el nombre del libro: ";
	cin.ignore();
	cin.getline(biblioteca[numLibros].nombre, 200);
	cout << "Ingrese el autor: ";
	cin.getline(biblioteca[numLibros].autor, 200);
	biblioteca[numLibros].estado = true;
	numLibros++;
	cout << "Libro agregado de manera exitosa..." << endl;
}

void imprimirLibros(libro* biblioteca, int numLibros)
{
	cout << "Inventario de libros" << endl;
	for (int i = 0; i < numLibros; i++)
	{
		cout << biblioteca[i].nombre << "\t\t" << biblioteca[i].autor << "\t\t";
		if (biblioteca[i].estado)
		{
			cout << "Disponible" << endl;
		}
		else
		{
			cout << "Prestado" << endl;
		}
	}
}

void prestarLibro(libro*& biblioteca, int numLibros)
{
	char nombre[200];
	bool bandera = false;
	if (numLibros != 0)
	{
		imprimirLibros(biblioteca, numLibros);
		cout << "Ingrese el nombre del libro: ";
		cin.ignore();
		cin.getline(nombre, 200);
		for (int i = 0; i < numLibros; i++)
		{
			if (strcmp(biblioteca[i].nombre, nombre) == 0)
			{
				bandera = true;
				if (biblioteca[i].estado)
				{
					cout << "Se ha solicitado el prestamo de manera exitosa..." << endl;
					biblioteca[i].estado = false;
				}
				else
				{
					cout << "El libro se encuentra prestado..." << endl;
				}
			}
		}
		if (bandera == false)
		{
			cout << "El libro no existe..." << endl;
		}
	}
	else
	{
		cout << "No hay libros..." << endl;
	}
}

void devLibro(libro*& biblioteca, int numLibros)
{
	char nombre[200];
	bool bandera = false;
	if (numLibros != 0)
	{
		imprimirLibros(biblioteca, numLibros);
		cout << "Ingrese el nombre del libro: ";
		cin.ignore();
		cin.getline(nombre, 200);
		for (int i = 0; i < numLibros; i++)
		{
			if (strcmp(biblioteca[i].nombre, nombre) == 0)
			{
				bandera = true;
				if (!biblioteca[i].estado)
				{
					cout << "Se ha devuelto el libro de manera exitosa..." << endl;
					biblioteca[i].estado = true;
				}
				else
				{
					cout << "El libro NO se encuentra prestado..." << endl;
				}
			}
		}
		if (bandera == false)
		{
			cout << "El libro no existe..." << endl;
		}
	}
	else
	{
		cout << "No hay libros..." << endl;
	}
}

void eliLibro(libro*& biblioteca, int& numLibros)
{
	char nombre[200];
	int pos = -1;
	if (numLibros != 0)
	{
		imprimirLibros(biblioteca, numLibros);
		cout << "Ingrese el nombre del libro: ";
		cin.ignore();
		cin.getline(nombre, 200);
		for (int i = 0; i < numLibros; i++)
		{
			if (strcmp(biblioteca[i].nombre, nombre) == 0)
			{
				pos = i;
				break;
			}
		}
		if (pos == -1)
		{
			cout << "El libro no exite..." << endl;
		}
		else
		{
			for (int i = pos; i < numLibros - 1; i++)
			{
				biblioteca[i] = biblioteca[i + 1];
			}
			numLibros--;
			biblioteca = (libro*)realloc(biblioteca, numLibros * sizeof(libro));
			cout << "El libro se elimino de manera exitosa..." << endl;
		}
	}
	else
	{
		cout << "No hay libros..." << endl;
	}
}