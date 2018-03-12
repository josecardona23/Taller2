#include <iostream>
#include <stdlib.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int const L=50;
	char nombre[L], final[L];
	char saludo[]="Buen dia";
	int i, longitud=0;
	
	printf("Por favor escriba su nombre: ");
	fgets(nombre, L, stdin);
	for(i=0; i<L; i++){
		if(nombre[i] == '\n'){
			break;
		}
		longitud+=1;
	}
	
	for(i=0; i<8; i++){
		final[i]=saludo[i];
	}
	for(i=8; i<longitud; i++){
		final[i]=nombre[i];
	}printf("%s, %s",saludo, nombre );
	
	return 0;
}
