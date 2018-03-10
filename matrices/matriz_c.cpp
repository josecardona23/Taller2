#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;
/* Hacer una matriz preguntando al usuario el numero de filas y columnasllenarlas de numeros aleatorios, copiar el contenido a otra matriz
 y por ultimo mostrarla en pantalla.*/


int main(int argc, char** argv) {
	int i, j, filas, columnas, aleatorio=0;
 	int matriz1[50][50];
 	int matriz2[50][50];
 	
 	cout<<"Ingrese el numero de filas de la matriz: ";
 	cin>>filas;
 	cout<<"Ingrese el numero de columnas de la matriz: ";
 	cin>>columnas;
 	srand(time(NULL));
 	for(i=0; i<filas; i++){
 		for(j=0; j<columnas; j++){
 			aleatorio=1+rand()%(50);
 			matriz1[i][j]=aleatorio;
		 }
	 }
	 for(i=0; i<filas; i++){
	 	for(j=0; j<columnas; j++){
	 		matriz2[i][j]=matriz1[i][j];
		 }
	 }
	 cout<<"La matriz es "<<endl;
	 
	 for(i=0; i<filas; i++){
	 	for(j=0; j<columnas; j++){
	 	cout<<matriz2[i][j]<<" ";
		 }
		 cout<<"\n";
	 }

	return 0;
}
