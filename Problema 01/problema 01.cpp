//Problema 01_WACY
#include<iostream>
using namespace std;
int main() {
	float nota1;
	float nota2;
	float nota3;
	float nota4;
	float notafinal;
	float nota_1;
	float nota_2;
	float nota_3;
	float nota_4;
	cout << "Ingresar valor de la 1 unidad: " << endl;
	cin >> nota1;
	cout << "Ingresar valor de la 2 unidad: " << endl;
	cin >> nota2;
	cout << "Ingresar valor de la 3 unidad: " << endl;
	cin >> nota3;
	cout << "Ingresar valor del trabajo final : " << endl;
	cin >> nota4;
	nota1 = nota1*0.10;
	nota2 = nota2*0.15;
	nota3 = nota3*0.25;
	nota4 = nota4*0.50;
	notafinal = nota1+nota2+nota3+nota4;
	cout << "La nota 1 es de: " << nota1 << endl;
	cout << "La nota 2 es de: " << nota2 << endl;
	cout << "La nota 3 es de: " << nota3 << endl;
	cout << "La nota 4 es de: " << nota4 << endl;
	cout << "La suma de las 4 notas es de: " << notafinal << endl;
	return 0;
}
