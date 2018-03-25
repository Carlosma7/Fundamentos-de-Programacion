/***************************************************************************/
// FUNDAMENTOS DE PROGRAMACI�N
// GRADO EN INGENIER�A INFORM�TICA
//  
// CURSO 2015-2016
// (C) CARLOS MORALES AGUILERA
//
// Sesi�n 3
// Ejercicio Intercambiar tres variables
//
/*	 
	Realizar un programa que declare las variables x, y y z, les asigne los valores 10, 20
	y 30 e intercambien entre s� sus valores de forma que el valor de x pasa a y, el de y
	pasa a z y el valor de z pasa a x (se pueden declarar variables auxiliares aunque se
	pide que se use el menor n�mero posible).
	
*/
/***************************************************************************/

#include <iostream>
#include <cmath>

using namespace std;

int main(){
	
	// Para solucionar el problema de intercambio necesitaremos una variable auxiliar.
	
	// Declaraci�n de variables
	int x, y, z, auxiliar;
	
	// Entrada de Datos
	cout << "Introduzca el valor de x (10, 20 o 30): ";
	cin >> x;
	
	cout << "Introduzca el valor de y (10, 20 o 30): ";
	cin >> y;
	
	cout << "Introduzca el valor de z (10, 20 o 30): ";
	cin >> z;
	
	// Mostramos los datos iniciales antes de intercambiarlos
	cout << endl << "x= " << x << "\ty= " << y << "\tz= " << z << endl << endl;
	
	// C�mputos
	auxiliar=x;
	x=z;
	z=y;
	y=auxiliar;
	
	cout << "SE INTERCAMBIAN LOS VALORES. " << endl;
	
	// Salida de datos
		cout << endl << "x= " << x << "\ty= " << y << "\tz= " << z << endl;
	
	
	
	return(0);
	
}
