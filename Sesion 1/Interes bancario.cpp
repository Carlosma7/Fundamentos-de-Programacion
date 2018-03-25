/***************************************************************************/
// FUNDAMENTOS DE PROGRAMACI�N
// GRADO EN INGENIER�A INFORM�TICA
//  
// CURSO 2015-2016
// (C) CARLOS MORALES AGUILERA
//
// RELACI�N DE PROBLEMAS V
// EJERCICIO 21
//
/*	 
	Programa que lea una cantidad capital y un inter�s interes desde teclado y
	calcule en una variable total el dinero que se tendr� al cabo de un a�o, aplicando la
	f�rmula:		total= capital + capital * (interes/100)
	
	El programa debe imprimir en pantalla el valor de la variable total.
	Tanto el capital como el inter�s ser�n valores reales. Supondremos que el usuario
	introduce el inter�s como un valor real entre 0 y 100, es decir, un inter�s del 5;4%
	se introducir� como 5.4. Tambi�n supondremos que lo introduce correctamente, es
	decir, que s�lo introducir� valores entre 0 y 100.
	
*/
/***************************************************************************/

#include <iostream>

using namespace std;

int main(){
	
	double interes, capital, total;
	
	cout << "Introduzca el valor del capital inicial: " << endl;
	cin >> capital;
	
	cout << "Introduzca el inter�s que se aplica al capital: " << endl;
	cin >> interes;
	
	total= capital + (capital * (interes/100));
	
	cout << "El capital total es: " << total <<  endl << endl;
	
	return(0);
	
}
