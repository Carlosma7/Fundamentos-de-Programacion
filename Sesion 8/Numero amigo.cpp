/***************************************************************************/
// FUNDAMENTOS DE PROGRAMACIÓN
// GRADO EN INGENIERÍA INFORMÁTICA
//  
// CURSO 2015-2016
// (C) CARLOS MORALES AGUILERA
//
// Sesión 8
// Ejercicio Numero Amigo
//
/*	 
	Dos números amigos son dos números naturales a y b,
	tales que la suma de los divisores propios de a más uno es igual a b, y viceversa. Un
	ejemplo de números amigos es el par de naturales (220; 284), ya que:
	
	 Los divisores propios de 220 son 2, 4, 5, 10, 11, 20, 22, 44, 55 y 110, que suman
	283, y 283 + 1 = 284.
	
	 Los divisores propios de 284 son 2, 4, 71 y 142, que suman 219, y 219 + 1 = 220.
	
*/
/***************************************************************************/

#include <iostream>
#include <cmath>

using namespace std;

int FiltroNaturales(){
	int n;
	
	do{
		cout << "Introduzca un numero natural (n>0): ";
		cin >> n;
		
	}while(n<=0);
	
	return n;
}

void CalculaNumeroAmigo(int a, int b){
	int contador_a=1, contador_b=1;
	int amigo_a=0, amigo_b=0;
		
	while(contador_a<a){
		if(a%contador_a==0)		// Comprobacion de que sea divisor
			amigo_a+=contador_a;	
		contador_a++;
	}
	
	amigo_a=amigo_a++;
	
	while(contador_b<b){
		if(b%contador_b==0)		// Comprobacion de que sea divisor
			amigo_b+=contador_b;	
		contador_b++;
	}
	
	amigo_b=amigo_b++;
	
	if((a==amigo_b) && (b==amigo_a))
		cout << endl << a << " y " << b << " son numeros amigos." << endl;
	else
		cout << endl << a << " y " << b << " no son numeros amigos." << endl;
}

int main(){
	
	// Declaración de variables
	int a,b;
	
	
	
	// Entrada de datos
	cout << "Inicializacion numero a ---> ";
	a=FiltroNaturales();
	cout << "Inicializacion numero b ---> ";
	b=FiltroNaturales();
	
	// Cómputos
	CalculaNumeroAmigo(a,b);
	
	
	
	return(0);
	
}
