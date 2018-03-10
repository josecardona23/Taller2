#include <iostream>
#include <stdlib.h>
using namespace std;
/*Pedir al usuario que ingrese en una variable el valor del dólar, y en otra variable la cantidad de dolares, y devolver la cantidad de dinero
en dolares que la persona tiene*/
int main(int argc, char** argv) {
	int valorDolar, cantidadDolar, total;
	cout<<"Ingrese el valor del dolar"<<endl;
	cin>>valorDolar;
	cout<<"Ingrese la cantidad de dolares"<<endl;
	cin>>cantidadDolar;
	total = valorDolar * cantidadDolar;
	cout<<"Total de dinero en dolares: "<<"$ "<<total<<endl;

	return 0;
}
