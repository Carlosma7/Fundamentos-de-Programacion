/***************************************************************************/
// FUNDAMENTOS DE PROGRAMACI�N
// GRADO EN INGENIER�A INFORM�TICA
//  
// CURSO 2015-2016
// (C) CARLOS MORALES AGUILERA
//
// Sesi�n 6
// Ejercicio Narcisista
//
/*	 
	Se dice que un n�mero es triangular si se puede poner como la suma de los primeros
	m valores enteros, para alg�n valor de m. Por ejemplo, 6 es triangular ya que 6 = 1 +
	2 + 3. Se pide construir un programa que obtenga todos los n�meros triangulares que
	hay menores que un entero tope introducido desde teclado.
	
*/
/***************************************************************************/

#include <iostream>
#include <cmath>

using namespace std;

int main(){
	
	// Declaraci�n de variables
	int contador_triangulo=0;
	int tope;
	
	// Entrada de datos
	cout << endl << "Introduzca un tope: ";
	cin >> tope;
	
	
	// C�mputos y salidas
	cout << "Los numeros triangulares desde 1 hasta " << tope << " son:" << endl << endl;
	
	for(int i=1; i<=tope; i++){
		for(int j=1; contador_triangulo<i;j++){
			contador_triangulo+= j;
			
			if(contador_triangulo==i)
				cout << contador_triangulo << endl;
		}
		
		contador_triangulo=0;
		
		
	}
	
	cout << endl << endl;
	
	
	return(0);
	
}
