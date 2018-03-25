/***************************************************************************/
// FUNDAMENTOS DE PROGRAMACIÓN
// GRADO EN INGENIERÍA INFORMÁTICA
//  
// CURSO 2015-2016
// (C) CARLOS MORALES AGUILERA
//
// RELACIÓN DE PROBLEMAS V
// EJERCICIO 21
//
/*	 
	Programa que lea una cantidad capital y un interés interes desde teclado y
	calcule en una variable total el dinero que se tendrá al cabo de un año, aplicando la
	fórmula:		total= capital + capital * (interes/100)
	
	El programa debe imprimir en pantalla el valor de la variable total.
	Tanto el capital como el interés serán valores reales. Supondremos que el usuario
	introduce el interés como un valor real entre 0 y 100, es decir, un interés del 5;4%
	se introducirá como 5.4. También supondremos que lo introduce correctamente, es
	decir, que sólo introducirá valores entre 0 y 100.
	
*/
/***************************************************************************/

#include <iostream>

using namespace std;

int main(){
	
	double interes, capital, total;
	
	cout << "Introduzca el valor del capital inicial: " << endl;
	cin >> capital;
	
	cout << "Introduzca el interés que se aplica al capital: " << endl;
	cin >> interes;
	
	total= capital + (capital * (interes/100));
	
	cout << "El capital total es: " << total <<  endl << endl;
	
	return(0);
	
}
