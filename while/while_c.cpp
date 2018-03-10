#include <iostream>
#include <stdlib.h>
using namespace std;
int main(int argc, char** argv) {
	int suma=0, i, n1=1, n2=1;
	while(n2<=50){
		if(n2%2==0){
			suma=suma+n2;
		}
		n2++;
	}
	
	cout<<"La suma de los numeros pares del 1 al 50 es: "<<suma<<endl;
	return 0;
}
