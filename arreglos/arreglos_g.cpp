#include <iostream>
#include <stdlib.h>
using namespace std;
/* Realiza un programa que defina dos vectores de caracteres y después almacene el contenido de ambos vectores en un nuevo vector,
  situando en primer lugar los elementos del primer vector seguido por los elementos del segundo vector. Muestre el contenido del nuevo vector en la salida
   estándar.*/
int main(int argc, char** argv) {
	char vector1[]= {'h', 'o', 'l', 'l', 'y'};
   	char vector2[]= {' ', 's', 'h', 'i', 't'};
   	char vectorfinal[10];
   	
   	for(int i=0; i<5; i++){
   		vectorfinal[i] = vector1[i];
	   }
	   
	for(int i=5; i<10; i++){
		vectorfinal[i]=vector2[i-5];
	}
	
	for(int i=0; i<10; i++){
		cout<<vectorfinal[i];
	}
	

	return 0;
}
