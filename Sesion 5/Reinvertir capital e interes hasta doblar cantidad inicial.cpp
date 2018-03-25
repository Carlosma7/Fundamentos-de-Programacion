/***************************************************************************/
// FUNDAMENTOS DE PROGRAMACI�N
// GRADO EN INGENIER�A INFORM�TICA
//  
// CURSO 2014-2015
// (C) FRANCISCO JOS� CORTIJO BON
// DEPARTAMENTO DE CIENCIAS DE LA COMPUTACI�N E INTELIGENCIA ARTIFICIAL
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
	
	// Declaracion de variables
	double interes, capital, doble_capital;
	int numero_anios=1;
	
	// Entrada de datos
	cout << "Introduzca el valor del capital inicial: ";
	cin >> capital;
	
	cout << "Introduzca el interes que se aplica al capital: ";
	cin >> interes;
	
	
	// C�mputos y Salidas
	cout << endl << "El capital inicial es: " << capital << " euros." << endl;

	doble_capital = capital *2;
	cout << "El doble del capital inicial es: " << doble_capital << " euros." << endl;
	


	while(capital<=doble_capital){
		capital += (capital * (interes/100));
		
		if(capital<=doble_capital)
			numero_anios++;
	}
	
	
	
	
	cout << endl << "Se necesitan " << numero_anios << " anios para doblar el capital inicial." << endl;
	cout << "(Capital final = " << capital << " euros.)" << endl;
	
	
	return(0);
	
}
