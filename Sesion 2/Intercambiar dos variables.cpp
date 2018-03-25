/***************************************************************************/
// FUNDAMENTOS DE PROGRAMACIÓN
// GRADO EN INGENIERÍA INFORMÁTICA
//  
// CURSO 2015-2016
// (C) CARLOS MORALES AGUILERA
//
// Sesión 2
// Ejercicio Intercambiar dos variables
//
/*	 
	Queremos realizar un programa para intercambiar los contenidos de dos variables
	enteras. El programa leerá desde teclado dos variables edad_Pedro y edad_Juan
	e intercambiará sus valores. A continuación, mostrará en pantalla las variables ya
	modificadas. El siguiente código no funciona correctamente.
	
	edad_Pedro = edad_Juan;
	edad_Juan = edad_Pedro;
	
	¿Por qué no funciona? Buscad una solución.
	
*/
/***************************************************************************/

/*
	El código no funciona porque en el momento que a edad_Pedro se le asigna el valor de
	edad_Juan, el valor inicial de edad_Pedro se pierde definitivamente, y al realizar la
	segunda asignación, se vuelve a copiar el mismo valor, por lo que nunca cambia y 
	edad_Pedro y edad_Juan son iguales.
*/

#include <iostream>
#include <cmath>

using namespace std;

int main(){
	
	// Para solucionar el problema de intercambio necesitaremos una variable auxiliar.
	
	// Declaración de variables
	int edad_Pedro, edad_Juan, auxiliar;
	
	// Entrada de Datos
	cout << "Introduzca la edad de Pedro: ";
	cin >> edad_Pedro;
	
	cout << "Introduzca la edad de Juan: ";
	cin >> edad_Juan;
	
	// Mostramos los datos iniciales antes de intercambiarlos
	cout << endl << "La edad de Pedro es: " << edad_Pedro << " y la edad de Juan es: ";
	cout << edad_Juan << endl << endl;
	
	// Cómputos
	auxiliar= edad_Pedro;
	edad_Pedro = edad_Juan;
	edad_Juan = auxiliar;
	
	cout << "SE INTERCAMBIAN LAS EDADES. " << endl;
	
	// Salida de datos
	cout << endl << "La edad de Pedro es: " << edad_Pedro << " y la edad de Juan es: ";
	cout << edad_Juan << endl;
	
	
	
	return(0);
	
}
