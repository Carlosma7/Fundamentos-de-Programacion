/***************************************************************************/
// FUNDAMENTOS DE PROGRAMACIÓN
// GRADO EN INGENIERÍA INFORMÁTICA
//  
// CURSO 2015-2016
// (C) CARLOS MORALES AGUILERA
//
// Sesión 6
// Ejercicio Parejas de caracteres
//
/*	 
	Escribid un programa que lea cuatro valores de tipo char
	(min_izda, max_dcha, min_dcha, max_dcha) e imprima las parejas que
	pueden formarse con un elemento del conjunto {min_izda ... max_izda}.
	
*/
/***************************************************************************/

#include <iostream>
#include <cmath>

using namespace std;


int main(){
	
	// Declaracion de variables
	char min_izda, max_izda, min_dcha, max_dcha;
	
	//Entrada de datos
	cout << "Introduzca un min del primer conjunto: ";
	cin >> min_izda;
	cout << "Introduzca un max del primer conjunto: ";
	cin >> max_izda;
	cout << "Introduzca un min del segundo conjunto: ";
	cin >> min_dcha;
	cout << "Introduzca un min del segundo conjunto: ";
	cin >> max_dcha;
	
	// Cómputos y salida
	for(char i=min_izda;i<=max_izda;i++){
		for(char j=min_dcha;j<=max_dcha;j++)
			cout << i << j << " ";
		
		cout << endl;
	}
	
	
	return(0);
	
}
