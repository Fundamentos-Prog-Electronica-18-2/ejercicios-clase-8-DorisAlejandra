#include <iostream>

using namespace std;

int main()
{
	int numero,limite,opcion,contador=0,suma,multiplicacion;
	cout<< "ingrese el numero";
	cin>>numero;
	cout << "Ingrese el limite";
	cin>> limite;
	cout<< "ingrse una opcion";
	cin >> opcion;
	if(opcion==1){
		while(contador<=limite){
			multiplicacion=numero *contador;
			cout<< numero <<"* " << contador<<"=  " << multiplicacion<< endl;
			contador=contador+1;
			
		}
	}else{
		if(opcion==2){
			while(contador<=limite){
			suma=numero +contador;
			cout<<numero <<"+ " << contador <<"=  " << suma<< endl;
			contador=contador+1;
		}
	}else{
		cout << "opcion incorrecta";
	}

}
    return 0;
}

