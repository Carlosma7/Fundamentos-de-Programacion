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
	double interes, capital;
	int numero_anios, contador=1;
	
	// Entrada de datos
	cout << "Introduzca el valor del capital inicial: " << endl;
	cin >> capital;
	
	cout << "Introduzca el inter�s que se aplica al capital: " << endl;
	cin >> interes;
	
	cout << "Introduzca el numero de anios que desea reinvertir el capital: " << endl;
	cin >> numero_anios;
	
	
	// C�mputos y Salidas
	cout << "El capital inicial es: " << capital << " euros." << endl;
	
	while(contador<=numero_anios){			// Bucle que realiza la operacion numero_anios veces.
		capital+=(capital * (interes/100));	//Aumento del capital
		
		cout << "El capital en el anio " << contador <<" es: " << capital << " euros." << endl;
		contador++;
	}
	
	
	
	
	return(0);
	
}
