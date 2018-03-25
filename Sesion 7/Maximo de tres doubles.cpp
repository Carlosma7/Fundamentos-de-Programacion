/***************************************************************************/
// FUNDAMENTOS DE PROGRAMACIÓN
// GRADO EN INGENIERÍA INFORMÁTICA
//  
// CURSO 2015-2016
// (C) CARLOS MORALES AGUILERA
//
// Sesión 6
// Ejercicio Máximo de tres doubles
//
/*	 
	Cread una función que calcule el máximo entre tres double. La cabecera de la función
	será la siguiente:		double Max(double un_valor, double otro_valor, double el_tercero)

	Construid un programa principal que llame a dicha función con unos valores leídos
	desde teclado.
	
*/
/***************************************************************************/

#include <iostream>
#include <cmath>

using namespace std;


// Funcion Max que devuelve el maximo de tres valores double
double Max(double un_valor, double otro_valor, double el_tercero){
	double maximo;
	
	if((un_valor>=otro_valor) && (un_valor>=el_tercero)){
		maximo=un_valor;
	}else{
		if(otro_valor>=el_tercero)
			maximo=otro_valor;
		else
			maximo=el_tercero;
	}
	
	return maximo;
}

int main(){
	
	// Para solucionar el problema de intercambio necesitaremos una variable auxiliar.
	
	// Declaración de variables
	double numero_1, numero_2, numero_3, maximo;
	
	// Entrada de Datos
	cout << "Introduzca el valor del primer numero: ";
	cin >> numero_1;
	
	cout << "Introduzca el valor del segundo numero: ";
	cin >> numero_2;
	
	cout << "Introduzca el valor del tercer numero: ";
	cin >> numero_3;
	
	// Cómputos
	maximo=Max(numero_1,numero_2,numero_3);	//Llamada a la funcion Max(uno,otro,tercero)

	
	
	// Salida de datos
	cout << endl << "El maximo de los tres numeros es: " << maximo << endl << endl;
	
	
	
	return(0);
	
}
