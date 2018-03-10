#include <iostream>
#include <stdlib.h>
using namespace std;
int main(int argc, char** argv) {
	int a, b, c	;
	cout<<"Ingrese 3 numeros para determinar cual es mayor"<<endl;
	cout<<"Numero 1"<<endl;
	cin>>a;
	cout<<"Numero 2"<<endl;
	cin>>b;
	cout<<"Numero 3"<<endl;
	cin>>c;
	if (a>b && a>c){
		cout<<a << " Es el mayor"<<endl;
	}else if (b>a && b>c){
		cout<<b<< " Es el mayor"<<endl;
		}else{
			cout<<c<< " Es el mayor"<<endl;
		 
		}
	
	return 0;
}
