/*********************************************************************/
// FUNDAMENTOS DE PROGRAMACI�N
// GRADO EN INGENIER�A INFORM�TICA
//
// CURSO 2015-2016
// (C) CARLOS MORALES AGUILERA
//
// Sesi�n 3
// Ejercicio Expresiones L�gicas
/*	
   Escribid una expresi�n l�gica que sea verdadera si una variable de tipo car�cter llamada
	letra es una letra min�scula y falso en otro caso.
	
	
	Escribid una expresi�n l�gica que sea verdadera si una variable de tipo entero llamada
	edad es menor de 18 o mayor de 65.
	
	
	Escribid una expresi�n l�gica que nos informe cuando un a�o es bisiesto. Los a�os
	bisiestos son aquellos que o bien son divisibles por 4 pero no por 100, o bien son
	divisibles por 400.
	
	
	Escribid un programa que lea las variables letra, edad y anio, calcule el valor de
	las expresiones l�gicas anteriores e imprima el resultado. Tened en cuenta que cuando
	se imprime por pantalla (con cout) una expresi�n l�gica que es true, se imprime 1. Si
	es false, se imprime un 0.
*/
/*********************************************************************/

#include <iostream>   // Inclusi�n de los recursos de E/S
#include <cctype>     // Inclusi�n de los recursos l�gicos
#include <cmath>		 // Inclusi�n de los recursos matem�ticos

using namespace std; 


int main() // Programa Principal
{                       
	bool condicion_letra;               	// Declara el valor true/false, indicando si se cumple que la letra introducida es min�scula.
	char letra;										// Declara el valor del car�cter que se introduce, en este caso la letra min�scula.
	
	bool condicion_edad;               		// Declara el valor true/false, indicando si el a�o introducido es menor que 18 o mayor que 65.
	int edad;										// Declara el valor entero de la edad introducida.
	
	bool condicion_anio;               		// Declara el valor true/false, indicando si se cumple que la letra introducida es min�scula.
	int anio;										// Declara el valor entero del a�o introducido.
	
	

   // Entrada de datos
   cout << "Introduzca la letra en min�scula: " ;
   cin >> letra;
   
	cout << "Introduzca la edad en n�meros: " ;
   cin >> edad;
   
   cout << "Introduzca el a�o: " ;
   cin >> anio;
   
	// C�lculos
		condicion_letra = ('a' <= letra) && (letra <= 'z');	// Se tienen que cumplor ambas.
		
		condicion_edad = (18 > edad) || (edad > 65);				// Se tiene que cumplir al menos una.
		
																				// Se tiene que cumplir al menos una.
		condicion_anio = (((anio%4==0) && !( anio%100==0)) || (anio%400==0)) ;
																		
	
	// Resultados
	cout << endl << "Tenemos en cuenta que 1 es Verdadero y 0 es Falso." << endl << endl;
	
	cout << "\nLa letra introducida es min�scula: " << condicion_letra << endl << endl ;
	
	cout << "\nLa edad es menor que 18 � mayor que 65: " << condicion_edad << endl << endl ;
	
	cout << "\nEl anio es bisiesto: " << condicion_anio << endl << endl ;
   
   system ("pause");
	
	return (0);
}
 
