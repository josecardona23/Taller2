#include <iostream>
#include <stdlib.h>
using namespace std;
/*Pedir al usuario que ingrese un numero, y retornar la tabla de multiplicar del numero ingresado del 1 al 10*/
int main(int argc, char** argv) {
	int i, n, r1, r2, r3, r4, r5, r6, r7, r8,r9,r10;
	cout <<"Ingrese un valor para saber su tabla de multiplicar"<<endl;
	cin>>n;
	r1 = n * 1;
	r2 = n * 2;
	r3 = n * 3;
	r4 = n * 4;
	r5 = n * 5;
	r6 = n * 6;
	r7 = n * 7;
	r8 = n * 8;
	r9 = n * 9;
	r10 = n * 10;
	cout<<n<<"x"<<1<<" = "<<r1<<endl;;
	cout<<n<<"x"<<2<<" = "<<r2<<endl;
	cout<<n<<"x"<<3<<" = "<<r3<<endl;
	cout<<n<<"x"<<4<<" = "<<r4<<endl;
	cout<<n<<"x"<<5<<" = "<<r5<<endl;
	cout<<n<<"x"<<6<<" = "<<r6<<endl;
	cout<<n<<"x"<<7<<" = "<<r7<<endl;
	cout<<n<<"x"<<8<<" = "<<r8<<endl;
	cout<<n<<"x"<<9<<" = "<<r9<<endl;
	cout<<n<<"x"<<10<<" = "<<r10<<endl;
	
	return 0;
}
