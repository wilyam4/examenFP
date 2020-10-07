//PROBLEMA 02_WACY
#include<iostream>
using namespace std;
int main() {
	float monto;
	int puntos;
	int salario;
	float salario_final;
	cout << "Ingrese el salario del docente: " << endl;
	cin >> salario;
	cout << "Ingrese los puntos del docente: " << endl;
	cin >> puntos;
	if (puntos>50 && puntos<=80) {
		salario_final = salario*0.10;
		monto = salario_final+salario;
		cout << "El salario inicial del docente es de: " << salario << endl;
		cout << "Los puntos iniciales del docente son: " << puntos << endl;
		cout << "El salario adicional es de: " << salario_final << endl;
		cout << "El monto final es de: " << monto << endl;
	} else {
		if (puntos>80 && puntos<=150) {
			salario_final = salario*0.50;
			monto = salario_final+salario;
			cout << "El salario inicial del docente es de: " << salario << endl;
			cout << "Los puntos iniciales del docente son: " << puntos << endl;
			cout << "El salario adicional es de: " << salario_final << endl;
			cout << "El monto final es de: " << monto << endl;
		} else {
			if (puntos>150) {
				salario_final = salario*0.80;
				monto = salario_final+salario;
				cout << "El salario inicial del docente es de: " << salario << endl;
				cout << "Los puntos iniciales del docente son: " << puntos << endl;
				cout << "El salario adicional es de: " << salario_final << endl;
				cout << "El monto final es de: " << monto << endl;
			} else {
				cout << "Los valores que ingresó no existen" << endl;
			}
		}
	}
	return 0;
}
