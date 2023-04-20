

#include <iostream>
#include <string>
using namespace std;



void print1_100() {
    int num = 1;
    while (num <= 100) {
        cout << num;
        cout << "\n";
        num++;
            
    }

}

void print1_100mult3() {
    int num = 1;
    while (num <= 100) {
        if (num % 3 == 0) {
            cout << num;
            cout << "\n";
            num++;
        }
        else {
            num++;
        }
        

    }

}

void notas_alumn() {
   
    int calif;
    int califsum = 0;
    int contador=0;
    double prom;
    int valid=1;

    while (valid == 1) {
        cout << "Ingrese la nota obtenida\n";
        cin >> calif;
        califsum = califsum + calif;
        contador++;
        cout << "Desea ingresar otra nota?\n";
        cout << "1(Si) o 2(No)\n";
        cin >> valid;
        valid = valid;
        
     }

    prom = califsum / contador;

    cout << "Obtuvo un promedio de: ";
    cout << prom;
}

void factorial() {
    int num;
  
    cout << "Ingrese un numero para conocer su factorial";
    cin >> num;
    long long resul=num;
    while (num > 1) {
        resul = resul * (num - 1);
        num--;

    }
    cout << "El resultado es: ";
    cout << resul;

}

void max_min() {

    int num;
    int numa;
    int numb;
    
    int contador = 0;
    double prom;
    int valid = 1;
    int mayor;
    int menor;
    

    cout << "Ingrese un num\n";
    cin >> numa;
    cout << "Ingrese un num\n";
    cin >> numb;

    int numsum = numa+numb;

    if (numa > numb) {
        mayor = numa;
        menor = numb;
    }
    else {
        mayor = numb;
        menor = numa;
    }


    while (valid == 1) {
        cout << "Ingrese un num\n";
        cin >> num;
        numsum = numsum + num;

        if (num > mayor) {
            mayor = num;
        }
        else if (num < menor) {
            menor = num;
        }
        else {
            mayor = mayor;
            menor = menor;
        }
        contador++;
        cout << "Desea ingresar otro num?\n";
        cout << "1(Si) o 2(No)\n";
        cin >> valid;
        valid = valid;

    }

    prom = numsum / (contador+2);

    cout << "Obtuvo un promedio de: ";
    cout << prom;
    cout << "\n";

    cout << "En num mayor es: ";
    cout << mayor;
    cout << "\n";

    cout << "El num menor es: ";
    cout << menor;
    cout << "\n";
    

}

int main()
{
    //Descomente la funcíón que desea correr
    
    //print1_100();
    //print1_100mult3();
    //notas_alumn();
    //factorial();
    //max_min();

}


