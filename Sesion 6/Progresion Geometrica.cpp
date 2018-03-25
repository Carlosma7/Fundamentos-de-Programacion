/***************************************************************************/
// FUNDAMENTOS DE PROGRAMACI�N
// GRADO EN INGENIER�A INFORM�TICA
//  
// CURSO 2015-2016
// (C) CARLOS MORALES AGUILERA
//
// Sesi�n 6
// Ejercicio Progresion Geometrica
//
/*	 
	Supongamos una serie num�rica cuyo t�rmino general es:
	ai = a1*ri^(i-1)
	
	Se pide crear un programa que lea desde teclado r, el primer elemento a1 y el tope k
	y calcule la suma de los primeros k valores de la serie.
	
*/
/***************************************************************************/

#include <iostream>
#include <cmath>

using namespace std;

int main(){
	
	// Declaraci�n de variables
	int r, k, ai,a_actual, progresion=0;
	
	// Entrada de datos
	cout << "Introduzca el primer elemento a1: ";
	cin >> ai;
	cout << "Introduzca la razon de la progresion r: ";
	cin >> r;
	cout << "Introduzca el tope k: ";
	cin >> k;
	
	
	// C�mputos
	for (int i=1; i<=k; i++){	//ai+1 = ai * r
		a_actual=ai*r;
		progresion+=a_actual;
		
		ai=a_actual;
	}
	
	// Salida de datos
	cout << "El resultado de la progresion geometrica es: " << progresion << endl;
	
	
	return(0);
	
}
