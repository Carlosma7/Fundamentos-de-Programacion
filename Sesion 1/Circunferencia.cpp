/***************************************************************************/
// FUNDAMENTOS DE PROGRAMACI�N
// GRADO EN INGENIER�A INFORM�TICA
//  
// CURSO 2015-2016
// (C) CARLOS MORALES AGUILERA
//
// RELACI�N DE PROBLEMAS V
// EJERCICIO 21
//
/*	 
	Realizar un programa que lea los coeficientes reales mu y sigma de una funci�n gaussiana
	(ver definici�n abajo). A continuaci�n el programa leer� un valor de abscisa x y se
	imprimir� el valor que toma la funci�n en x
	
	gaussiana(x)= (1/sigma*sqrt(2*PI))*pow(E,(pow((x-mu)/sigma),2)*(-1/2)))
	
	
	La funci�n gaussiana es muy importante en Estad�stica. Es una funci�n real de variable
	real en la que el par�metro mu se conoce como esperanza o media y sigma como
	desviaci�n t�pica.
	
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
