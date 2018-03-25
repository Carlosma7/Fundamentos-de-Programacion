/***************************************************************************/
// FUNDAMENTOS DE PROGRAMACIÓN
// GRADO EN INGENIERÍA INFORMÁTICA
//  
// CURSO 2015-2016
// (C) CARLOS MORALES AGUILERA
//
// Sesión 9
// Ejercicio Recta
//
/*	 
	c) Datos miembro privados
	Cambie ahora los datos miembro públicos y póngalos privados. Tendrá que añadir
	métodos para asignar y ver los valores de los datos miembro. Añada métodos 
	para asignar un valor a cada uno de los tres datos miembro. Modifique el main
	para tener en cuenta estos cambios.
	
*/
/***************************************************************************/

#include <iostream>
#include <cmath>

using namespace std;

class Recta{
	private:
		double A;
		double B;
		double C;
		
		double x;
		double y;
		
	public:
		// Metodo que calcula la pendiente
		double CalculaPendiente(){
			double pendiente=-A/B;
			
			return pendiente;
		}
		
		// Metodo que obtiene la ordenada
		double ObtenerOrdenada(){
			y=(-C-(x*A))/B;
		}
		
		// Metodo que obtien la abscisa
		double ObtenerAbscisa(){
			x=(-C-(y*B))/A;
		}
		
		// Metodo que asigna valor A
		void SetA(double numero){
			A=numero;
		}
		
		// Metodo que asigna valor B
		void SetB(double numero){
			B=numero;
		}
		
		// Metodo que asigna valor C
		void SetC(double numero){
			C=numero;
		}
		
		// Metodo que asigna valor de abscisa
		void SetAbscisa(double numero){
			x=numero;
		}
		
		// Metodo que asigna valor de ordenada
		void SetOrdenada(double numero){
			y=numero;
		}	
			
		// Consultor de A
		double GetA(){
			return A;
		}
		
		// Consultor de B
		double GetB(){
			return B;
		}
		
		// Consultor de C
		double GetC(){
			return C;
		}
		
		// Consultor de abscisa
		double GetAbscisa(){
			return x;
		}
		
		// Consultor de ordenada
		double GetOrdenada(){
			return y;
		}
};

int main(){
	
	Recta recta1, recta2;
	int A1,B1,C1,A2,B2,C2,x1,y1;
	
	cout << "Introduzca coeficiente A de la primera recta: ";
	cin >> A1;
	
	recta1.SetA(A1);	//Inicializamos A de la recta 1
	
	cout << "Introduzca coeficiente B de la primera recta: ";
	cin >> B1;
	
	recta1.SetB(B1);	//Inicializamos B de la recta 1
	
	cout << "Introduzca coeficiente C de la primera recta: ";
	cin >> C1;
	
	recta1.SetC(C1);	//Inicializamos C de la recta 1
	
	cout << "Introduzca coeficiente A de la segunda recta: ";
	cin >> A2;
	
	recta2.SetA(A2);	//Inicializamos A de la recta 2
	
	cout << "Introduzca coeficiente B de la segunda recta: ";
	cin >> B2;
	
	recta2.SetB(B2);	//Inicializamos B de la recta 2
	
	cout << "Introduzca coeficiente C de la segunda recta: ";
	cin >> C2;
	
	recta2.SetC(C2);	//Inicializamos C de la recta 2
	
	
	
	cout << endl << endl << "Pendiente de la primera recta: " << recta1.CalculaPendiente();
	cout << endl << "Pendiente de la segunda recta: " << recta2.CalculaPendiente() << endl << endl;
	
	////////////////// ORDENADA Y ABSCISA ////////////////////////////
	cout << endl << "Introduzca la ordenada (y) para calcular su abscisa (x)= ";
	cin >> y1;
	
	recta1.SetOrdenada(y1);	//Inicializamos y de la recta 1
	
	cout << endl << "La ordenada (y)=" << recta1.GetOrdenada() << " tiene un valor de abscisa (x)=" << recta1.ObtenerAbscisa() << endl << endl;
	
	
	
	cout << "Introduzca la abscisa (x) para calcular su ordenada (y)= ";
	cin >> x1;
	
	recta1.SetAbscisa(x1);	//Inicializamos x de la recta 1
	
	cout << endl << "La abscisa (x)=" << recta1.GetAbscisa() << " tiene un valor de ordenada (y)=" << recta1.ObtenerOrdenada();
	
	cout << endl << endl;
	
	
	return 0;
}
