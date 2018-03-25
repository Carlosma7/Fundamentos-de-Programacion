/***************************************************************************/
// FUNDAMENTOS DE PROGRAMACI�N
// GRADO EN INGENIER�A INFORM�TICA
//  
// CURSO 2015-2016
// (C) CARLOS MORALES AGUILERA
//
// Sesi�n 6
// Ejercicio Inter�s, con varios tipos
//
/*	 
	Se pide calcular el capital obtenido al t�rmino de cada a�o, pero realizando los c�lculos para
	todos los tipos de inter�s enteros menores o iguales que el introducido (en pasos de
	1). Por ejemplo, si el usuario introduce un inter�s igual a 5 y un n�mero de a�os igual
	a 3, hay que mostrar el capital ganado al t�rmino de cada uno de los tres a�os a un
	inter�s del 1 %, a continuaci�n, lo mismo para un inter�s del 2% y as� sucesivamente
	hasta llegar al 5 %. El programa debe mostrar una salida del tipo:
	
	C�lculos realizados al 1%:
	
	Dinero obtenido en el a�o n�mero 1 = 2020
	Dinero obtenido en el a�o n�mero 2 = 2040.2
	Dinero obtenido en el a�o n�mero 3 = 2060.6
	
	C�lculos realizados al 2%:
	
	Dinero obtenido en el a�o n�mero 1 = 2040
	Dinero obtenido en el a�o n�mero 2 = 2080.8
	Dinero obtenido en el a�o n�mero 3 = 2122.42
	
*/
/***************************************************************************/

#include <iostream>

using namespace std;

int main(){
	
	// Declaracion de variables
	int interes, numero_anios, contador=1;
	double capital=0.0, capital_inicial;
	
	
	// Entrada de datos
	cout << "Introduzca el valor del capital inicial: ";
	cin >> capital_inicial;
	
	cout << "Introduzca el inter�s que se aplica al capital: ";
	cin >> interes;
	
	cout << "Introduzca el numero de anios que desea reinvertir el capital: ";
	cin >> numero_anios;
	
	
	// C�mputos y Salidas
	cout << endl << "El capital inicial es: " << capital_inicial << " euros." << endl << endl;
	
	for(int i=1; i<=interes; i++){
		capital=capital_inicial;
		
		cout << "Calculos realizados al " << i << "%:" << endl << endl;
		
		for(int j=1; j<=numero_anios; j++){
			capital+=(capital *(i/100.0));
			
			cout << "Dinero obtenido en el ano numero " << j << " = " << capital << endl;
		}
		
		cout << endl;
	}	
	
	
	
	return(0);
	
}
