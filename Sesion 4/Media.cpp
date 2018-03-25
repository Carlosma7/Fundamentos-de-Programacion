/***************************************************************************/
// FUNDAMENTOS DE PROGRAMACI�N
// GRADO EN INGENIER�A INFORM�TICA
//  
// CURSO 2015-2016
// (C) CARLOS MORALES AGUILERA
//
// Sesion 4
// Ejercicio Media
//
/*	 
	Escribid un algoritmo para calcular la media aritm�tica muestral y la desviaci�n est�ndar
	(o t�pica) muestral de las alturas de tres personas (n=3). �stos valores ser�n
	reales (de tipo double). La f�rmula general para un valor arbitrario de n es:
	
	x= (altura_1 + altura_2 + altura_3)/n
	
	sigma= sqrt(((pow(altura_1,2) + pow(altura_2,2) + pow(altura_3,2))/n)-pow(x,2))
	
	
	x representa la media aritm�tica y sigma la desviaci�n t�pica muestral. Para resolver este
	problema es necesario usar la funci�n sqrt (ra�z cuadrada) que se encuentra en la
	biblioteca cmath.

	Una vez calculada la media y la desviaci�n, el programa imprima por cada uno de los valores
	introducidos previamente, si est� por encima o por debajo de la media.
		
*/
/***************************************************************************/

#include <iostream>
#include <cmath>

using namespace std;

int main(){
	
	// Declaraci�n de variables
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
	
	// C�mputos
	media= (altura_1 + altura_2 + altura_3)/n;
	desviacion_tipica= sqrt(((pow(altura_1,2) + pow(altura_2,2) + pow(altura_3,2))/n)-pow(media,2));
	
	// Salida de datos
	cout << "El valor de la media aritmetica es: " << media << endl;
	cout << "El valor de la desviacion tipica es: " << desviacion_tipica << endl;
	
	// Comparaciones con la media
	if(altura_1 < media)
		cout << altura_1 << " es menor que la media." << endl;
	else{
		if(altura_1==media)
			cout << altura_1 << " es igual que la media." << endl;
		else
			cout << altura_1 << " es mayor que la media." << endl;
	}

	if(altura_2 < media)
		cout << altura_2 << " es menor que la media." << endl;
	else{
		if(altura_2==media)
			cout << altura_2 << " es igual que la media." << endl;
		else
			cout << altura_2 << " es mayor que la media." << endl;
	}

	if(altura_3 < media)
		cout << altura_3 << " es menor que la media." << endl;
	else{
		if(altura_3==media)
			cout << altura_3 << " es igual que la media." << endl;
		else
			cout << altura_3 << " es mayor que la media." << endl;
	}
	
	return(0);
	
}
