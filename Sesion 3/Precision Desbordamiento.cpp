/*********************************************************************/
// FUNDAMENTOS DE PROGRAMACIÓN
// GRADO EN INGENIERÍA INFORMÁTICA
//
// CURSO 2015-2016
// (C) CARLOS MORALES AGUILERA
//
// Sesión 3
// Ejercicio Precisión desbordamiento
/*	
   Programa que indique si se produce un problema de precisión o de desbordamiento en los siguientes
	ejemplos indicando cuál sería el resultado final de las operaciones.
   Entrada:  Los dos números. 
   Salida: La respuesta que indique si se cumple la condición o no.
*/
/*********************************************************************/

#include <iostream>   // Inclusión de los recursos de E/S
#include <cmath>		 // Inclusión de los recursos matemáticos

using namespace std; 


int main() // Programa Principal
{                       


	/*************************************** APARTADO A) ****************************************/
	
	int chico, chico1, chico2;
	chico1 = 123456789;
	chico2 = 123456780;
	
	// Cálculo
	chico = chico1 * chico2;
	
	cout << "\nApartado a)" << chico << " Se produce un problema de desbordamiento\n";
	
	/* Se produce un error de desbordamiento, ya que el número se sale del rango de los números enteros
	con la función int. El resultado ha de ser 1,524157763907942e+16 */
	
	/*************************************** APARTADO B) ****************************************/
	
	long grande; 
	
	// Cálculo
	grande = chico1 * chico2;
	
	cout << "\nApartado b)" << grande << " Se produce un problema de desbordamiento\n";
	
	/* Se produce un error de desbordamiento, ya que el número se sale del rango de los números enteros
	con la función long. El resultado ha de ser 1,524157763907942e+16 */
	
	/************************************** APARTADO C) ****************************************/
	
	double resultado;
	double real1 = 123.1;
	double real2 = 124.2;
	
	// Cálculo
	resultado =  real1 * real2;
	
	cout << "\nApartado c)" << resultado << " Se produce un problema de precisión\n";
	
	/* Se produce un error de precisión, ya que la parte real de la variable "real1" (0.1) no se puede
	representar por la suma de potencias de forma exacta, por lo que se almacena un valor redondeado*/
	
	/************************************** APARTADO D) ****************************************/
	
	double resultado_d;
	double real1_d = 123456789.1;
	double real2_d = 123456789.2;
	
	// Cálculo
	resultado_d =  real1_d * real2_d;
	
	cout << "\nApartado d)" << resultado_d << " Se produce un problema de precisión\n";
	
	/* Se produce un error de precisión, ya que no nos muestra todas las cifras del resultado_c,
	sino que el programa emplea la notación científica.*/
	
	/************************************** APARTADO E) ****************************************/
	
	double real = 2e34;
	double otro_real = real + 1;
	double otro_real_2 = otro_real - real;
	
	cout << "\nApartado e)" << otro_real_2 << " Se produce un problema de precisión\n\n";
	
	/* Se produce un error de precisión, ya que el resultado debería ser de 1, pero es 0. Se debe 
	a los redondeos que se producen al trabajar con valores reales tan grandes como la variable "real_d"*/
	
	/************************************** APARTADO F) ****************************************/
	
	double real_f = 1e+300;
	double otro_real_f = 1e+200;
	
	otro_real_f = otro_real_f * real_f;
	
	cout << "\nApartado f)" << otro_real_f << " Se produce un problema de precisión\n\n";
	
	/* Se produce un error de precisión, ya que el resultado debería ser de 1, pero es 0. Se debe 
	a los redondeos que se producen al trabajar con valores reales tan grandes como la variable "real_d"*/
	
   
   system ("pause");
	
	return (0);
};
