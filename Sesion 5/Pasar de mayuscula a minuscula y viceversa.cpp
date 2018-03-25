/***************************************************************************/
// FUNDAMENTOS DE PROGRAMACIÓN
// GRADO EN INGENIERÍA INFORMÁTICA
//  
// CURSO 2015-2016
// (C) CARLOS MORALES AGUILERA
//
// Sesión 4
// Ejercicio Pasar de mayúscula a minúscula y viceversa
//
/*	 
	Programa que debe imprimir en pantalla el valor de letra_convertida e indicar si la
	letra introducida era una minúscula, mayúscula o no era una carácter alfabético. No
	pueden usarse las funciones tolower ni toupper de la biblioteca cctype .
	
*/
/***************************************************************************/


#include <iostream>

using namespace std;

enum class Caracter{mayuscula, minuscula, no_letra};

int main(){
	
	// Declaración de variables
	char letra_original, letra_convertida;
	Caracter condicion;
	
	// Entrada de Datos
	cout << "Introduzca un caracter: ";
	cin >> letra_original;
	
	// Cómputos
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
