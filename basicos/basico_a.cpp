#include <iostream>
#include <stdlib.h>
using namespace std;
/*pedir al usuario que ingrese el valor del radio de una circunferencia, y devolver el area de la circunferencia
 (pi x radio^ 2), diámetro de la circunferencia (2 x pi) y longitud de la circunferencia (2 x pi x radio)*/
int main(int argc, char** argv) {
	float pi, cir, radio, diam, lon, area;
	pi=3.1415;
	cout<<"Ingrese el valor del radio de una circunferencia"<<endl;
		cin >> radio;
	cir = radio;
	area = pi * (radio * radio);
	lon = 2 * pi * radio;
	diam = lon / pi;
	cout<<"La circunferencia con Radio es "<< "--> "<< radio<<endl;
	cout<<"El area de la circunferencia es "<< "--> "<< area<<endl;
	cout<<"El diametro de la circunferencia es "<< "--> "<< diam<<endl;
	cout<<"La longitud de la circunferencia es "<< "--> "<< lon;

	return 0;
}
