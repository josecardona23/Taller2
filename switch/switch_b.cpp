#include <iostream>
#include <stdlib.h>
using namespace std;

/* Escriba un programa que lea la entrada estandar de un caracter e indique en la salida estandar si el caracter es una vocal minuscula,
vocal mayuscula o no es una vocal*/

int main(int argc, char** argv) {
	char l;
	cout<<"Ingrese un caracter ---> ";
	cin>>l;
	
	switch (l){
		case 'a':
		case 'e':
		case 'i':
		case 'o':
		case 'u': cout<<"La vocal es minuscula";break;
		case 'A':
		case 'E':
		case 'I':
		case 'O':
		case 'U': cout<<"La vocal es mayuscula";break;
		default: cout<<"El caracter ingresado no es un vocal";
	}

	return 0;
}
