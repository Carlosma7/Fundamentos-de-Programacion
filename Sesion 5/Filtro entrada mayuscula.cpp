/***************************************************************************/
// FUNDAMENTOS DE PROGRAMACI�N
// GRADO EN INGENIER�A INFORM�TICA
//  
// CURSO 2015-2016
// (C) CARLOS MORALES AGUILERA
//
// Sesi�n 4
// Ejercicio Pasar de may�scula a min�scula
//
/*	 
	Programa que lee un car�cter letra_original desde teclado, y comprueba con una
	estructura condicional si es una letra may�scula. En dicho caso, calcula
	la min�scula correspondiente almacenando el resultado en una variable llamada
	letra_convertida . En el caso de que no sea una may�scula, se le asignar� a
	letra_convertida el valor que tenga letra_original . Finalmente, imprimir
	en pantalla el valor de letra_convertida . No pueden usarse las funciones
	tolower ni toupper de la biblioteca cctype .
	
*/
/***************************************************************************/


#include <iostream>
#include <cmath>

using namespace std;

int main(){
	
	// Declaraci�n de variables
	char letra_original, letra_convertida;
	
	
	// Entrada de Datos
	do{					//Filtro de Entrada de Datos
		cout << "Introduzca una letra mayuscula: ";
		cin >> letra_original;
	}while((letra_original<'A' ) || (letra_original>'Z'));
	
	
	// C�mputos
	letra_convertida = letra_original + ('a'-'A');		// ('a'-'A') es la distancia que hay entre may�sculas
														// y min�sculas en la tabla ASCII.

	// Salida de datos
	cout << "El caracter en minuscula es: " << letra_convertida << endl << endl;
	
	
	
	return(0);
	
}
