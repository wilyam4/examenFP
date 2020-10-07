Algoritmo Nota_final_WACY
	//datos de entrada:
	Definir nota1, nota2, nota3, nota4 Como Real
	Definir notaFinal, nota_1, nota_2, nota_3, nota_4 Como Real;
	Escribir "Ingresar valor de la 1 unidad: "; 
	Leer Nota1;
	Escribir "Ingresar valor de la 2 unidad: ";
	Leer Nota2;
	Escribir "Ingresar valor de la 3 unidad: ";
	Leer Nota3; 
	Escribir "Ingresar valor del trabajo final : ";
	Leer Nota4;
	//proceso:
	Nota1 <- nota1 * 0.10;
	Nota2 <- nota2 * 0.15;
	Nota3 <- nota3 * 0.25;
	Nota4 <- nota4 * 0.50;
	notaFinal <- Nota1 + Nota2 +Nota3 + Nota4;
    Escribir "La nota 1 es de: ", Nota1;
    Escribir "La nota 2 es de: ", Nota2;
    Escribir "La nota 3 es de: ", Nota3;
    Escribir "La nota 4 es de: ", Nota4;
	//datos de salida:
    Escribir "La suma de las 4 notas es de: ", notaFinal;
FinAlgoritmo