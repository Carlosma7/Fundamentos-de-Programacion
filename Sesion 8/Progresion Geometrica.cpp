/***************************************************************************/
// FUNDAMENTOS DE PROGRAMACIÓN
// GRADO EN INGENIERÍA INFORMÁTICA
//  
// CURSO 2015-2016
// (C) CARLOS MORALES AGUILERA
//
// Sesión 8
// Ejercicio Progresion Geometrica
//
/*	 
	a) Una función SumaHasta que calcule la suma de los primeros k valores de una
	progresión geométrica.
	Para implementarla, use el mismo algoritmo (con un bucle for) que se vio como
	solución del ejercicio 36 de la relación de problemas II.
	
	
	b) Una función ProductoHasta para que multiplique los k primeros elementos de
	la progresión, aplicando la siguiente fórmula:
	
*/
/***************************************************************************/

#include <iostream>
#include <cmath>

using namespace std;

int SumaHasta(int ai, int r, int k){
	int progresion=0;
	int a_actual;
	
	for (int i=1; i<=k; i++){	//ai+1 = ai * r
		a_actual=ai*r;
		progresion+=a_actual;
		
		ai=a_actual;
	}
	
	return progresion;
}

int ProductoHasta(int ai,int r, int k){
	int producto;
	int ak,ai_bucle=ai;
	
	for(int i=1; i<=k;i++){
		ak=ai_bucle*r;
		
		ai_bucle=ak;
	}
	
	
	producto=sqrt(pow(ai*ak,k));
	
	return producto;
}

int main(){
	
	// Declaración de variables
	int r, k, ai,a_actual, progresion, producto;
	
	// Entrada de datos
	cout << "Introduzca el primer elemento a1: ";
	cin >> ai;
	cout << "Introduzca la razon de la progresion r: ";
	cin >> r;
	cout << "Introduzca el tope k: ";
	cin >> k;
	
	
	// Cómputos
	progresion=SumaHasta(ai,r,k);
	
	producto=ProductoHasta(ai,r, k);
	
	// Salida de datos
	cout << "El resultado de la progresion geometrica es: " << progresion << endl;
	cout << "El resultado del producto es: " << producto << endl << endl;
	
	
	return(0);
	
}
