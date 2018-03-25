/***************************************************************************/
// FUNDAMENTOS DE PROGRAMACI�N
// GRADO EN INGENIER�A INFORM�TICA
//  
// CURSO 2015-2016
// (C) CARLOS MORALES AGUILERA
//
// Sesi�n 2
// Ejercicio Intercambiar dos variables
//
/*	 
	Queremos realizar un programa para intercambiar los contenidos de dos variables
	enteras. El programa leer� desde teclado dos variables edad_Pedro y edad_Juan
	e intercambiar� sus valores. A continuaci�n, mostrar� en pantalla las variables ya
	modificadas. El siguiente c�digo no funciona correctamente.
	
	edad_Pedro = edad_Juan;
	edad_Juan = edad_Pedro;
	
	�Por qu� no funciona? Buscad una soluci�n.
	
*/
/***************************************************************************/

/*
	El c�digo no funciona porque en el momento que a edad_Pedro se le asigna el valor de
	edad_Juan, el valor inicial de edad_Pedro se pierde definitivamente, y al realizar la
	segunda asignaci�n, se vuelve a copiar el mismo valor, por lo que nunca cambia y 
	edad_Pedro y edad_Juan son iguales.
*/

#include <iostream>
#include <cmath>

using namespace std;

int main(){
	
	// Para solucionar el problema de intercambio necesitaremos una variable auxiliar.
	
	// Declaraci�n de variables
	int edad_Pedro, edad_Juan, auxiliar;
	
	// Entrada de Datos
	cout << "Introduzca la edad de Pedro: ";
	cin >> edad_Pedro;
	
	cout << "Introduzca la edad de Juan: ";
	cin >> edad_Juan;
	
	// Mostramos los datos iniciales antes de intercambiarlos
	cout << endl << "La edad de Pedro es: " << edad_Pedro << " y la edad de Juan es: ";
	cout << edad_Juan << endl << endl;
	
	// C�mputos
	auxiliar= edad_Pedro;
	edad_Pedro = edad_Juan;
	edad_Juan = auxiliar;
	
	cout << "SE INTERCAMBIAN LAS EDADES. " << endl;
	
	// Salida de datos
	cout << endl << "La edad de Pedro es: " << edad_Pedro << " y la edad de Juan es: ";
	cout << edad_Juan << endl;
	
	
	
	return(0);
	
}
