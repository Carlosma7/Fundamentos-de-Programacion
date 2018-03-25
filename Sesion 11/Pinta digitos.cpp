/***************************************************************************/
// FUNDAMENTOS DE PROGRAMACI�N
// GRADO EN INGENIER�A INFORM�TICA
//  
// CURSO 2015-2016
// (C) CARLOS MORALES AGUILERA
//
// Sesi�n 11
// Ejercicio Pinta d�gitos
//
/*	 
	Construya la funci�n con cabecera:

	string Digitos (int n)

	para que extraiga en un string los d�gitos del n�mero n tal y como se indica en el
	ejercicio 27 de la relaci�n de problemas II.
	
*/
/***************************************************************************/

#include <iostream>
#include <cstring>
#include <cmath>

using namespace std;

string Digitos (int n){
	int digito;
	int contador_digitos=0;
	int indice,resto;
	
	string resultado;	// Declaramos el string
	char caracter;
	
	digito= n;
	
	while(digito>0){
		digito=digito/10;
		contador_digitos++;
	}
	
	
	do{
		indice=pow(10,contador_digitos-1);
		digito=n/indice;
		resto=n%indice;
		
		contador_digitos--;
		n=resto;
		
		caracter='0'+digito;
		resultado=resultado + caracter;
	}while(contador_digitos>0);
	
	
	return resultado;
}

int main(){
	// Declaracion de variables
	int entero;
	string entero_string;
	
	//Entrada de datos
	cout << "Introduzca un entero: ";
	cin >> entero;
	
	
	entero_string=Digitos(entero);
	
	cout << endl << endl << "Se imprime el numero entero: " << entero_string << endl << endl;
	return(0);
}
