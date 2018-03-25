/***************************************************************************/
// FUNDAMENTOS DE PROGRAMACIÓN
// GRADO EN INGENIERÍA INFORMÁTICA
//  
// CURSO 2015-2016
// (C) CARLOS MORALES AGUILERA
//
// Sesión 2
// Ejercicio Segundos entre dos instantes
//
/*	 
	Calcular el número de segundos que hay entre dos instantes del mismo día.
	Cada instante se caracteriza por la hora (entre 0 y 23), minuto (entre 0 y 59) y segundo
	(entre 0 y 59).
	
	El programa leerá la hora, minuto y segundo del instante inicial, y la hora, minuto y
	segundo del instante final (supondremos que los valores introducidos son correctos) y
	mostrará el número de segundos entre ambos instantes.
	
*/
/***************************************************************************/

#include <iostream>
#include <cmath>

using namespace std;

int main(){
	
	// Declaracion de variables
	int segs_inicial, mins_inicial, horas_inicial;	// Primer instante
	int segs_final, mins_final, horas_final;			// Segundo instante
	int tiempo_final, tiempo_inicial, tiempo_transcurrido;
	
	// Entrada de datos
	cout << "Introduzca hora del primer instante (0/23 h): ";
	cin >> horas_inicial;
	
	cout << "Introduzca minutos del primer instante (0/59 min): ";
	cin >> mins_inicial;
	
	cout << "Introduzca segundos del primer instante (0/59 seg): ";
	cin >> segs_inicial;
	
	cout << "Introduzca hora del segundo instante (0/23 h): ";
	cin >> horas_final;
	
	cout << "Introduzca minutos del segundo instante (0/59 min): ";
	cin >> mins_final;
	
	cout << "Introduzca segundo del segundo instante (0/59 seg): ";
	cin >> segs_final;
	
	cout << endl;
	
	// Cómputos
	tiempo_inicial = (segs_inicial + (mins_inicial*60) + (horas_inicial*60*60));
	
	tiempo_final = (segs_final + (mins_final*60) + (horas_final*60*60));
	
	tiempo_transcurrido= tiempo_final - tiempo_inicial;
	
	// Salida de datos
	cout << "El tiempo transcurrido de un instante a otro es de: " << tiempo_transcurrido;
	cout << " segundos." << endl;
	
	
	return(0);
	
}
