#include <iostream>
#include <stdlib.h>
using namespace std;
//solucionar el factorial de un numero
int main(int argc, char** argv) {
	int factorial, i, n;
	cout<<"Ingrese un numero para saber su factorial "<<endl;
	cin>>n;
	factorial=1;
	i=1;
	while (i<=n){
		factorial=factorial*i;
		i=i+1;
	}
	cout<<"El factorial de "<<n<<" es "<<factorial<<endl;

	return 0;
}
