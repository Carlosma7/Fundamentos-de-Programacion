/***************************************************************************/
// FUNDAMENTOS DE PROGRAMACI�N
// GRADO EN INGENIER�A INFORM�TICA
//  
// CURSO 2015-2016
// (C) CARLOS MORALES AGUILERA
//
// Sesi�n 9
// Ejercicio Recta
//
/*	 
	b) M�todos p�blicos
	En vez de calcular la pendiente en el programa principal, vamos a ponerlo como
	un m�todo de la clase y as� lo reutilizaremos todas las veces que necesitemos.
	A�ada un m�todo para el c�lculo de la pendiente y modificad el main para tener
	en cuenta este cambio.
	�A�adimos pendiente como dato miembro de la recta? La respuesta es que
	no �Por qu�?
	A�adir tambi�n los siguiente m�todos:
	 Obtener la ordenada (y) dado un valor de abscisa x, aplicando la f�rmula:
	(-C -xA) / B
	 Obtener la abscisa (x) dado un valor de ordenada y, aplicando la f�rmula:
	(-C -yB) / A
	En la funci�n main leed un valor de abscisa e imprimir la ordenada seg�n la recta
	y leed un valor de ordenada e imprimid la abscisa que le corresponde. Hacedlo
	s�lo con la primera recta.
	
*/
/***************************************************************************/

#include <iostream>
#include <cmath>

using namespace std;

class Recta{
	public:
		double A;
		double B;
		double C;
		
		double x;
		double y;
		
		double CalculaPendiente(){
			double pendiente=-A/B;
			
			return pendiente;
		}
		
		double ObtenerOrdenada(){
			y=(-C-(x*A))/B;
		}
		
		double ObtenerAbscisa(){
			x=(-C-(y*B))/A;
		}
};

int main(){
	
	Recta recta1, recta2;
	
	cout << "Introduzca coeficiente A de la primera recta: ";
	cin >> recta1.A;
	
	cout << "Introduzca coeficiente B de la primera recta: ";
	cin >> recta1.B;
	
	cout << "Introduzca coeficiente C de la primera recta: ";
	cin >> recta1.C;
	
	cout << "Introduzca coeficiente A de la segunda recta: ";
	cin >> recta2.A;
	
	cout << "Introduzca coeficiente B de la segunda recta: ";
	cin >> recta2.B;
	
	cout << "Introduzca coeficiente C de la segunda recta: ";
	cin >> recta2.C;
	
	cout << endl << endl << "Pendiente de la primera recta: " << recta1.CalculaPendiente();
	cout << endl << "Pendiente de la segunda recta: " << recta2.CalculaPendiente() << endl << endl;
	
	////////////////// ORDENADA Y ABSCISA ////////////////////////////
	cout << endl << "Introduzca la ordenada (y) para calcular su abscisa (x)= ";
	cin >> recta1.y;
	
	cout << endl << "La ordenada (y)=" << recta1.y << " tiene un valor de abscisa (x)=" << recta1.ObtenerAbscisa() << endl << endl;
	
	cout << "Introduzca la abscisa (x) para calcular su ordenada (y)= ";
	cin >> recta1.x;
	
	cout << endl << "La abscisa (x)=" << recta1.x << " tiene un valor de ordenada (y)=" << recta1.ObtenerOrdenada();
	
	cout << endl << endl;
	
	
	return 0;
}
