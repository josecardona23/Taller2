#include <iostream>
#include <stdlib.h>
/* Determinar si una palabra es palindroma */
int main(int argc, char** argv) {
	int const L = 100;
	int i, longitud=0, comparacion=0; 
	char cadena[L], cadena2[L];
	
	printf("Ingrese una cadena: ");
	fgets(cadena, L, stdin);
	for(i=0; i<L; i++){
		if(cadena[i] == '\n'){
			break;
		}
		longitud+=1;
	}
	
	for(i=longitud-1; i>=0; i--){
		cadena2[longitud-1-i]=cadena[i];
	}
	printf("%s \n", cadena2);
	
	for(i=0;i<longitud;i++){
        if(cadena[i]!=cadena2[i])
            comparacion = 1;
 
    if(comparacion==1){
    	printf("No es palidroma\n");
	}
        
    else{
    	printf("Es palindroma\n");
	}
	
	return 0;
}
}
