/***************************************************************************/
// FUNDAMENTOS DE PROGRAMACIÓN
// GRADO EN INGENIERÍA INFORMÁTICA
//  
// CURSO 2015-2016
// (C) CARLOS MORALES AGUILERA
//
// RELACIÓN DE PROBLEMAS V
// Ejercicio Media aritmética y desciavión típica
//
/*	 
	Escribid un algoritmo para calcular la media aritmética muestral y la desviación estándar
	(o típica) muestral de las alturas de tres personas (n=3). Éstos valores serán
	reales (de tipo double). La fórmula general para un valor arbitrario de n es:
	
	x= (altura_1 + altura_2 + altura_3)/n
	
	sigma= sqrt(((pow(altura_1,2) + pow(altura_2,2) + pow(altura_3,2))/n)-pow(x,2))
	
	
	x representa la media aritmética y sigma la desviación típica muestral. Para resolver este
	problema es necesario usar la función sqrt (raíz cuadrada) que se encuentra en la
	biblioteca cmath.
		
*/
/***************************************************************************/

#include <iostream>
#include <cmath>

using namespace std;

int main(){
	
	// Declaración de variables
	double altura_1, altura_2, altura_3;
	double media, desviacion_tipica;
	const int n=3;
	
	// Entrada de Datos
	cout << "Introduzca la primera altura en cm: ";
	cin >> altura_1;
	
	cout << "Introduzca la segunda altura en cm: ";
	cin >> altura_2;
	
	cout << "Introduzca la tercera altura en cm: ";
	cin >> altura_3;
	
	// Cómputos
	media= (altura_1 + altura_2 + altura_3)/n;
	
	desviacion_tipica= sqrt(((pow(altura_1,2) + pow(altura_2,2) + pow(altura_3,2))/n)-pow(media,2));
	
	// Salida de datos
	cout << "El valor de la media aritmetica es: " << media << endl;
	cout << "El valor de la desviacion tipica es: " << desviacion_tipica << endl;
	
	
	return(0);
	
}
