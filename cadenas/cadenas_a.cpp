#include <iostream>
#include <stdlib.h>
using namespace std;
/*cadena a)hacer un programa que pida al usuario que digite una cadena de caracteres luego verificar la longitud de la cadena, 
si esta supera los 10 mostrar en pantalla, caso contrario, no mostrarla*/
int main(int argc, char** argv) {
	int const L = 50;
	int i, longitud=0;
	char cadena[L];
	cout<<"Ingrese una cadena de caracteres: ";
	fgets(cadena, L, stdin );
	
	for(i=0; i<L; i++){
		if(cadena[i] == '\n'){
			break;
		}
		longitud += 1;
	} 
	 if(longitud >= 10){
		cout<<"Longitud: "<<longitud<<endl;
		cout<<"Cadena: "<<cadena;
	}	

	return 0;
}
