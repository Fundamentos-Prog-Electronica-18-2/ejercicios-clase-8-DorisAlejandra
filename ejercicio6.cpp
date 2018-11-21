#include <iostream>

using namespace std;

int main()
{
    cout << "ejercicio de switch" << endl;
    int a,b,c,suma,multiplicacion;
    int opcion;
    cout << "ingrese tres valores ";
    cin>>a;
	cin >>b;
	cin>>c;
    cout << "ingrese una opcion:"<<endl;
    cin >> opcion;

    switch(opcion){
        case 1:
        	suma= a+b+c;
        	cout << "la suma es:"<< suma<<endl;
            break;
        case 2:
            multiplicacion= a*b*c;
            cout<< "la multiplicacion es:"<< multiplicacion<<endl;
            break;

        default:
            cout << "No hay resultados  ..." << endl;
            cout << "... ingrese una opcion entre ..." << endl;
            cout << "1 y 2" << endl;
    }
    return 0;
}
