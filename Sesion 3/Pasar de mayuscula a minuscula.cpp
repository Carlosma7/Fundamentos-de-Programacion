/***************************************************************************/
// FUNDAMENTOS DE PROGRAMACIÓN
// GRADO EN INGENIERÍA INFORMÁTICA
//  
// CURSO 2015-2016
// (C) CARLOS MORALES AGUILERA
//
// Sesión 3
// Ejercicio Pasar de mayúscula a minúscula
//
/*	 
	Diseñar un programa que lea un carácter (supondremos que el usuario introduce una
	mayúscula), lo pase a minúscula y lo imprima en pantalla. Hacedlo sin usar las funciones
	toupper ni tolower de la biblioteca cctype. Para ello, debe considerarse
	la equivalencia en C++ entre los tipos enteros y caracteres.
	
*/
/***************************************************************************/


#include <iostream>
#include <cmath>

using namespace std;

int main(){
	
	// Declaración de variables
	char caracter;
	
	// Entrada de Datos
	cout << "Introduzca el caracter en mayuscula: ";
	cin >> caracter;
	
	
	// Mostramos los datos iniciales antes de intercambiarlos
	cout << endl << "El caracter en mayuscula es: " << caracter << endl << endl;
	
	// Cómputos
	caracter = caracter + ('a'-'A');			// ('a'-'A') es la distancia que hay
														// entre mayúsculas y minúsculas en la
														// tabla ASCII			
	
	cout << "SE TRANSFORMA A MINUSCULA. " << endl << endl;
	
	// Salida de datos
	cout << "El caracter en minuscula es: " << caracter << endl << endl;
	
	
	
	return(0);
	
}
