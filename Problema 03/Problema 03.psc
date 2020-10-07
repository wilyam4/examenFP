Algoritmo Vacuna_coronavirus_WACY
	Escribir "ingrese  la edad:";
	Leer edad;
	Escribir "seleccione el valor de sexo.";
	Escribir "1.- mujer ";
	Escribir "2.- hombre";
	Escribir " :";
	Repetir
		Leer sexo;
		si sexo<1 o sexo>2 Entonces
			Escribir "valor incorrecto .ingreselo nuevamente.:";
		FinSi
	Hasta Que sexo>=1 y sexo<=2;
	si (sexo = 2 y edad >=16 y edad<70) o edad<16 Entonces
		Escribir "vacuna tipo  A";
	FinSi
	si sexo = 1 y edad>=16 y edad<70 Entonces
		Escribir "vacuna tipo  B";
	FinSi
	si edad>70 Entonces
		Escribir "vacuna tipo  C";
	FinSi
FinAlgoritmo