#include <iostream>
#include <stdlib.h>
using namespace std;
int main(){

	int suma=0, i, n1=1, n2=1;
	while(n2<=50){
		if(n2%2==1){
			suma=suma+n2;
		}
		n2++;
	}
	
	cout<<"La suma de los numeros pares del 1 al 50 es: "<<suma<<endl;
	return 0;
}
