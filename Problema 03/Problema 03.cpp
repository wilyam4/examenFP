//Problema_03_WACY
#include<iostream>
using namespace std;
int main() {
	float edad;
	float sexo;
	cout << "ingrese  la edad:" << endl;
	cin >> edad;
	cout << "seleccione el valor de sexo." << endl;
	cout << "1.- mujer " << endl;
	cout << "2.- hombre" << endl;
	cout << " :" << endl;
	do {
		cin >> sexo;
		if (sexo<1 || sexo>2) {
			cout << "valor incorrecto .ingreselo nuevamente.:" << endl;
		}
	} while (!(sexo>=1 && sexo<=2));
	if ((sexo==2 && edad>=16 && edad<70) || edad<16) {
		cout << "vacuna tipo  A" << endl;
	}
	if (sexo==1 && edad>=16 && edad<70) {
		cout << "vacuna tipo  B" << endl;
	}
	if (edad>70) {
		cout << "vacuna tipo  C" << endl;
	}
	return 0;
}
