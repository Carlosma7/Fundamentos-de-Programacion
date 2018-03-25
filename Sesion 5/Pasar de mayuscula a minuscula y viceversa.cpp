/***************************************************************************/
// FUNDAMENTOS DE PROGRAMACI�N
// GRADO EN INGENIER�A INFORM�TICA
//  
// CURSO 2015-2016
// (C) CARLOS MORALES AGUILERA
//
// Sesi�n 4
// Ejercicio Pasar de may�scula a min�scula y viceversa
//
/*	 
	Programa que debe imprimir en pantalla el valor de letra_convertida e indicar si la
	letra introducida era una min�scula, may�scula o no era una car�cter alfab�tico. No
	pueden usarse las funciones tolower ni toupper de la biblioteca cctype .
	
*/
/***************************************************************************/


#include <iostream>

using namespace std;

enum class Caracter{mayuscula, minuscula, no_letra};

int main(){
	
	// Declaraci�n de variables
	char letra_original, letra_convertida;
	Caracter condicion;
	
	// Entrada de Datos
	cout << "Introduzca un caracter: ";
	cin >> letra_original;
	
	// C�mputos
	if((letra_original >= 'A') && (letra_original <= 'Z')){
		condicion = Caracter::mayuscula;
	}else{
		if((letra_original >= 'a') && (letra_original <= 'z')){
			condicion = Caracter::minuscula;
		}else{
			condicion = Caracter::no_letra;
		}
	}



	// Salida de datos
	if(condicion==Caracter::mayuscula){
		letra_convertida= letra_original + ('a'-'A');
	}
	
	if(condicion==Caracter::minuscula){
		letra_convertida = letra_original - ('a'-'A');
	}
	
	if(condicion==Caracter::no_letra){
		letra_convertida = letra_original;
	}
	
	cout << endl << "El caracter final es: " << letra_convertida << endl;
	
	return(0);
	
}
