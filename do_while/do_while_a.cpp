#include <iostream>
#include <stdlib.h>
using namespace std;
/*Realice un programa que lea la entrada estandar de numeros hasta quese introduzca un cero. En ese momento el programa debe terminar y mostrar
 en la salida estandarel numero de valores mayores a 0 */

int main(int argc, char** argv) {
	int i, n;
	i=0;
	do{
		cout<<"Ingrese un numero"<<endl;
		cin>>n;
		i++;
	}while(n!=0);{
	cout<<"La cantidad de numeros mayores a 0 es: "<<i-1<<endl;
	}		

	return 0;
}
