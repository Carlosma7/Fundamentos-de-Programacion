/***************************************************************************/
// FUNDAMENTOS DE PROGRAMACIÓN
// GRADO EN INGENIERÍA INFORMÁTICA
//  
// CURSO 2015-2016
// (C) CARLOS MORALES AGUILERA
//
// Sesión 3
// Ejercicio Pasar de caracter a entero
//
/*	 
	Supongamos una variable car de tipo carácter que contiene un valor entre '0' y '9'.
	Construid un programa que obtenga el correspondiente valor entero, se lo asigne a
	una variable de tipo int llamada entero y lo imprima en pantalla. Por ejemplo, si la
	variable car contiene '7' queremos asignarle a entero el valor numérico 7.
	
*/
/***************************************************************************/

#include <iostream>
#include <cmath>

using namespace std;

int main(){
	
	// Declaración de variables
	int entero;
	char car;
	const int distancia_caracter_entero = 48;
	
	// Entrada de Datos
	cout << "Introduzca el caracter que desea convertir en numero (0 a 9): ";
	cin >> car;
	
	// Mostramos los datos iniciales antes de cambiarlos
	cout << endl << "El caracter es: " << car << endl << endl;
	
	// Cómputos
	entero = car - distancia_caracter_entero;	// La distancia entre el un caracter del 0 al 9
															// (48 a 57 en ascii) y el ascii con valor 0 al 9
															// es de -48.
	
	// Salida de datos
	cout << "El entero es: " << entero << endl << endl;
	
	
	
	return(0);
	
}
