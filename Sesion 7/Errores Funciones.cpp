/***************************************************************************/
// FUNDAMENTOS DE PROGRAMACIÓN
// GRADO EN INGENIERÍA INFORMÁTICA
//  
// CURSO 2015-2016
// (C) CARLOS MORALES AGUILERA
//
// Sesión 6
// Ejercicio Errores Funciones
//
/*	 
	Comprueba el error de cada una de estas funciones
	
	
	int ValorAbsoluto (int entero) {
		if (entero < 0)
			entero = -entero;
		else
			return entero;
	}
	
	void Imprime(double valor) {
		double valor;
		cout << valor;
	}
	
	void Cuadrado (int entero) {
		return entero*entero;
	}
	
	bool EsPositivo(int valor) {
		if (valor > 0)
			return true;
	}
	
*/
/***************************************************************************/

#include <iostream>
#include <cmath>

using namespace std;

//PRIMERO
int ValorAbsoluto (int entero) {
	if (entero < 0){
		entero = -entero;
	}else
		return entero;		// Solo devuelve valor si el entero es mayor o igual que 0, por lo que se ve forzado a un return sea el numero que sea entero
}							// sin cambiarle el signo ni nada

//SEGUNDO
void Imprime(double valor) {
	double valor;			// La variable "valor" oculta el valor del parametro "valor" han de llamarse de distinta forma
	cout << valor;
}

//TERCERO
void Cuadrado (int entero) {
	return entero*entero;		// Es una funcion void, no puede devolver ningun dato, y se esta forzando a devolver un numero
}

//CUARTO
bool EsPositivo(int valor) {
	if (valor > 0)
		return true;			// Solo tiene en cuenta la opcion de que sea verdadero, no tiene en cuenta que no se pueda cumplir la condicion
}
