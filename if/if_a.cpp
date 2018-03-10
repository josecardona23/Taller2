#include <iostream>
#include <stdlib.h>
using namespace std;
int main(int argc, char** argv) {
	int a, b;
	cout<<"Ingrese 2 numeros para determinar cual es mayor"<<endl;
	cout<<"Numero 1"<<endl;
	cin>>a;
	cout<<"Numero 2"<<endl;
	cin>>b;
	if (a>b){
		cout<<a << " Es el mayor"<<endl;
	}else{
		cout<<b<< " Es el mayor"<<endl;
	}

	
	return 0;
}
