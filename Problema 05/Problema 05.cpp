//problema 05 _WACY
#include<iostream>
using namespace std;
int main() {
	float i;
	float salario;
	salario = 1400;
	for (i=0;i<=6;i++) {
		cout << "Año: " << i << endl;
		cout << "Salario: " << salario << endl;
		cout << "" << endl;
		salario = salario*1.1;
	}
	return 0;
}
