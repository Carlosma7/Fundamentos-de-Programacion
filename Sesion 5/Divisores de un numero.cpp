/***************************************************************************/
// FUNDAMENTOS DE PROGRAMACI�N
// GRADO EN INGENIER�A INFORM�TICA
//  
// CURSO 2015-2016
// (C) CARLOS MORALES AGUILERA
//
// Sesion 4
// Ejercicio Media
//
/*	 
	Escribid un algoritmo para calcular la media aritm�tica muestral y la desviaci�n est�ndar
	(o t�pica) muestral de las alturas de tres personas (n=3). �stos valores ser�n
	reales (de tipo double). La f�rmula general para un valor arbitrario de n es:
	
	x= (altura_1 + altura_2 + altura_3)/n
	
	sigma= sqrt(((pow(altura_1,2) + pow(altura_2,2) + pow(altura_3,2))/n)-pow(x,2))
	
	
	x representa la media aritm�tica y sigma la desviaci�n t�pica muestral. Para resolver este
	problema es necesario usar la funci�n sqrt (ra�z cuadrada) que se encuentra en la
	biblioteca cmath.

	Una vez calculada la media y la desviaci�n, el programa imprima por cada uno de los valores
	introducidos previamente, si est� por encima o por debajo de la media.
		
*/
/***************************************************************************/

#include <iostream>
#include <cmath>

using namespace std;

int main(){
	
	// Declaraci�n de variables
	int tope;
	int contador=1;
	
	// Entrada de Datos
	do{
	cout << "Introduzca el numero tope (positivo): ";
	cin >> tope;
	}while(tope<=0);
	
	// C�mputos y Salida de Datos
	cout << endl << "Los divisores de " << tope << " son: " << endl;
	
	while(contador<=tope){
		if(tope%contador==0)		// Comprobacion de que sea divisor
			cout << contador << " ";		
		contador++;
	}
	
	
	return(0);
	
}
