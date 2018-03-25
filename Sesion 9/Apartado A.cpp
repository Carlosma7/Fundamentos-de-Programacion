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
	a) Definici�n de la clase y creaci�n de objetos
	Defina la clase Recta. En este apartado utilice �nicamente datos miembro p�blicos.
	Cree un programa principal que haga lo siguiente:
	 Defina dos objetos de la clase Recta.
	 Lea seis reales desde teclado.
	 Le asigne los tres primeros a los coeficientes de una recta y los otros tres a
	la segunda recta.
	 Calcule e imprima la pendiente de cada recta aplicando la f�rmula:
	pendiente = - A / B
	
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
	
	
	cout << endl << endl << "Pendiente de la primera recta: " << -recta1.A/recta1.B;
	cout << endl << "Pendiente de la segunda recta: " << -recta2.A/recta2.B << endl;
	
	
	return 0;
}
