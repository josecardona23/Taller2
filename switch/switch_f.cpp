#include <iostream>
#include <stdlib.h>
using namespace std;
/* Hacer un menú que considere las siguientes opciones:
	caso 1: Cubo de un numero.
	caso 2: Número par o impar.
	caso 3: salir
 */

int main(int argc, char** argv) {
	int opcion, n, final;
	cout<<"En este menu tendra 3 opciones "<<endl;
	cout<<"1. Cubo de un numero"<<endl;
	cout<<"2. Numero par o impar"<<endl;
	cout<<"3. SALIR"<<endl;
	cin>>opcion;
	switch(opcion){
		case 1: cout<<"Ingrese un numero ";
					cin>>n;
					final= n*n*n;
					cout<<"El cubo de "<<n<<" es: "<<final<<endl;break;
		case 2: int n;
				cout<<"Ingrese un numero"<<endl;
					cin>>n;
					if (n % 2 == 0){
					cout<<"El numero es par"<<endl;
					}else{
				cout<<"El numero es impar"<<endl;
						}	;break;
		case 3: cout<<"Fin";break;
					
		

	return 0;
	}
}
