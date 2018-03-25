/***************************************************************************/
// FUNDAMENTOS DE PROGRAMACIÓN
// GRADO EN INGENIERÍA INFORMÁTICA
//  
// CURSO 2015-2016
// (C) CARLOS MORALES AGUILERA
//
// Sesión 4
// Ejercicio Tres Valores Ordenadors
//
/*	 
	Programa en C++ para que lee tres enteros desde teclado y nos dice si
	están ordenados (da igual si es de forma ascendente o descendente) o no lo están.
	
*/
/***************************************************************************/

#include <iostream>
#include <cmath>

using namespace std;

int main(){
	
	// Para solucionar el problema de intercambio necesitaremos una variable auxiliar.
	
	// Declaración de variables
	int numero_1, numero_2, numero_3;
	
	// Entrada de Datos
	cout << "Introduzca el valor del primer numero: ";
	cin >> numero_1;
	
	cout << "Introduzca el valor del segundo numero: ";
	cin >> numero_2;
	
	cout << "Introduzca el valor del tercer numero: ";
	cin >> numero_3;
	
	// Cómputos
	if((numero_1<=numero_2) && (numero_2<=numero_3)){
		cout << endl << "Los numeros estan ordenados en orden ascendente." << endl;
	}else{
		if((numero_3<=numero_2) && (numero_2<=numero_1))
			cout << endl << "Los numeros estan ordenados en orden descendente." << endl;
		else
			cout << endl << "Los numeros no estan ordenados." << endl;
	}

	
	
	// Salida de datos
		cout << endl << numero_1 << " " << numero_2 << " " <<numero_3 << endl;
	
	
	
	return(0);
	
}
