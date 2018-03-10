#include <iostream>
#include <stdlib.h>
using namespace std;

int main(int argc, char** argv) {
	int a,b,c,d;
	cout<<"Ingrese 4 nummeros"<<endl;
	cin>>a;
	cin>>b;
	cin>>c;
	cout<<"Los 3 primeros numeros ingresados son"<<endl;
	cout<<"1. --> "<<a<<endl;
	cout<<"2. --> "<<b<<endl;
	cout<<"3. --> "<<c<<endl;
	cout<<"Ahora ingrese el 4to numero"<<endl;
	cin>>d;
	if (d==a || d==b){
		cout<<"El numero "<<d<<" se repite"<<endl;
	}else if (d==c) {
		cout<<" El numero "<<d<<" se repite"<<endl;
	}

	
	return 0;
}
