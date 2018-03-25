/***************************************************************************/
// FUNDAMENTOS DE PROGRAMACIÓN
// GRADO EN INGENIERÍA INFORMÁTICA
//  
// CURSO 2015-2016
// (C) CARLOS MORALES AGUILERA
//
// Sesión 12
// Ejercicio Clase Contador de mayusculas
//
/*	 
	Sobre el ejercicio 10, construya una clase específica ContadorMayusculas que
	implemente los métodos necesarios para llevar el contador de las mayúsculas. Lo que
	se pretende es que la clase proporcione los métodos siguientes:
	
	void IncrementaConteo (char mayuscula)
	int CuantasHay (char mayuscula)
	
	El primer método aumentará en uno el contador de la correspondiente mayúscula y el
	segundo indicará cuántas hay. Modifique el programa principal para que cree un objeto
	de esta clase y llame a sus métodos para realizar los conteos de las mayúsculas.
	Finalmente, hay que imprimir en pantalla cuántas veces aparece cada mayúscula.
	
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
	
	// Contamos el nº de mayusculas que contiene el vector
	cout << endl << endl;
	for(char i='A'; i<='Z'; i++)
		miContador.CuantasHay(i);
			
	return 0;
}
