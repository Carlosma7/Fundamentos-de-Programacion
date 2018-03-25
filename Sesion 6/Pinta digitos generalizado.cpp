/***************************************************************************/
// FUNDAMENTOS DE PROGRAMACIÓN
// GRADO EN INGENIERÍA INFORMÁTICA
//  
// CURSO 2015-2016
// (C) CARLOS MORALES AGUILERA
//
// Sesión 6
// Ejercicio Pinta Dígitos generalizado
//
/*	 
	Programa que lea un valor arbitrario y lo divida en digitos monstrandolos por
	pantalla con un espacio en blanco entre cada digito. Por ejemplo, si el
	número es 3519, la salida sería:	3 5 1 9
	
*/
/***************************************************************************/

#include <iostream>
#include <cmath>

using namespace std;


int main(){
	
	// Declaracion de variables
	int entero,digito;
	int contador_digitos=0;
	int indice,resto;
	
	//Entrada de datos
	cout << "Introduzca un entero: ";
	cin >> entero;
	
	digito= entero;
	
	// Cómputos
	while(digito>0){
		digito=digito/10;
		contador_digitos++;
	}
	
	cout << "Numero de digitos: " << contador_digitos << endl;
	
	
	do{
		indice=pow(10,contador_digitos-1);
		digito=entero/indice;
		resto=entero%indice;
		
		contador_digitos--;
		entero=resto;
		cout << digito << " ";
	}while(contador_digitos>0);
	
	
	return(0);
	
}
