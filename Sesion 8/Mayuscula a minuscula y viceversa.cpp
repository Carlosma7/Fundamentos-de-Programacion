/***************************************************************************/
// FUNDAMENTOS DE PROGRAMACI�N
// GRADO EN INGENIER�A INFORM�TICA
//  
// CURSO 2015-2016
// (C) CARLOS MORALES AGUILERA
//
// Sesi�n 8
// Ejercicio May�scula a min�scula y viceversa
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

Caracter Capitalizacion(char caracter){
	Caracter condicion;
	
	if((caracter >= 'A') && (caracter <= 'Z')){
		condicion = Caracter::mayuscula;
	}else{
		if((caracter >= 'a') && (caracter <= 'z')){
			condicion = Caracter::minuscula;
		}else{
			condicion = Caracter::no_letra;
		}
	}
	
	return condicion;
}

char Convierte_a_Mayuscula(char letra_convertir){
	
	char letra_convertida=letra_convertir - ('a'-'A');
		
	return letra_convertida;
}


char Convierte_a_Minuscula(char letra_convertir){
	
	char letra_convertida= letra_convertir + ('a'-'A');
		
	return letra_convertida;
}

char CambiaMayusculaMinuscula(Caracter tipo, char letra_convertir){
	char letra_convertida;
	
	if(tipo==Caracter::mayuscula){
		letra_convertida=Convierte_a_Minuscula(letra_convertir);
	}else if(tipo==Caracter::minuscula){
		letra_convertida=Convierte_a_Mayuscula(letra_convertir);
	}
		
	return letra_convertida;
}



int main(){
	
	// Declaraci�n de variables
	char letra_original, letra_convertida;
	Caracter tipo;
	
	// Entrada de Datos
	cout << "Introduzca un caracter: ";
	cin >> letra_original;
	
	// C�mputos
	tipo=Capitalizacion(letra_original);

	letra_convertida=CambiaMayusculaMinuscula(tipo,letra_original);

	// Salida de datos
	
	
	cout << endl << "El caracter final es: " << letra_convertida << endl;
	
	return(0);
	
}
