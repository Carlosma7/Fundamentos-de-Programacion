/***************************************************************************/
// FUNDAMENTOS DE PROGRAMACIÓN
// GRADO EN INGENIERÍA INFORMÁTICA
//  
// CURSO 2015-2016
// (C) CARLOS MORALES AGUILERA
//
// Sesión 6
// Ejercicio Factorial y Potencia
//
/*	 
	Calcular mediante un programa en C++ la función potencia xn, y la función factorial
	n! con n un valor entero y x un valor real. No pueden usarse las funciones de la
	biblioteca cmath.
	
	Para obligar a que el valor leído de n sea positivo, implemente y llame a la función
	int LeeEnteroPositivo()
	
*/
/***************************************************************************/

#include <iostream>
#include <cmath>

using namespace std;

int LeeEnteroPositivo(){
	int n;
	
	do{
		cout << "Introduzca el valor para exponente y factorial, positivo (n): ";
		cin >> n;
	}while(n<=0);
	
	return n;
}

int main(){
	
	// Declaración de variables
	int x, n, contador=1, potencia=1, num_factorial=1;
	
	// Entrada de datos
	cout << "Introduzca la base (x): ";
	cin >> x;
	
	n= LeeEnteroPositivo();
	
	// Cómputos
	for (int i=0;i<n;i++)
		potencia*=x;
		
	for(int i=0;i<n;i++){
		num_factorial*=contador;
		contador++;
	}
	
	
	
	
	// Salida de datos
	cout << endl << "Potencia: " << potencia << endl;
	cout << "Factorial: " << num_factorial << endl;
	
	return(0);
	
}
