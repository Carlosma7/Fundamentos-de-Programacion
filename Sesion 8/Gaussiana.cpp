/*********************************************************************/
// FUNDAMENTOS DE PROGRAMACIÓN
// GRADO EN INGENIERÍA INFORMÁTICA
//
// CURSO 2015-2016
// (C) CARLOS MORALES AGUILERA
//
// Sesión 8
// Ejercicio Gaussiana
//
/*	 
	En el ejercicio 12 de la relación de problemas I (página RP-I.4) se vio cómo obtener el
	valor de ordenada asignado por la función gaussiana, sabiendo el valor de abscisa x.
	Recordemos que esta función matemática dependía de dos parámetros  (esperanza)
	y  (desviación) y venía definida.
	
	Cread un programa que lea un valor de esperanza y desviación y a continuación lea
	un número entero n que indique el número de abscisas que se van a procesar. Leed
	un total de n valores reales e imprimid en pantalla el valor de la función gaussiana en
	dichos valores. El cómputo de la gaussiana debe hacerse en una función.
	
	Ahora estamos interesados en obtener el área que cubre la función en el intervalo
	[..1; x]. Dicho valor se conoce como la distribución acumulada (cumulative distribution
	function) en el punto x, abreviado CDF(x). Matemáticamente se calcula realizando
	la integral.
	
*/
/***************************************************************************/

#include <iostream>
#include <cmath>

using namespace std;

double Gaussiana_un_valor(double x, double mu, double sigma, double E, double PI){
	double resultado;
	
	resultado= (pow(E,(pow(((x-mu)/sigma),2)/-2.0)))/(sigma*sqrt(2*PI));
	
	return resultado;
}

int CDF(double x, double mu, double sigma, double E, double PI){
	double resultado;
	const double b0 = 0.2316419, b1 = 0.319381530, b2 = 0.356563782, b3 = 1.781477937, b4 = 1.821255978, b5 = 1.330274429;
	const double t=1/(1*(b0*x));
	
	resultado=1-Gaussiana_un_valor(x, mu, sigma,E,PI )*((b1*t) + (b2*pow(t,2)) + (b3*pow(t,3)) + (b4*pow(t,4)) + (b5*pow(t,5)));
	
	return resultado;

}

void Gaussiana_varios_valores(double mu, double sigma, double E, double PI){
	double resultado,cdf;
	double x;
	int veces;
	
	cout << "Introduzca cuantos valores desea calcular: ";
	cin >> veces;
	
	cout << endl << endl;
	
	for(int i=1; i<=veces;i++){
		cout << "Introduzca el valor de abscisa 'x': ";
		cin >> x;
		
		resultado= (pow(E,(pow(((x-mu)/sigma),2)/-2.0)))/(sigma*sqrt(2*PI));
		
		cout << "La gaussiana para la abscisa " << x << " es " << resultado << endl;
		
		cdf=CDF(x,mu,sigma,E,PI);
		
		cout << "La funcion CDF para la abscisa " << x << " es " << cdf << endl << endl;
	}
	
}

int main(){
	
	//Declaracion de variables
	double mu,sigma,x;
	const double E= 2.718281828;
	const double PI= 3.1416;
	
	//Entrada de datos
	cout << "Introduzca el valor de esperanza: ";
	cin >> mu;
	
	cout << "Introduzca el valor de desviacion: ";
	cin >> sigma;
	
	//Computos
	Gaussiana_varios_valores(mu,sigma,E,PI);
	
	return(0);
	
}
