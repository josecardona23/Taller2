#include <iostream>
#include <stdlib.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int const L = 3;
	int A[L][L]= {{3,0,2},{-2,3,1},{1,4,4}};
	int B[L][L]= {{1,2,2},{0,1,-4},{2,-1,3}};
	int C[L][L], i, j, k;
	printf("Mostrando la primer matriz \n");
	for(i=0; i<L; i++){
		for(j=0; j<L; j++){
			printf("%d ", A[i][j]);
	
		}
				printf ("\n");
	}
	printf("\nMostrando segunda matriz \n");
	for(i=0; i<L; i++){
		for(j=0; j<L; j++){
			printf("%d ", B[i][j]);
	
		}
				printf ("\n");
	}
	printf("\nEl producto de las dos matrices es: \n");
	for(i=0; i<L; i++){
		for(j=0; j<L; j++){
			C[i][j]=0;
			for(k=0; k<L; k++){
				C[i][j] = C[i][j] + A[i][k] * B[k][j];
			}
		}
	}
	for(i=0; i<L; i++){
		for(j=0; j<L; j++){
			printf("%d", C[i][j]);
			printf(" ");
		}
		printf ("\n");
	}
	
	return 0;
}
