/***************************************************************************/
// FUNDAMENTOS DE PROGRAMACI�N
// GRADO EN INGENIER�A INFORM�TICA
//  
// CURSO 2015-2016
// (C) CARLOS MORALES AGUILERA
//
// Sesi�n 4
// Ejercicio Pasar de may�scula a min�scula y viceversa
//
/*	 
	Programa que debe imprimir en pantalla el valor de letra_convertida e indicar si la
	letra introducida era una min�scula, may�scula o no era una car�cter alfab�tico. No
	pueden usarse las funciones tolower ni toupper de la biblioteca cctype .
	
*/
/***************************************************************************/


#include <iostream>

using namespace std;

int main(){
	
	// Declaraci�n de variables
	int entero, minimo;
	
	// Entrada de Datos
	cout << "Introduzca un entero(0 para terminar): ";	//Lectura adelantada
	cin >> entero;
	
	minimo=entero;
	
	while(entero!=0){
		
		if((entero!=0) && (entero<minimo))
				minimo = entero;
		
		cout << "Introduzca un entero(0 para terminar): ";
		cin >> entero;
	}
	
	// Salida de datos
	cout << "El minimo de los enteros introducidos es: " << minimo << endl << endl;
	
	
	return(0);
	
}
