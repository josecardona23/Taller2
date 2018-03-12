#include <iostream>
#include <stdlib.h>
/* Pedir al usuario una cadena de caracteres, almacenarla en un arreglo y copiar su contenido hacia otra arreglo de caracteres*/

int main(int argc, char** argv) {
	int const L = 100;
	char cadena[L], cadena2[L];
	int i, contador=0, longitud=0;
	printf("Ingrese una cadena: ");
	fgets(cadena, L, stdin);
	
	for( i=0; i<L; i++){
		if(cadena[i]=='\n'){
			break;
		}
		contador+=1;
	}
	longitud=contador;
	printf("\n%d", longitud);//copiando la primer cadena a la segunda.
	for(int i=0; i<longitud; i++){
		if(i < contador){
			cadena2[i]=cadena[i];
		}
	}
	
	printf("Cadena: %s  ", cadena2);
	return 0;
}
