/*********************************************************************/
// FUNDAMENTOS DE PROGRAMACIÓN
// GRADO EN INGENIERÍA INFORMÁTICA
//
// CURSO 2015-2016
// (C) CARLOS MORALES AGUILERA
//
// Sesión 3
// Ejercicio Expresiones Lógicas
/*	
   Escribid una expresión lógica que sea verdadera si una variable de tipo carácter llamada
	letra es una letra minúscula y falso en otro caso.
	
	
	Escribid una expresión lógica que sea verdadera si una variable de tipo entero llamada
	edad es menor de 18 o mayor de 65.
	
	
	Escribid una expresión lógica que nos informe cuando un año es bisiesto. Los años
	bisiestos son aquellos que o bien son divisibles por 4 pero no por 100, o bien son
	divisibles por 400.
	
	
	Escribid un programa que lea las variables letra, edad y anio, calcule el valor de
	las expresiones lógicas anteriores e imprima el resultado. Tened en cuenta que cuando
	se imprime por pantalla (con cout) una expresión lógica que es true, se imprime 1. Si
	es false, se imprime un 0.
*/
/*********************************************************************/

#include <iostream>   // Inclusión de los recursos de E/S
#include <cctype>     // Inclusión de los recursos lógicos
#include <cmath>		 // Inclusión de los recursos matemáticos

using namespace std; 


int main() // Programa Principal
{                       
	bool condicion_letra;               	// Declara el valor true/false, indicando si se cumple que la letra introducida es minúscula.
	char letra;										// Declara el valor del carácter que se introduce, en este caso la letra minúscula.
	
	bool condicion_edad;               		// Declara el valor true/false, indicando si el año introducido es menor que 18 o mayor que 65.
	int edad;										// Declara el valor entero de la edad introducida.
	
	bool condicion_anio;               		// Declara el valor true/false, indicando si se cumple que la letra introducida es minúscula.
	int anio;										// Declara el valor entero del año introducido.
	
	

   // Entrada de datos
   cout << "Introduzca la letra en minúscula: " ;
   cin >> letra;
   
	cout << "Introduzca la edad en números: " ;
   cin >> edad;
   
   cout << "Introduzca el año: " ;
   cin >> anio;
   
	// Cálculos
		condicion_letra = ('a' <= letra) && (letra <= 'z');	// Se tienen que cumplor ambas.
		
		condicion_edad = (18 > edad) || (edad > 65);				// Se tiene que cumplir al menos una.
		
																				// Se tiene que cumplir al menos una.
		condicion_anio = (((anio%4==0) && !( anio%100==0)) || (anio%400==0)) ;
																		
	
	// Resultados
	cout << endl << "Tenemos en cuenta que 1 es Verdadero y 0 es Falso." << endl << endl;
	
	cout << "\nLa letra introducida es minúscula: " << condicion_letra << endl << endl ;
	
	cout << "\nLa edad es menor que 18 ó mayor que 65: " << condicion_edad << endl << endl ;
	
	cout << "\nEl anio es bisiesto: " << condicion_anio << endl << endl ;
   
   system ("pause");
	
	return (0);
}
 
