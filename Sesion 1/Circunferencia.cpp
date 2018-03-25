/***************************************************************************/
// FUNDAMENTOS DE PROGRAMACIÓN
// GRADO EN INGENIERÍA INFORMÁTICA
//  
// CURSO 2015-2016
// (C) CARLOS MORALES AGUILERA
//
// RELACIÓN DE PROBLEMAS V
// EJERCICIO 21
//
/*	 
	Realizar un programa que lea los coeficientes reales mu y sigma de una función gaussiana
	(ver definición abajo). A continuación el programa leerá un valor de abscisa x y se
	imprimirá el valor que toma la función en x
	
	gaussiana(x)= (1/sigma*sqrt(2*PI))*pow(E,(pow((x-mu)/sigma),2)*(-1/2)))
	
	
	La función gaussiana es muy importante en Estadística. Es una función real de variable
	real en la que el parámetro mu se conoce como esperanza o media y sigma como
	desviación típica.
	
*/
/***************************************************************************/

#include <iostream>
#include <cmath>

using namespace std;

int main(){
	
	double mu,sigma,x, gaussiana;
	const double E= 2.718281828;
	const double PI= 3.1416;
	
	cout << "Introduzca el valor de 'mu': ";
	cin >> mu;
	
	cout << "Introduzca el valor de 'sigma': ";
	cin >> sigma;
	
	cout << "Introduzca el valor de 'x': ";
	cin >> x;
	
	
	gaussiana= (pow(E,(pow(((x-mu)/sigma),2)/-2.0)))/(sigma*sqrt(2*PI));
	
	cout << "El valor de la gaussiana es: " << gaussiana << endl;
	
	
	return(0);
	
}
