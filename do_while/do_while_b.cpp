#include <iostream>
#include <stdlib.h>
using namespace std;
//Realice un programa que solicite la entrada estarde de un numero entero del 1 al 10 y muestre en la salida estandar su tabla de multiplicar
int main(int argc, char** argv) {
	int i, n, tabla;
	i=1;
		cout<<"Ingrese un numero del 1 al 10 "<<endl;
		cin>>n;
	do{
		tabla=n*i;
		cout<<n<<" x "<<i<<" = "<<tabla<<endl;
		i++;
	}while(i<=10);

	return 0;
}
