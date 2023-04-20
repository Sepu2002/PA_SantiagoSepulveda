#include <iostream>
#include <string>

using namespace std;

// Structure to represent a book
struct Book {
    string title;
    string author;
    bool state; // true: enabled, false: disabled
};

// Function to add a book to the library
void addBook(Book*& library, int& size) {
    string title, author;
    cin.ignore(); // Clear input buffer
    cout << "Enter title: ";
    getline(cin, title);
    cout << "Enter author: ";
    getline(cin, author);

    // Dynamically allocate memory for a new book
    Book* newBook = new Book;
    newBook->title = title;
    newBook->author = author;
    newBook->state = true; // Set the initial state to enabled

    // Resize the library to accommodate the new book
    Book* resizedLibrary = new Book[size + 1];
    for (int i = 0; i < size; i++) {
        resizedLibrary[i] = library[i];
    }
    resizedLibrary[size] = *newBook;
    size++;

    // Deallocate memory for the old library and update the pointer
    delete[] library;
    library = resizedLibrary;

    cout << "Book added successfully!" << endl;
}

// Function to disable a book in the library
void disableBook(Book* library, int size) {
    string title;
    cin.ignore(); // Clear input buffer
    cout << "Enter title of the book to disable: ";
    getline(cin, title);

    // Find the book in the library
    for (int i = 0; i < size; i++) {
        if (library[i].title == title) {
            if (library[i].state) {
                library[i].state = false; // Set state to disabled
                cout << "Book disabled successfully!" << endl;
                return;
            }
            else {
                cout << "Book is already disabled." << endl;
                return;
            }
        }
    }

    cout << "Book not found in the library." << endl;
}

// Function to enable a book in the library
void enableBook(Book* library, int size) {
    string title;
    cin.ignore(); // Clear input buffer
    cout << "Enter title of the book to enable: ";
    getline(cin, title);

    // Find the book in the library
    for (int i = 0; i < size; i++) {
        if (library[i].title == title) {
            if (!library[i].state) {
                library[i].state = true; // Set state to enabled
                cout << "Book enabled successfully!" << endl;
                return;
            }
            else {
                cout << "Book is already enabled." << endl;
                return;
            }
        }
    }

    cout << "Book not found in the library." << endl;
}

// Function to view the book inventory
void viewInventory(const Book* library, int size) {
    if (size == 0) {
        cout << "Library is empty." << endl;
        return;
    }

    cout << "Book Inventory: " << endl;
    for (int i = 0; i < size; i++) {
        cout << "Title: " << library[i].title << endl;
        cout << "Author: " << library[i].author << endl;
        cout << "State: " << (library[i].state ? "Enabled" : "Disabled") << endl;
        cout << endl;
    }
}


// Function to remove a book from memory
void removeBook(Book* library, int& size) {
    string title;
    cout << "Enter book title to remove: ";
    cin.ignore(); // Ignore any remaining newline character
    getline(cin, title);
    bool bookFound;
    for (int i = 0; i < size; i++) {
        if (title == library[i].title) {
            int pos = i;
            for (int j = i; j < size-1; j++) {
                library[j] = library[j + 1];
            }
            delete[sizeof(library) - sizeof(Book)] library ;
        }
    }
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

int main() {
    int opcion,size = 0;
    Book* library = NULL;
    do
    {
        system("cls");
        menu();
        cin >> opcion;
        switch (opcion)
        {
        case 1:
            system("cls");
            addBook(library, size);
            system("pause");
            break;

        case 2:
            system("cls");
            viewInventory(library,size);
            system("pause");
            break;

        case 3:
            system("cls");
            disableBook(library,size);
            system("pause");
            break;

        case 4:
            system("cls");
            enableBook(library,size);
            system("pause");
            break;

        case 5:
            system("cls");
            removeBook(library,size);
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