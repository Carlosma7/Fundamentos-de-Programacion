/***************************************************************************/
// FUNDAMENTOS DE PROGRAMACIÓN
// GRADO EN INGENIERÍA INFORMÁTICA
//  
// CURSO 2014-2015
// (C) FRANCISCO JOSÉ CORTIJO BON
// DEPARTAMENTO DE CIENCIAS DE LA COMPUTACIÓN E INTELIGENCIA ARTIFICIAL
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
	
	// Declaracion de variables
	double interes, capital, doble_capital;
	int numero_anios=1;
	
	// Entrada de datos
	cout << "Introduzca el valor del capital inicial: ";
	cin >> capital;
	
	cout << "Introduzca el interes que se aplica al capital: ";
	cin >> interes;
	
	
	// Cómputos y Salidas
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
