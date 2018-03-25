/***************************************************************************/
// FUNDAMENTOS DE PROGRAMACIÓN
// GRADO EN INGENIERÍA INFORMÁTICA
//  
// CURSO 2015-2016
// (C) CARLOS MORALES AGUILERA
//
// Sesión 6
// Ejercicio Triángulo y cuadrado de números
//
/*	 
	Cread un programa que ofrezca en pantalla la siguiente salida:
	1 2 3 4 5 6
	2 3 4 5 6
	3 4 5 6
	4 5 6
	5 6
	6
	
	Cread un programa que ofrezca en pantalla la siguiente salida:
	1 2 3 4 5 6
	2 3 4 5 6 7
	3 4 5 6 7 8
	4 5 6 7 8 9
	5 6 7 8 9 10
	6 7 8 9 10 11
	
	Modificad los dos ejercicios anteriores para que se lea desde teclado el valor inicial
	y el número de filas a imprimir. En los ejemplos anteriores, el valor inicial era 1 y se
	imprimían un total de 6 filas.
	
*/
/***************************************************************************/

#include <iostream>
#include <cmath>

using namespace std;

int main(){
	
	// Declaración de variables
	int numero, filas,numero_inicial=0;
	
	// Entrada de datos
	cout << "Introduzca el ultimo numero: ";
	cin >> numero;
	cout << "Introduzca el numero de filas: ";
	cin >> filas;
	
	
	// Cómputos
	for(int i=1; i<=filas; i++){
		for(int j=i; j<=numero; j++)
			cout << j << " ";
		cout << endl;
	}
	
	cout << endl << endl << endl;
	
	for(int i=1; i<=filas;i++){
		for(int j=1;j<=numero;j++){
			cout << j+numero_inicial << " ";
			}
		numero_inicial++;
		cout << endl;
	}
	
	// Salida de datos
	
	
	
	return(0);
	
}
