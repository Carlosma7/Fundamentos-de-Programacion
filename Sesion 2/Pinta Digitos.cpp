/***************************************************************************/
// FUNDAMENTOS DE PROGRAMACIÓN
// GRADO EN INGENIERÍA INFORMÁTICA
//  
// CURSO 2015-2016
// (C) CARLOS MORALES AGUILERA
//
// Sesión 2
// Ejercicio Pinta Dígitos
//
/*	 
	Escribir un programa que lea un valor entero. Supondremos que el usuario introduce
	siempre un entero de tres dígitos, como por ejemplo 351. Escribid en pantalla los
	dígitos separados por tres espacios en blanco. Con el valor anterior la salida sería:

	3 5 1
	
*/
/***************************************************************************/

#include <iostream>
#include <cmath>

using namespace std;

int main(){
	
	// Declaración de variables
	int valor_entero, primer_digito, segundo_digito, tercer_digito;
	
	// Entrada de datos
	cout << "Introduzca el valor entero: ";
	cin >> valor_entero;
	
	// Cómputos
	
	// Al dividir entre 100, obtenemos el primer digito del valor entero
	primer_digito= valor_entero/100;
	
	// Al realizar el modulo %100, se queda con la parte entera de la division
	// del valor entre 100, que son los dos ultimos digitos, y a este lo dividimos
	// entre 10, obteniendo únicamente el segundo digito
	segundo_digito= (valor_entero%100)/10;
	
	// Al realizar modulo %10, se queda con la parte entera de la division
	// del valor entre 10, que es el ultimo digito
	tercer_digito= valor_entero%10;
	
	
	
	// Salida de datos
	cout << "Los digitos del valor " << valor_entero << " son ";
	cout << primer_digito << " " << segundo_digito << " " << tercer_digito << endl;
	
	
	return(0);
	
}
