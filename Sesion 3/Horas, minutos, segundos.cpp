/***************************************************************************/
// FUNDAMENTOS DE PROGRAMACIÓN
// GRADO EN INGENIERÍA INFORMÁTICA
//  
// CURSO 2015-2016
// (C) CARLOS MORALES AGUILERA
//
// Sesión 3
// Ejercicio Horas, Minutos y Segundos
//
/*	 
	Leed desde teclado tres variables correspondientes a un número de horas, minutos
	y segundos, respectivamente. Diseñar un algoritmo que calcule las horas, minutos y
	segundos dentro de su rango correspondiente. Por ejemplo, dadas 10 horas, 119 minutos
	y 280 segundos, debería dar como resultado 12 horas, 3 minutos y 40 segundos.
	El programa no calculará meses, años, etc sino que se quedará en los días.
	
*/
/***************************************************************************/

#include <iostream>
#include <cmath>

using namespace std;

int main(){
	
	// Declaración de variables
	int horas_inicial, minutos_inicial, segundos_inicial;
	int dias, horas_final, minutos_final, segundos_final;
	
	// Entrada de datos
	cout << "Introduzca numero de horas(h): ";
	cin >> horas_inicial;
	cout << "Introduzca numero de minutos(min): ";
	cin >> minutos_inicial;
	cout << "Introduzca numero de segundos(s): ";
	cin >> segundos_inicial;
	
	// Cómputos
	segundos_final= segundos_inicial%60;
	minutos_final= (minutos_inicial%60) + (segundos_inicial/60);
	horas_final= (horas_inicial%24) + (minutos_inicial/60) + ((segundos_inicial/60)/60);
	dias= (horas_inicial/24) + (((minutos_inicial/60)/24)) + (((segundos_inicial/60)/60)/24);
	
	
	// Salida de datos
	cout << endl <<  "El tiempo final es: " << dias << " dia(s), ";
	cout << horas_final << " hora(s), " << minutos_final;
	cout << " minuto(s), " << segundos_final << " segundo(s)." << endl;
	
	
	return(0);
	
}
