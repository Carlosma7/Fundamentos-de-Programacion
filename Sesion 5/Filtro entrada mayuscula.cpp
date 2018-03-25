/***************************************************************************/
// FUNDAMENTOS DE PROGRAMACIÓN
// GRADO EN INGENIERÍA INFORMÁTICA
//  
// CURSO 2015-2016
// (C) CARLOS MORALES AGUILERA
//
// Sesión 4
// Ejercicio Pasar de mayúscula a minúscula
//
/*	 
	Programa que lee un carácter letra_original desde teclado, y comprueba con una
	estructura condicional si es una letra mayúscula. En dicho caso, calcula
	la minúscula correspondiente almacenando el resultado en una variable llamada
	letra_convertida . En el caso de que no sea una mayúscula, se le asignará a
	letra_convertida el valor que tenga letra_original . Finalmente, imprimir
	en pantalla el valor de letra_convertida . No pueden usarse las funciones
	tolower ni toupper de la biblioteca cctype .
	
*/
/***************************************************************************/


#include <iostream>
#include <cmath>

using namespace std;

int main(){
	
	// Declaración de variables
	char letra_original, letra_convertida;
	
	
	// Entrada de Datos
	do{					//Filtro de Entrada de Datos
		cout << "Introduzca una letra mayuscula: ";
		cin >> letra_original;
	}while((letra_original<'A' ) || (letra_original>'Z'));
	
	
	// Cómputos
	letra_convertida = letra_original + ('a'-'A');		// ('a'-'A') es la distancia que hay entre mayúsculas
														// y minúsculas en la tabla ASCII.

	// Salida de datos
	cout << "El caracter en minuscula es: " << letra_convertida << endl << endl;
	
	
	
	return(0);
	
}
