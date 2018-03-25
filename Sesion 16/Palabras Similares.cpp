/***************************************************************************/
// FUNDAMENTOS DE PROGRAMACI�N
// GRADO EN INGENIER�A INFORM�TICA
//  
// CURSO 2015-2016
// (C) CARLOS MORALES AGUILERA
//
// Sesi�n 16
// Ejercicio Palabras similares
//
/*	 
	Recupere la soluci�n del ejercicio 30 de la Relaci�n de Problemas
	IV (palabras similares).
	Sobre la clase SecuenciaCaracteres, definid un m�todo que compruebe si la secuencia
	es similar a otra.
	
*/
/***************************************************************************/

#include <iostream>
#include <cstring>

using namespace std;

class SecuenciaCaracteres{
	private:
		static const int TAMANIO = 50;
		char vector_privado[TAMANIO];
		int total_utilizados;
	public:
		SecuenciaCaracteres()
		:total_utilizados(0) {
			
		}
		
		// Constructor de copia para usarlo en el CompruebaPalabrasDesordenadas
		SecuenciaCaracteres(const SecuenciaCaracteres &otro){
			for(int i=0;i<otro.TotalUtilizados();i++)	// Copiamos los datos
				Aniade(otro.Elemento(i));
		}
		
		// M�todos constantes para el constructor de copia
		int TotalUtilizados()const{
			return total_utilizados;
		}
		
		// M�todos constantes para el constructor de copia
		char Elemento(int indice)const{
			return vector_privado[indice];
		}
		
		int TotalUtilizados(){
			return total_utilizados;
		}
		
		int Capacidad(){
			return TAMANIO;
		}
		
		void Aniade(char nuevo){
			if (total_utilizados < TAMANIO){
				vector_privado[total_utilizados] = nuevo;
				total_utilizados++;
			}
		}
		
		void Modifica(int posicion, char nuevo){
			if (posicion >= 0 && posicion < total_utilizados)
				vector_privado[posicion] = nuevo;
		}
		
		char Elemento(int indice){
			return vector_privado[indice];
		}
		
		void Elimina (int posicion){
			if (posicion >= 0 && posicion < total_utilizados){
				int tope = total_utilizados-1;
				
				for (int i = posicion ; i < tope ; i++)
					vector_privado[i] = vector_privado[i+1];
					
				total_utilizados--;
			}
		}
		
		void CompararPalabrasDesordenadas(SecuenciaCaracteres desordenada){
			if((vector_privado[0]!=desordenada.Elemento(0)) || (vector_privado[total_utilizados-1]!=desordenada.Elemento(desordenada.TotalUtilizados()-1)))
				cout << "Las cadenas no son similares." << endl << endl;	// Fin m�todo si la primera y �ltima no coinciden
			else{
				bool usada=true;
				int j;
				SecuenciaCaracteres copia(desordenada);	// Creamos una copia para poder eliminar los repetidos
				
				for(int i=0;i<total_utilizados;i++){	// Leemos una a una las letras de la original
					usada=false;
					j=0;
					while(j<desordenada.TotalUtilizados() && !usada){	// Comprobamos con la copia
						if(vector_privado[i]==copia.Elemento(j)){		// Si se usa la eliminamos y pasamos de letra en la original
							usada=true;
							copia.Elimina(j);
						}else											// Si no se usa avanzamos uno (asi hasta el final)
							j++;
					}
					
					if(usada==false)
						cout << "Las cadenas no son similares." << endl << endl;	// Fin m�todo si no contienen las mismas letras
				}
				
					if(usada==true)	// Si llega hasta aqui es porque son similares
						cout << "Las cadenas son similares." << endl << endl;	// Fin m�todo si la primera y �ltima no coinciden
			}
				
		}
		
};

int main(){
	// Declaracion de variables
	SecuenciaCaracteres miSecuencia, secuenciaDesordenada;
	char caracter, TERMINADOR='.';
	
	// Entrada de datos
	// Lectura adelantada
	cout << "Introduzca una secuencia de caracteres(. para finalizar): ";
	cin >> caracter;
	
	while(caracter!=TERMINADOR){
		miSecuencia.Aniade(caracter);
		
		cin >> caracter;
	}
	
	// Lectura adelantada
	cout << "Introduzca otra secuencia de caracteres(. para finalizar): ";
	cin >> caracter;
	
	while(caracter!=TERMINADOR){
		secuenciaDesordenada.Aniade(caracter);
		
		cin >> caracter;
	}
	
	// Mostramos las secuencias
	for(int i=0; i < miSecuencia.TotalUtilizados();i++)
		cout << miSecuencia.Elemento(i);
		
	cout << endl;
	
	for(int i=0; i < secuenciaDesordenada.TotalUtilizados();i++)
		cout << secuenciaDesordenada.Elemento(i);
	
	// Comprobamos que sean similares (desordenada)
	miSecuencia.CompararPalabrasDesordenadas(secuenciaDesordenada);
		
	return 0;
}
