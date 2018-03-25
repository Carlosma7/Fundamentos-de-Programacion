/***************************************************************************/
// FUNDAMENTOS DE PROGRAMACI�N
// GRADO EN INGENIER�A INFORM�TICA
//  
// CURSO 2015-2016
// (C) CARLOS MORALES AGUILERA
//
// Sesi�n 2
// Ejercicio Fabricante
//
/*	 
	Las ganancias de un determinado producto se reparten entre el dise�ador y los tres
	fabricantes del mismo. Dise�ar un programa que pida la ganancia total de la empresa
	(los ingresos realizados con la venta del producto) y diga cu�nto cobran cada uno de
	ellos, sabiendo que el dise�ador cobra el doble que cada uno de los fabricantes. El
	dato de entrada ser� la ganancia total a repartir. Utilizad el tipo double para todas las
	variables.
	
*/
/***************************************************************************/

#include <iostream>
#include <cmath>

using namespace std;

int main(){
	
	// Declaraci�n de variables
	double ganancia_total, salario_fabricante, salario_diseniador;
	
	// Entrada de datos
	cout << "Introduzca la ganancia total de la empresa: ";
	cin >> ganancia_total;
	
	// C�mputos
	salario_fabricante= ganancia_total/5;
	
	salario_diseniador= salario_fabricante*2;
	
	// Salida de datos
	cout << "El salario de cada fabricante es de " << salario_fabricante;
	cout << " �, y el salario del diseniador es de " << salario_diseniador;
	cout << " �." << endl;
	
	
	return(0);
	
}
