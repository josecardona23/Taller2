#include <iostream>
#include <stdlib.h>
using namespace std;
/*Hacer un programa que simule un cajero automatico con un saldo inicial de $1.000.000 que permita ingresar dinero a la cuenta, sretirar dinero de la
cuenta, si cuenta con fondos imprimir el saldo en pantalla. */

int main(int argc, char** argv) {
	int dineroIngresado, dineroRetirado, opcion, saldo=1000000;
	cout<<"Bienvenido al cajero automatico"<<endl<<endl;
	cout<<"El saldo actual del cajero es: "<<saldo<<endl;
	cout<<"Presione el numero '1' si desea ingresar dinero a la cuenta" <<endl; 
	cout<<"Presione el numero '2' si desea retirar dinero de la cuenta"<<endl;
		cin>>opcion;
		switch (opcion){
			case 1: cout<<"¿Cuanto dinero desea ingresar?"<<endl;
						cin>>dineroIngresado;
						saldo=saldo+dineroIngresado;
						cout<<"El saldo de su cuenta es: "<<saldo; break;
			case 2: cout<<"¿Cuanto dinero desea retirar?"<<endl;
						cin>>dineroRetirado;
						if(dineroRetirado<=saldo){
							saldo=saldo-dineroRetirado;
							cout<<"El saldo de su cuenta es: "<<saldo<<endl;
						}else{
							cout<<"Cuenta sin fondos"<<endl;break;
						}
		}


	return 0;
}
