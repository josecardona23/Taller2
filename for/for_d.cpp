#include <iostream>
#include <stdlib.h>
#include <math.h>
using namespace std;
//Escriba un programa que calcule el valor de: 2^1+2^2+2^3+...+2^n:
int main(int argc, char** argv) {
	int i, n, potencia, base, suma=0;
	cout<<"Ingrese un limite"<<endl;
	cin>>n;
	base=2;
	for(i=1; i<=n; i++){
		potencia=pow (base, i);
		suma=suma+potencia;
		cout<<"El resultado de la potenciacion es: "<<base<<"^"<<i<<" = "<<potencia<<endl;
		
	}
	cout<<"El resultado de la suma de las potencias es: "<<suma<<endl;

	return 0;
}
