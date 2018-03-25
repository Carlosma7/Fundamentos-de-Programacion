/***************************************************************************/
// FUNDAMENTOS DE PROGRAMACIÓN
// GRADO EN INGENIERÍA INFORMÁTICA
//  
// CURSO 2015-2016
// (C) CARLOS MORALES AGUILERA
//
// Sesión 12
// Ejercicio Cuenta mayusculas
//
/*	 
	Construya un programa que vaya leyendo caracteres hasta que se encuentre un punto
	'.' y cuente el número de veces que aparece cada una de las letras mayúsculas.
	Imprimir el resultado.
	
*/
/***************************************************************************/

#include <iostream>
#include <cstring>

using namespace std;

int main(){
	// Declaracion de variables
	int contador_mayusculas [('Z'-'A'+1)];
	char letra;
	int indice;
	
	// Rellenamos el vector
	for(int i=0; i<('Z'-'A'); i++)
		contador_mayusculas[i]=0;
		
	// Entrada de datos
	cout << "Introduzca una secuencia de letras: ";
	cin >> letra;
	
	indice=0;
	for(char i='A'; i<='Z'; i++){
		if(i==letra)
			contador_mayusculas[indice]=contador_mayusculas[indice]+1;
		indice++;
	}
	
	while(letra!='.'){
		cin >> letra;
	
		indice=0;
		for(char i='A'; i<='Z'; i++){
			if(i==letra)
				contador_mayusculas[indice]=contador_mayusculas[indice]+1;
			indice++;
		}
	}
	
	// Contamos el nº de mayusculas que contiene el vector
	cout << endl << endl;
	char j='A';
	for(int i=0; i<('Z'-'A'+1) ;i++){
			cout << j << ": " << contador_mayusculas[i] << " veces." << endl;
			j++;
	}
			
	return 0;
}
