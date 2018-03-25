/***************************************************************************/
// FUNDAMENTOS DE PROGRAMACIÓN
// GRADO EN INGENIERÍA INFORMÁTICA
//  
// CURSO 2015-2016
// (C) CARLOS MORALES AGUILERA
//
// Sesión 10
// Ejercicio Gaussiana
//
/*	 
	En el ejercicio 7 de esta relación de problemas se definieron varias funciones para
	operar sobre una progresión geométrica. Definid ahora una clase para representar
	una Gaussiana.
	
	Clase que representa una Gaussiana
	
*/
/***************************************************************************/

#include <iostream>
#include <cstring>
#include <cmath>

using namespace std;

class Gaussiana{
	private:
		// Atributos de la clase
		double mu,sigma,x;
		const double E= 2.718281828;
		const double PI= 3.1416;
		
	public:
		// Constructor de la clase
		Gaussiana(double mu_g, double sigma_g){
			mu=mu_g;
			sigma=sigma_g;
		}
		
		// Método que calcula la Gaussiana de un valor x
		double Gaussiana_un_valor(double x){
			double resultado;
			
			resultado= (pow(E,(pow(((x-mu)/sigma),2)/-2.0)))/(sigma*sqrt(2*PI));
			
			return resultado;
		}
		
		// Método que calcula la función CDF de un valor x
		int CDF(double x){
			double resultado;
			const double b0 = 0.2316419, b1 = 0.319381530, b2 = 0.356563782, b3 = 1.781477937, b4 = 1.821255978, b5 = 1.330274429;
			const double t=1/(1*(b0*x));
			
			resultado=1-Gaussiana_un_valor(x)*((b1*t) + (b2*pow(t,2)) + (b3*pow(t,3)) + (b4*pow(t,4)) + (b5*pow(t,5)));
			
			return resultado;
		
		}
		
		// Método que calcula la Gaussiana de varios valores
		void Gaussiana_varios_valores(){
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
				
				cdf=CDF(x);
				
				cout << "La funcion CDF para la abscisa " << x << " es " << cdf << endl << endl;
			}
			
		}
		
};

int main(){
	// Declaracion de variables
	double mu, sigma;
	
	// Entrada de datos
	cout << "Introduzca el valor de esperanza: ";
	cin >> mu;
	
	cout << "Introduzca el valor de desviacion: ";
	cin >> sigma;
	
	// Creamos el objeto Gaussiana con los valores mu y sigma dados
	Gaussiana mi_gaussiana(mu,sigma);
	
	// Cómputos y Salida de datos en el método de la clase
	mi_gaussiana.Gaussiana_varios_valores();
	
	return 0;
}
