/***************************************************************************/
// FUNDAMENTOS DE PROGRAMACIÓN
// GRADO EN INGENIERÍA INFORMÁTICA
//  
// CURSO 2015-2016
// (C) CARLOS MORALES AGUILERA
//
// Sesión 2
// Ejercicio Fabricante
//
/*	 
	Las ganancias de un determinado producto se reparten entre el diseñador y los tres
	fabricantes del mismo. Diseñar un programa que pida la ganancia total de la empresa
	(los ingresos realizados con la venta del producto) y diga cuánto cobran cada uno de
	ellos, sabiendo que el diseñador cobra el doble que cada uno de los fabricantes. El
	dato de entrada será la ganancia total a repartir. Utilizad el tipo double para todas las
	variables.
	
*/
/***************************************************************************/

#include <iostream>
#include <cmath>

using namespace std;

int main(){
	
	// Declaración de variables
	double ganancia_total, salario_fabricante, salario_diseniador;
	
	// Entrada de datos
	cout << "Introduzca la ganancia total de la empresa: ";
	cin >> ganancia_total;
	
	// Cómputos
	salario_fabricante= ganancia_total/5;
	
	salario_diseniador= salario_fabricante*2;
	
	// Salida de datos
	cout << "El salario de cada fabricante es de " << salario_fabricante;
	cout << " €, y el salario del diseniador es de " << salario_diseniador;
	cout << " €." << endl;
	
	
	return(0);
	
}
