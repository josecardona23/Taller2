#include <iostream>
#include <stdlib.h>
using namespace std;
//switch a) Escriba un programa que lea la entrada estandar de un caracter e indique en la salida estandar si es una vocal minuscula o no.
int main(int argc, char** argv) {
	char l;
	cout<<"ingrese un caracter ---> ";
	cin>>l;
	switch (l){
		case 'a':
		case 'e':
		case 'i':
		case 'o':
		case 'u': cout<<"La vocal es minuscula";break;
		default: cout<<"La vocal no es minuscula";
	}

	return 0;
}
