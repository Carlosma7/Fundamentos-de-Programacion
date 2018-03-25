/*********************************************************************/
// FUNDAMENTOS DE PROGRAMACI�N
// GRADO EN INGENIER�A INFORM�TICA
//
// CURSO 2015-2016
// (C) CARLOS MORALES AGUILERA
//
// Sesi�n 8
// Ejercicio Gaussiana
//
/*	 
	En el ejercicio 12 de la relaci�n de problemas I (p�gina RP-I.4) se vio c�mo obtener el
	valor de ordenada asignado por la funci�n gaussiana, sabiendo el valor de abscisa x.
	Recordemos que esta funci�n matem�tica depend�a de dos par�metros  (esperanza)
	y  (desviaci�n) y ven�a definida.
	
	Cread un programa que lea un valor de esperanza y desviaci�n y a continuaci�n lea
	un n�mero entero n que indique el n�mero de abscisas que se van a procesar. Leed
	un total de n valores reales e imprimid en pantalla el valor de la funci�n gaussiana en
	dichos valores. El c�mputo de la gaussiana debe hacerse en una funci�n.
	
	Ahora estamos interesados en obtener el �rea que cubre la funci�n en el intervalo
	[..1; x]. Dicho valor se conoce como la distribuci�n acumulada (cumulative distribution
	function) en el punto x, abreviado CDF(x). Matem�ticamente se calcula realizando
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
