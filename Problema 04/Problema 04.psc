Algoritmo operaci�nes_aritmeticas_WACY
	Definir numero_1, numero_2,total Como Real
	Definir operacion Como Caracter
	Escribir "Ingrese el primer valor:";
	Leer numero_1;
	Escribir "Ingrese el segundo valor:";
	Leer numero_2;
	Escribir "�Que operaci�n desea realizar?";
	Escribir "	1.- Suma +";
	Escribir "	2.- Resta -";
	Escribir "	3.- Multiplicaci�n *";
	Escribir "	4.- Divisi�n /";
	Escribir "	5.- Potencia ^";
	Leer operacion;
	Si operacion == "+" o operacion == "1" o operacion == "suma" Entonces
		total <- numero_1 + numero_2;
         Escribir "La suma es de: ", total;
	SiNo Si operacion == "-" o operacion == "2" o operacion == "resta" Entonces
		total <- numero_1 - numero_2;
         Escribir "La resta es de: ", total;
    SiNo Si operacion == "*" o operacion == "3" o operacion == "multiplicacion" o operacion == "multiplicaci�n" Entonces 
         total <- numero_1 * numero_2;
         Escribir "La multiplicaci�n es de: ", total;
    SiNo Si operacion == "/" o operacion == "4" o operacion == "division" o operacion == "divisi�n" Entonces
         total <- numero_1 / numero_2;
         Escribir "La divisi�n es de: ", total;
    SiNo Si operacion == "^" o operacion == "5" o operacion == "potencia" Entonces 
         total <- numero_1 ^ numero_2;
         Escribir "La potencia es de: ", total;
    SiNo
		Escribir "La operaci�n no existe int�ntelo nuevamente";
	Fin Si
	Fin Si
	Fin Si
	Fin Si
	Fin Si
FinAlgoritmo