

#include <iostream>
using namespace std;

int main()
{
    int horas;
    int paga;
    cout << "Eescriba el numero de horas que se trabajaron\n";
    cin >> horas;

    if (horas <= 40) {
        paga = horas * 20;
    }
    else {
        paga = ((horas - 40) * 25) + 800;
    }

    cout << "Le correponden $";
    cout << paga;
    cout << " de remuneracion";
}


