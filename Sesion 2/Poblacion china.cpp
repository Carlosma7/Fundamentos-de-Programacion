/***************************************************************************/
// FUNDAMENTOS DE PROGRAMACIÓN
// GRADO EN INGENIERÍA INFORMÁTICA
//  
// CURSO 2015-2016
// (C) CARLOS MORALES AGUILERA
//
// Sesión 2
// Ejercicio Población China
//
/*	 
	De http://countrymeters.info se obtienen los siguientes datos estimados sobre
	la población de China:
	- nace una persona cada 1.87 segundos
	- muere una persona cada 3.27 segundos
	- emigra una personada cada 71.9 segundos
	Escriba un programa que muestre la población dentro de 2 años, considerando que la
	población actual es de 1.375.570.814 personas.

*/
/***************************************************************************/

#include <iostream>
#include <cmath>

using namespace std;

int main(){
	
	// Declaración de variables y constante, e inicialización de estas ultimas
	const int poblacion_actual=1375570814;				// Población actual es de
	const int dos_anios=(2*365*24*60*60);				// 1.375.570.814 personas
	int poblacion_dos_anios, nacidos, muertos, emigrantes;
	
	// Cómputos
	nacidos = dos_anios/1.87;								// Numero total de personas
												// nacidas en los dos años
	
	muertos = dos_anios/3.27;								// Numero total de personas
												// fallecidas en los dos años
	
	emigrantes = dos_anios/71.9;								// Numero total de personas
												// emigradas en los dos años
	
	poblacion_dos_anios = poblacion_actual+nacidos-muertos-emigrantes;
	
	// Salida de datos
	cout << "La poblacion de China en 2 anios sera: " << poblacion_dos_anios;
	cout << " personas." << endl;
	
	return(0);
	
}
