#include <iostream>
#include <stdlib.h>
/* Pedir al usuario que digite 2 cadenas de caracteres, e indicar si ambas cadenas
son iguales, en caso de no serlo, indicar cuale es la mayor alfabéticamente  */

int main(int argc, char** argv) {
	int const L=100;
	int i, contador=0, contador2=0;
	char mayor, cadena[L], cadena2[L];
	printf("Ingrese la primer cadena: ");
	fgets(cadena, L, stdin);
	printf("Ingrese la segunda cadena: ");
	fgets(cadena2, L, stdin);
	
	for(i=0; i<L; i++){
		if(cadena[i] == '\n'){
			break;
		}
		contador+=1;
	}
	for(i=0; i<L; i++){
		if(cadena2[i] == '\n'){
			break;
		}
		contador2+=1;
	}
	
	if(contador==contador2){
		printf("\nLas cadenas tiene la misma longitud\n");
	}else if(contador>contador2){
		printf("\nLa cadena mayor alfabeticamente es: %s", cadena);
	}else{
		printf("\nLa cadena mayor alfabeticamente es: %s", cadena2);
	}
	
	
	return 0;
}
