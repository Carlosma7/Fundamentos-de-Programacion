/***************************************************************************/
// FUNDAMENTOS DE PROGRAMACI�N
// GRADO EN INGENIER�A INFORM�TICA
//  
// CURSO 2015-2016
// (C) CARLOS MORALES AGUILERA
//
// Sesi�n 3
// Ejercicio Pasar de may�scula a min�scula
//
/*	 
	Dise�ar un programa que lea un car�cter (supondremos que el usuario introduce una
	may�scula), lo pase a min�scula y lo imprima en pantalla. Hacedlo sin usar las funciones
	toupper ni tolower de la biblioteca cctype. Para ello, debe considerarse
	la equivalencia en C++ entre los tipos enteros y caracteres.
	
*/
/***************************************************************************/


#include <iostream>
#include <cmath>

using namespace std;

int main(){
	
	// Declaraci�n de variables
	char caracter;
	
	// Entrada de Datos
	cout << "Introduzca el caracter en mayuscula: ";
	cin >> caracter;
	
	
	// Mostramos los datos iniciales antes de intercambiarlos
	cout << endl << "El caracter en mayuscula es: " << caracter << endl << endl;
	
	// C�mputos
	caracter = caracter + ('a'-'A');			// ('a'-'A') es la distancia que hay
														// entre may�sculas y min�sculas en la
														// tabla ASCII			
	
	cout << "SE TRANSFORMA A MINUSCULA. " << endl << endl;
	
	// Salida de datos
	cout << "El caracter en minuscula es: " << caracter << endl << endl;
	
	
	
	return(0);
	
}
