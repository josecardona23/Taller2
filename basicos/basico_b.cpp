#include <iostream>
#include <stdlib.h>
using namespace std;
/* pedir al usuario que ingrese la base y la altura de un triangulo, calcular su area(base x altura /2)*/
int main(int argc, char** argv) {
	float base, altura, area;
	cout<<"Ingrese la base del triangulo"<<endl;
	cin>>base;
	cout<<"Ingrese la altura del triangulo"<<endl;
	cin>>altura;
	area = base * altura / 2;
	cout<<"triangulo con base = " <<base<<" altura = "<<altura<<endl;
	cout<<"Area del triangulo: "<< "--> "<<area;

	return 0;
}
