#include <iostream>
#include <stdlib.h>
using namespace std;
//Resolver el numero de fibonacci
int main(int argc, char** argv) {
	int fib, i, n;
	fib=0, i=1;
	cout<<"Ingrese un numero "<<endl;
	cin>>n;
	while(i<=n){
		fib=fib+i;
		i=i+1;
	}
	cout<<fib<<endl;
	return 0;
}
