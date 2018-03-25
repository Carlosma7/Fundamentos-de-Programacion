/***************************************************************************/
// FUNDAMENTOS DE PROGRAMACIÓN
// GRADO EN INGENIERÍA INFORMÁTICA
//  
// CURSO 2015-2016
// (C) CARLOS MORALES AGUILERA
//
// Sesión 6
// Ejercicio Interés, con varios tipos
//
/*	 
	Se pide calcular el capital obtenido al término de cada año, pero realizando los cálculos para
	todos los tipos de interés enteros menores o iguales que el introducido (en pasos de
	1). Por ejemplo, si el usuario introduce un interés igual a 5 y un número de años igual
	a 3, hay que mostrar el capital ganado al término de cada uno de los tres años a un
	interés del 1 %, a continuación, lo mismo para un interés del 2% y así sucesivamente
	hasta llegar al 5 %. El programa debe mostrar una salida del tipo:
	
	Cálculos realizados al 1%:
	
	Dinero obtenido en el año número 1 = 2020
	Dinero obtenido en el año número 2 = 2040.2
	Dinero obtenido en el año número 3 = 2060.6
	
	Cálculos realizados al 2%:
	
	Dinero obtenido en el año número 1 = 2040
	Dinero obtenido en el año número 2 = 2080.8
	Dinero obtenido en el año número 3 = 2122.42
	
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
	
	cout << "Introduzca el interés que se aplica al capital: ";
	cin >> interes;
	
	cout << "Introduzca el numero de anios que desea reinvertir el capital: ";
	cin >> numero_anios;
	
	
	// Cómputos y Salidas
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
