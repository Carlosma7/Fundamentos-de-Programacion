/***************************************************************************/
// FUNDAMENTOS DE PROGRAMACI�N
// GRADO EN INGENIER�A INFORM�TICA
//  
// CURSO 2015-2016
// (C) CARLOS MORALES AGUILERA
//
// Sesi�n 12
// Ejercicio Clase Contador de mayusculas
//
/*	 
	Sobre el ejercicio 10, construya una clase espec�fica ContadorMayusculas que
	implemente los m�todos necesarios para llevar el contador de las may�sculas. Lo que
	se pretende es que la clase proporcione los m�todos siguientes:
	
	void IncrementaConteo (char mayuscula)
	int CuantasHay (char mayuscula)
	
	El primer m�todo aumentar� en uno el contador de la correspondiente may�scula y el
	segundo indicar� cu�ntas hay. Modifique el programa principal para que cree un objeto
	de esta clase y llame a sus m�todos para realizar los conteos de las may�sculas.
	Finalmente, hay que imprimir en pantalla cu�ntas veces aparece cada may�scula.
	
*/
/***************************************************************************/

#include <iostream>
#include <cstring>

using namespace std;

class ContadorMayusculas{
	private:
		int contador_mayusculas [('Z'-'A'+1)];
		
	public:
		ContadorMayusculas(){
			// Rellenamos el vector
			for(int i=0; i<('Z'-'A'); i++)
				contador_mayusculas[i]=0;
		}
		
		void IncrementaConteo (char mayuscula){
			int indice=0;
			
			for(char i='A'; i<='Z'; i++){
				if(i==mayuscula)
					contador_mayusculas[indice]=contador_mayusculas[indice]+1;
				indice++;
			}
		}
		
		int CuantasHay (char mayuscula){
			char j='A';
			for(int i=0; i<('Z'-'A'+1) ;i++){
				if(j==mayuscula)
					cout << mayuscula << ": " << contador_mayusculas[i] << " veces." << endl;
				j++;
			}
		}
};

int main(){
	// Declaracion de variables
	ContadorMayusculas miContador;
	char letra;
	
	
	// Entrada de datos
	cout << "Introduzca una secuencia de letras: ";
	cin >> letra;
	
	miContador.IncrementaConteo(letra);
	
	while(letra!='.'){
		cin >> letra;
		
		miContador.IncrementaConteo(letra);
	}
	
	// Contamos el n� de mayusculas que contiene el vector
	cout << endl << endl;
	for(char i='A'; i<='Z'; i++)
		miContador.CuantasHay(i);
			
	return 0;
}
