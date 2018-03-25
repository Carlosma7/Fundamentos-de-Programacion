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
	g) Métodos privados
	Añada un método privado que nos indique si los coeficientes son correctos, es
	decir, A y B no pueden ser simultáneamente nulos. Llame a este método en el
	constructor y en el método SetCoeficientes y realice las operaciones que
	estime oportuno en el caso de que los coeficientes pasados como parámetros no
	sean correctos.
	
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
		
		// Metodo que sirve de Filtro de coeficientes
		bool CoeficientesValidos(double numero1, double numero2){
			bool validos=true;
			
			if((numero1==0) && (numero2==0))
				validos =false;
				
			return validos;
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
			
			if(!CoeficientesValidos(A,B)){
				do{
					cout << endl << "Introduzca unos coeficientes A y B validos." << endl;
					cout << "Introduzca A:";
					cin >> A;
					
					cout << "Introduzca B:";
					cin >> B;
				}while(!CoeficientesValidos(A,B));
			}
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
			
			if(!CoeficientesValidos(A,B)){
				do{
					cout << endl << "Introduzca unos coeficientes A y B validos." << endl;
					cout << "Introduzca A:";
					cin >> A;
					
					cout << "Introduzca B:";
					cin >> B;
				}while(!CoeficientesValidos(A,B));
			}
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
	
	Recta recta1(A1,B1,C1);
	
	cout << endl << endl;
	
	cout << "Introduzca coeficiente A de la segunda recta: ";
	cin >> A2;
	
	cout << "Introduzca coeficiente B de la segunda recta: ";
	cin >> B2;
	
	cout << "Introduzca coeficiente C de la segunda recta: ";
	cin >> C2;
	
	
	Recta recta2(A2,B2,C2);
	
	
	
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
