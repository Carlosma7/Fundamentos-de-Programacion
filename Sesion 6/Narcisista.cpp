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
	Un n�mero entero de n d�gitos se dice que es narcisista si se puede obtener como
	la suma de las potencias n-�simas de cada uno de sus d�gitos. Por ejemplo 153 y
	8208 son n�meros narcisistas porque 153 = 13 + 53 + 33 (153 tiene 3 d�gitos) y
	8208 = 8^4 +2^4 +0^4 +8^4 (8208 tiene 4 d�gitos).
	
	Construir un programa que, dado un n�mero entero positivo, nos indique si el 
	n�mero es o no narcisista.
	
*/
/***************************************************************************/

#include <iostream>
#include <cmath>

using namespace std;

int main(){
	
	// Declaraci�n de variables
	int entero, digitos, contador_digitos=0, total_digitos, resto, total_narcisista=0;
	int indice, inicial;
	bool es_narcisista=false;
	
	// Entrada de datos
	cout << "Introduzca un numero entero: ";
	cin >> entero;
	
	digitos=entero;
	inicial=entero;	//Salvamos el valor para la ultima comparacion
	
	// C�mputos
	while(digitos>0){
		digitos=digitos/10;
		contador_digitos++;
	}
	
	total_digitos=contador_digitos;
	
	do{
		indice=pow(10,contador_digitos-1);
		digitos=entero/indice;
		resto=entero%indice;
		
		
		total_narcisista+=pow(digitos,total_digitos);
		
		contador_digitos--;
		entero=resto;
	}while(contador_digitos>0);
	
	// Salida de datos
	if(inicial==total_narcisista)
		cout << endl << "El numero " << inicial << " es narcisista." << endl;
	else{
		cout << endl << "El numero " << inicial << " no es narcisista. " << inicial;
		cout << " distinto del resultado, que es " << total_narcisista << "." << endl;
	}
	
	
	return(0);
	
}
