/***************************************************************************/
// FUNDAMENTOS DE PROGRAMACI�N
// GRADO EN INGENIER�A INFORM�TICA
//  
// CURSO 2015-2016
// (C) CARLOS MORALES AGUILERA
//
// Sesi�n 6
// Ejercicio Factorial y Potencia
//
/*	 
	Calcular mediante un programa en C++ la funci�n potencia xn, y la funci�n factorial
	n! con n un valor entero y x un valor real. No pueden usarse las funciones de la
	biblioteca cmath.
	
	Para obligar a que el valor le�do de n sea positivo, implemente y llame a la funci�n
	int LeeEnteroPositivo()
	
*/
/***************************************************************************/

#include <iostream>
#include <cmath>

using namespace std;

// Funcion que se encarga de que los datos introducidos sean validos (positivos)
int LeeEnteroPositivo(){
	int n;
	
	do{
		cout << "Introduzca el valor para exponente y factorial, positivo (n): ";
		cin >> n;
	}while(n<=0);
	
	return n;
}

// Funcion que calcula la potencia de un numero
int Potencia(int base, int exponente){
	int potencia=1;
	
	for (int i=0;i<exponente;i++)
		potencia*=base;
		
	return potencia;
}

// Funcion que calcula el factorial de un numero
int Factorial(int numero_factorial){
	int num_factorial=1, contador=1;
	
	for(int i=0;i<numero_factorial;i++){
		num_factorial*=contador;
		contador++;
	}
	
	return num_factorial;
}

int main(){
	
	// Declaraci�n de variables
	int x, n, potencia, factorial;
	
	// Entrada de datos
	cout << "Introduzca la base (x): ";
	cin >> x;
	
	n= LeeEnteroPositivo();
	
	// C�mputos
	potencia = Potencia(x,n);
	factorial = Factorial(n);
	
	
	
	// Salida de datos
	cout << endl << "Potencia: " << potencia << endl;
	cout << "Factorial: " << factorial << endl;
	
	return(0);
	
}
