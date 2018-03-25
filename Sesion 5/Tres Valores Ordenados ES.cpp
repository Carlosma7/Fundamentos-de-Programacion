/***************************************************************************/
// FUNDAMENTOS DE PROGRAMACI�N
// GRADO EN INGENIER�A INFORM�TICA
//  
// CURSO 2015-2016
// (C) CARLOS MORALES AGUILERA
//
// Sesi�n 4
// Ejercicio Tres Valores Ordenadors
//
/*	 
	Programa en C++ para que lee tres enteros desde teclado y nos dice si
	est�n ordenados (da igual si es de forma ascendente o descendente) o no lo est�n.
	
*/
/***************************************************************************/

#include <iostream>

using namespace std;

int main(){
	
	// Para solucionar el problema de intercambio necesitaremos una variable auxiliar.
	
	// Declaraci�n de variables
	int numero_1, numero_2, numero_3;
	bool ordenados=false;
	
	// Entrada de Datos
	cout << "Introduzca el valor del primer numero: ";
	cin >> numero_1;
	
	cout << "Introduzca el valor del segundo numero: ";
	cin >> numero_2;
	
	cout << "Introduzca el valor del tercer numero: ";
	cin >> numero_3;
	
	// C�mputos
	if(((numero_1<=numero_2) && (numero_2<=numero_3)) || ((numero_1>=numero_2)&&(numero_2>=numero_3)))
		ordenados=true;	
	
	// Salida de datos
	if(ordenados)
		cout << endl << "Los numeros estan ordenados." << endl;
	else
		cout << endl << "Los numeros estan desordenados." << endl;
		
	cout << endl << numero_1 << " " << numero_2 << " " <<numero_3 << endl;
	
	
	
	return(0);
	
}
