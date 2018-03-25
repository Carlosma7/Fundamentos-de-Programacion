/***************************************************************************/
// FUNDAMENTOS DE PROGRAMACIÓN
// GRADO EN INGENIERÍA INFORMÁTICA
//  
// CURSO 2015-2016
// (C) CARLOS MORALES AGUILERA
//
// Sesión 4
// Ejercicio Pasar de mayúscula a minúscula y viceversa
//
/*	 
	Programa que debe imprimir en pantalla el valor de letra_convertida e indicar si la
	letra introducida era una minúscula, mayúscula o no era una carácter alfabético. No
	pueden usarse las funciones tolower ni toupper de la biblioteca cctype .
	
*/
/***************************************************************************/


#include <iostream>
#include <cmath>

using namespace std;

int main(){
	
	// Declaración de variables
	char letra_original, letra_convertida;
	
	// Entrada de Datos
	cout << "Introduzca un caracter: ";
	cin >> letra_original;
	
	// Cómputos
	if((letra_original >= 'A') && (letra_original <= 'Z')){
		cout << endl << "El caracter es una letra mayuscula." << endl;
		letra_convertida = letra_original + ('a'-'A');		// ('a'-'A') es la distancia que hay
		cout << endl << "Se convierte en minuscula." << endl;	// entre mayúsculas y minúsculas en la
									// tabla ASCII
	}else{
		if((letra_original >= 'a') && (letra_original <= 'z')){
			cout << endl << "El caracter es una letra minuscula." << endl;
			letra_convertida = letra_original - ('a'-'A');		// ('a'-'A') es la distancia que hay
			cout << endl << "Se convierte en mayuscula." << endl;	// entre mayúsculas y minúsculas en la
										// tabla ASCII
		}else{
			cout << endl << "El caracter no es una letra." << endl;
			letra_convertida=letra_original;
		}
	}

	// Salida de datos
	cout << "El caracter final es: " << letra_convertida << endl << endl;
	
	
	return(0);
	
}
