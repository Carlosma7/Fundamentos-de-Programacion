/***************************************************************************/
// FUNDAMENTOS DE PROGRAMACIÓN
// GRADO EN INGENIERÍA INFORMÁTICA
//  
// CURSO 2015-2016
// (C) CARLOS MORALES AGUILERA
//
// Sesión 6
// Ejercicio Numero combinatorio
//
/*	 
	Calcular mediante un programa en C++ el combinatorio (n)
														 (m)
	con n, m valores enteros. No pueden usarse las funciones
	de la biblioteca cmath.
	
*/
/***************************************************************************/

#include <iostream>

using namespace std;

int LeeEnteroPositivo(){
	int n;
	
	do{
		cout << "Introduzca el valor para factorial, positivo: ";
		cin >> n;
	}while(n<=0);
	
	cout << endl;
	
	return n;
}

int main(){
	
	// Declaración de variables
	int n, contador_n=1, factorial_n=1;
	int m, contador_m=1, factorial_m=1;
	int contador_resta=1, factorial_resta=1, combinatoria;
	
	// Entrada de datos	
	cout << "Introduccion de valor n: " << endl;
	n= LeeEnteroPositivo();
	cout << "Introduccion de valor m: " << endl;
	m= LeeEnteroPositivo();
	
	// Cómputos		
	for(int i=0;i<n;i++){
		factorial_n*=contador_n;
		contador_n++;
	}
	
	for(int i=0;i<m;i++){
		factorial_m*=contador_m;
		contador_m++;
	}
	
	for(int i=0;i<(n-m);i++){
		factorial_resta*=contador_resta;
		contador_resta++;
	}
	
	
	combinatoria=factorial_n/(factorial_m*factorial_resta);
	
	// Salida de datos
	cout << endl << "Combinatoria: " << combinatoria << endl;
	
	return(0);
	
}
