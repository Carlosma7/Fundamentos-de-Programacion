/***************************************************************************/
// FUNDAMENTOS DE PROGRAMACIÓN
// GRADO EN INGENIERÍA INFORMÁTICA
//  
// CURSO 2015-2016
// (C) CARLOS MORALES AGUILERA
//
// Sesión 4
// Ejercicio Subir Sueldo
//
/*	 
	Programa que lee el valor de la edad (dato de tipo entero) y salario (dato de
	tipo real) de una persona. Subid el salario un 5% si éste es menor de 300 euros y la
	persona es mayor de 65 años.
	
*/
/***************************************************************************/

#include <iostream>
#include <cmath>

using namespace std;

int main(){
	
	// Declaración de variables
	int edad;
	double salario;
	
	// Entrada de datos
	cout << "Introduzca la edad de la persona: ";
	cin >> edad;
	cout << "Introduzca el salario de la persona: ";
	cin >> salario;
	
	// Cómputos
	if((salario<300)&&(edad>65)){
		salario+= salario*0.05;
		cout << endl << "Se aplica la subida de sueldo." << endl;
	}else{
		cout << endl << "No es aplicable la subida." << endl;
	}
	
	
	
	// Salida de datos
	cout << endl << "El salario de final es: " << salario << " euros." << endl;
	
	
	return(0);
	
}
