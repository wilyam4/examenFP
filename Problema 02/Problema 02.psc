Algoritmo puntaje_profesores_WACY
	//datos de entrada:
	Definir puntos, salario Como Entero;
	Definir salario_final, monto Como Real;
	Escribir "Ingrese el salario del docente: ";
	Leer salario;
    Escribir  "Ingrese los puntos del docente: ";
    Leer puntos;
    //proceso:
	Si puntos > 50 y puntos <= 80 Entonces
		salario_final <- salario * 0.10;
         monto <- salario_final + salario;
    //datos de salida: 
	 Escribir "El salario inicial del docente es de: ", salario;
	 Escribir "Los puntos iniciales del docente son: ", puntos;
	 Escribir "El salario adicional es de: ", salario_final;
	 Escribir "El monto final es de: ", monto;
    SiNo Si puntos > 80 y puntos <= 150 Entonces	
		salario_final <- salario * 0.50;
		monto <- salario_final + salario;
	//datos de salida
         Escribir "El salario inicial del docente es de: ", salario;
		Escribir "Los puntos iniciales del docente son: ", puntos;
		Escribir "El salario adicional es de: ", salario_final;
		Escribir "El monto final es de: ", monto;
	SiNo Si puntos > 150 Entonces
		salario_final <- salario * 0.80;
		monto <- salario_final + salario;	
	//datos de salida
		Escribir "El salario inicial del docente es de: ", salario;
		Escribir "Los puntos iniciales del docente son: ", puntos;
		Escribir "El salario adicional es de: ", salario_final;
		Escribir "El monto final es de: ", monto;
	SiNo
	//datos de salida
		Escribir "Los valores que ingresó no existen";
	Fin Si
	Fin Si
Fin Si
FinAlgoritmo