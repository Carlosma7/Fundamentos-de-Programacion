/***************************************************************************/
// FUNDAMENTOS DE PROGRAMACIÓN
// GRADO EN INGENIERÍA INFORMÁTICA
//  
// CURSO 2015-2016
// (C) CARLOS MORALES AGUILERA
//
// Sesión 16
// Ejercicio Elimina Varios Eficientemente
//
/*	 
	Recupere la solución del ejercicio 31 de la Relación de Problemas IV (elimina varios
	caracteres de una secuencia). Defina el método EliminaVarios sobre la clase
	SecuenciaCaracteres para que haga la tarea pedida. Tendrá que pasarle al método
	un objeto de la clase SecuenciaEnteros con los índices de las posiciones a
	eliminar.
	
*/
/***************************************************************************/

#include <iostream>
#include <cstring>
#include <cmath>

using namespace std;

// CLASE SECUENCIA ENTEROS
class SecuenciaEnteros{
	private:
		static const int TAMANIO = 50;
		int vector_privado[TAMANIO];
		int total_utilizados;
	public:
		SecuenciaEnteros()
		:total_utilizados(0) {
			
		}
		
		int TotalUtilizados(){
			return total_utilizados;
		}
		
		int Capacidad(){
			return TAMANIO;
		}
		
		void Aniade(int nuevo){
			if (total_utilizados < TAMANIO){
				vector_privado[total_utilizados] = nuevo;
				total_utilizados++;
			}
		}
		
		void Modifica(int posicion, int nuevo){
			if (posicion >= 0 && posicion < total_utilizados)
				vector_privado[posicion] = nuevo;
		}
		
		int Elemento(int indice){
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
		
		bool Contiene(int numero){
			bool contenido=false;
			
			for(int i=0; i<total_utilizados;i++)
				if(numero==vector_privado[i])
					contenido=true;
					
			return contenido;
		}
		
		
};

// CLASE SECUENCIA CARACTERES
class SecuenciaCaracteres{
	private:
		static const int TAMANIO = 50;
		char vector_privado[TAMANIO];
		int total_utilizados;
	public:
		SecuenciaCaracteres()
		:total_utilizados(0) {
			
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
		
		// Método del ejercicio
		void EliminaVarios(SecuenciaEnteros borrar){
			
			// Eliminamos las letras de la secuencia de enteros dada
			for(int i=0;i<total_utilizados;i++)
				if(borrar.Contiene(i)){
					Elimina(i-1);
				}
		}
		
};

int main(){
	// Declaracion de variables
	SecuenciaCaracteres palabra;
	char caracter;
	SecuenciaEnteros miSecuencia;
	int entero;
	
	//Entrada de datos
	cout << "Introduzca una palabra (acaba en .): ";	// Formamos la palabra
	cin >> caracter;
	while(caracter!='.'){
		palabra.Aniade(caracter);

		cin >> caracter;
	}
		
	cout << "Introduzca una secuencia de enteros(-1 para terminar): ";	// Lectura adelantada
	cin >> entero;														// Formamos la secuencia de enteros
	
	while(entero!=-1){
		miSecuencia.Aniade(entero);

		cin >> entero;
	}
	
	// Mostramos la palabra antes de eliminar
	cout << "Palabra antes de eliminar letras: ";
	for(int i=0;i<palabra.TotalUtilizados();i++)
		cout << palabra.Elemento(i);
		
		
	// Eliminamos con el método
	palabra.EliminaVarios(miSecuencia);
		
	// Mostramos la palabra después de eliminar
	cout << endl << "Palabra despues de eliminar letras: ";
	for(int i=0;i<palabra.TotalUtilizados();i++)
		cout << palabra.Elemento(i) ;
			
	
	return(0);
}
