#include <iostream>
#include <stdlib.h>
using namespace std;
/*calcular el salario de un empleado, pidiendole que ingrese 4 variables (horas_dirunas, horas_nocturnas, horas_dominicales. horas_festivos), las variables deben ser operadas*/
int main(int argc, char** argv) {
	int porcN, porcDo, porcF, horaD, horaN, horaDo, horaF, horaDiurna, valorHora = 2500, horaNocturna, horaDominical, horaFestivo, salario;
	cout<<"Ingrese las horas Diurnas"<<endl;
		cin>>horaD;
	cout<<"Ingrese las horas Nocturnas"<<endl;
		cin>>horaN;
	cout<<"Ingrese las horas Dominicales"<<endl;
		cin>> horaDo;
	cout<<"Ingrese las horas Festivos"<<endl;
		cin>>horaF;
	horaDiurna = valorHora * horaD;
	porcN = valorHora + (valorHora * 0.35);
		horaNocturna = porcN * horaN;
	porcDo= valorHora + (valorHora * 0.50);
		horaDominical = porcDo * horaDo;
	porcF = valorHora + (valorHora * 0.75);
		horaFestivo = porcF * horaF;
	salario = horaDiurna+horaNocturna+horaDominical+horaFestivo;
	cout<<"El valor de las horas Dirunas es: "<<horaDiurna<<endl;
	cout<<"El valor de las horas Nocturnas es: "<<horaNocturna<<endl;
	cout<<"El valor de las horas Dominacales es: "<<horaDominical<<endl;
	cout<<"El valor de las horas Festivos es: "<<horaFestivo<<endl;
	cout<<"El salario es : "<<salario;

	
	return 0;
}
