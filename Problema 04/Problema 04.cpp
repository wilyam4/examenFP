//Problema 04_WACY
#include<iostream>
#include<cmath>
using namespace std;
int main() {
	float numero_1;
	float numero_2;
	string operacion;
	float total;
	cout << "Ingrese el primer valor:" << endl;
	cin >> numero_1;
	cout << "Ingrese el segundo valor:" << endl;
	cin >> numero_2;
	cout << "�Que operaci�n desea realizar?" << endl;
	cout << " 1.- Suma +" << endl;
	cout << " 2.- Resta -" << endl;
	cout << " 3.- Multiplicaci�n *" << endl;
	cout << " 4.- Divisi�n /" << endl;
	cout << " 5.- Potencia ^" << endl;
	cin >> operacion;
	if (operacion=="+" || operacion=="1" || operacion=="suma") {
		total = numero_1+numero_2;
		cout << "La suma es de: " << total << endl;
	} else {
		if (operacion=="-" || operacion=="2" || operacion=="resta") {
			total = numero_1-numero_2;
			cout << "La resta es de: " << total << endl;
		} else {
			if (operacion=="*" || operacion=="3" || operacion=="multiplicacion" || operacion=="multiplicaci�n") {
				total = numero_1*numero_2;
				cout << "La multiplicaci�n es de: " << total << endl;
			} else {
				if (operacion=="/" || operacion=="4" || operacion=="division" || operacion=="divisi�n") {
					total = numero_1/numero_2;
					cout << "La divisi�n es de: " << total << endl;
				} else {
					if (operacion=="^" || operacion=="5" || operacion=="potencia") {
						total = pow(numero_1,numero_2);
						cout << "La potencia es de: " << total << endl;
					} else {
						cout << "La operaci�n no existe int�ntelo nuevamente" << endl;
					}
				}
			}
		}
	}
	return 0;
}
