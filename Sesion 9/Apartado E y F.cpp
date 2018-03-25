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
	e) Constructor
	Modifique el programa principal del �ltimo apartado e imprima los valores de los
	datos miembros de una recta, antes de asignarles los coeficientes. Mostrar�, obviamente,
	un valor indeterminado. Para evitar este problema, a�ada un constructor
	a la recta para que el objeto est� en un estado v�lido en el mismo momento
	de su definici�n. El constructor deber� tener como par�metros, obligatoriamente,
	los tres coeficientes de la recta. Tendr� que modificar convenientemente el main
	para tener en cuenta este cambio.
	
	f ) Pol�tica de acceso a los datos miembro
	Suprima ahora el m�todo SetCoeficientes. De esta forma, una vez creado
	el objeto (pas�ndole los datos apropiados en el constructor) ya no podremos
	modificar los datos miembro. Esto es �til en aquellas situaciones en las que no
	queremos permitir que el estado del objeto cambie, una vez se ha creado.
	
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
		
		// Metodo que asigna los valores A , B y C a la recta
		void SetCoeficientes(double numero1, double numero2, double numero3){
			A=numero1;
			B=numero2;
			C=numero3;
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
		
		Recta(double numero1, double numero2, double numero3){
			A=numero1;
			B=numero2;
			C=numero3;
		}
};

int main(){
	
	double A1,B1,C1,A2,B2,C2,x1,y1;
	
	cout << "Introduzca coeficiente A de la primera recta: ";
	cin >> A1;
	
	cout << "Introduzca coeficiente B de la primera recta: ";
	cin >> B1;
	
	cout << "Introduzca coeficiente C de la primera recta: ";
	cin >> C1;
	
	cout << "Introduzca coeficiente A de la segunda recta: ";
	cin >> A2;
	
	cout << "Introduzca coeficiente B de la segunda recta: ";
	cin >> B2;
	
	cout << "Introduzca coeficiente C de la segunda recta: ";
	cin >> C2;
	
	
	Recta recta1(A1,B1,C1), recta2(A2,B2,C2);
	
	
	
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
