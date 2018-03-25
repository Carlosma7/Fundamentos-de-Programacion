/***************************************************************************/
// FUNDAMENTOS DE PROGRAMACI�N
// GRADO EN INGENIER�A INFORM�TICA
//  
// CURSO 2015-2016
// (C) CARLOS MORALES AGUILERA
//
// Sesi�n 2
// Ejercicio Poblaci�n China
//
/*	 
	De http://countrymeters.info se obtienen los siguientes datos estimados sobre
	la poblaci�n de China:
	- nace una persona cada 1.87 segundos
	- muere una persona cada 3.27 segundos
	- emigra una personada cada 71.9 segundos
	Escriba un programa que muestre la poblaci�n dentro de 2 a�os, considerando que la
	poblaci�n actual es de 1.375.570.814 personas.

*/
/***************************************************************************/

#include <iostream>
#include <cmath>

using namespace std;

int main(){
	
	// Declaraci�n de variables y constante, e inicializaci�n de estas ultimas
	const int poblacion_actual=1375570814;				// Poblaci�n actual es de
	const int dos_anios=(2*365*24*60*60);				// 1.375.570.814 personas
	int poblacion_dos_anios, nacidos, muertos, emigrantes;
	
	// C�mputos
	nacidos = dos_anios/1.87;								// Numero total de personas
												// nacidas en los dos a�os
	
	muertos = dos_anios/3.27;								// Numero total de personas
												// fallecidas en los dos a�os
	
	emigrantes = dos_anios/71.9;								// Numero total de personas
												// emigradas en los dos a�os
	
	poblacion_dos_anios = poblacion_actual+nacidos-muertos-emigrantes;
	
	// Salida de datos
	cout << "La poblacion de China en 2 anios sera: " << poblacion_dos_anios;
	cout << " personas." << endl;
	
	return(0);
	
}
