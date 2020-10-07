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
	cout << "¿Que operación desea realizar?" << endl;
	cout << " 1.- Suma +" << endl;
	cout << " 2.- Resta -" << endl;
	cout << " 3.- Multiplicación *" << endl;
	cout << " 4.- División /" << endl;
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
			if (operacion=="*" || operacion=="3" || operacion=="multiplicacion" || operacion=="multiplicación") {
				total = numero_1*numero_2;
				cout << "La multiplicación es de: " << total << endl;
			} else {
				if (operacion=="/" || operacion=="4" || operacion=="division" || operacion=="división") {
					total = numero_1/numero_2;
					cout << "La división es de: " << total << endl;
				} else {
					if (operacion=="^" || operacion=="5" || operacion=="potencia") {
						total = pow(numero_1,numero_2);
						cout << "La potencia es de: " << total << endl;
					} else {
						cout << "La operación no existe inténtelo nuevamente" << endl;
					}
				}
			}
		}
	}
	return 0;
}
