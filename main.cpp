#include <iostream>
#include <string>
using namespace std;
int main(){
	string  nombre;
	int edad;
	cout<< "Ingerese su nombre:"<<endl;
	cin>> nombre;
	cout << "ingrese su edad:"<<endl;
	cin>> edad;
	if(edad<10){
		cout<<nombre;
		cout<<edad;
		cout<< "pertenece al Basica"
	}
	if (edad>=10&&edad<14){
		cout<< nombre<<endl;
		cout<<"tiene"<< edad<<endl;
		cout<< "Pertenece al Basica Superior "<<endl;
	}else{
		if(edad>=14&&edad<=17){
		cout<<nombre,"tiene "<< "tiene "<<edad<<"edad";
	}
		
		
	}
	
	
}
