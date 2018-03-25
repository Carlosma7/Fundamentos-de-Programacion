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
	Usamos una variable de tipo enumerado.
	
*/
/***************************************************************************/

#include <iostream>

using namespace std;

enum class Numeros: int {numero_1,numero_2, numero_3};

int main(){
	
	// Declaracion de variables
	Numeros numero1 = Numeros::numero_1;
	Numeros numero2 = Numeros::numero_2;
	Numeros numero3 = Numeros::numero_3;
	
	
	// C�mputos
	if((numero1<=numero2) && (numero2<=numero3)){
		cout << endl << "Los numeros estan ordenados de forma ascendente." << endl;
	}else{
		if((numero1>=numero2)&&(numero2>=numero3))
			cout << endl << "Los numeros estan ordenados de forma descendente." << endl;
		else
			cout << endl << "Los numeros no estan ordenados." << endl;
	}
	
	
	return(0);
	
}
