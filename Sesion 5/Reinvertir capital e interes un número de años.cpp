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
	double interes, capital;
	int numero_anios, contador=1;
	
	// Entrada de datos
	cout << "Introduzca el valor del capital inicial: " << endl;
	cin >> capital;
	
	cout << "Introduzca el interés que se aplica al capital: " << endl;
	cin >> interes;
	
	cout << "Introduzca el numero de anios que desea reinvertir el capital: " << endl;
	cin >> numero_anios;
	
	
	// Cómputos y Salidas
	cout << "El capital inicial es: " << capital << " euros." << endl;
	
	while(contador<=numero_anios){			// Bucle que realiza la operacion numero_anios veces.
		capital+=(capital * (interes/100));	//Aumento del capital
		
		cout << "El capital en el anio " << contador <<" es: " << capital << " euros." << endl;
		contador++;
	}
	
	
	
	
	return(0);
	
}
