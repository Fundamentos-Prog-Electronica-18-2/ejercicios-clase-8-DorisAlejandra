#include <iostream>

using namespace std;

int main()
{
    cout << "Ejemplo de switch" << endl;
    int dia_semana = 0;
    cout << "Ingres el d�a de la semana" << endl;
    cin >> dia_semana;

    switch(dia_semana){
        case 1:
            cout << "Su d�a es Lunes" << endl;
            break;
        case 2:
            cout << "Su d�a es Martes" << endl;
            break;
        case 3:
            cout << "Su d�a es Mi�rcoles" << endl;
            break;

        default:
            cout << "No hay d�a que mostrar ..." << endl;
            cout << "... ingrese un valor entre ..." << endl;
            cout << "1 y 7" << endl;
    }
    return 0;
}
