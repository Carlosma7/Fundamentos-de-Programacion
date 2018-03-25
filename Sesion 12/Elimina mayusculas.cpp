/***************************************************************************/
// FUNDAMENTOS DE PROGRAMACIÓN
// GRADO EN INGENIERÍA INFORMÁTICA
//  
// CURSO 2015-2016
// (C) CARLOS MORALES AGUILERA
//
// Sesión 12
// Ejercicio Elimina mayusculas
//
/*	 
	Sobre la clase SecuenciaCaracteres, añada el método EliminaMayusculas
	para eliminar todas las mayúsculas. Por ejemplo, después de aplicar dicho método al
	vector {'S','o','Y',' ','y','O'}, éste debe quedarse con {'o',' ','y'}.
	
	Un primer algoritmo para resolver este problema sería el siguiente (en ejercicios posteriores
	se verán métodos más eficientes):
	
	Recorrer todas las componentes de la secuencia
	Si la componente es una mayúscula, borrarla
	
	Queremos implementarlo llamando al método Elimina (que borra un único carácter):.
	La implementación de este método se ha visto en clase de teoría.
	
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
		
		void EliminaMayusculas(){
			for (int i=0; i<total_utilizados; i++){
				if (isupper(vector_privado[i])){
					Elimina(i);
					i=0;
				}
			}
		}
		
};

int main(){
	// Declaracion de variables
	SecuenciaCaracteres miSecuencia;
	char caracter, TERMINADOR='.';
	
	// Entrada de datos
	// Lectura adelantada
	cout << "Introduzca una secuencia de caracteres(. para finalizar): ";
	cin >> caracter;
	
	while(caracter!=TERMINADOR){
		miSecuencia.Aniade(caracter);
		
		cin >> caracter;
	}
	
	// Mostramos la secuencia con las mayusculas
	cout << "Secuencia con mayusculas: ";
	for(int i=0; i < miSecuencia.TotalUtilizados();i++)
		cout << miSecuencia.Elemento(i);
	
	// Elminamos laa mayusculas
	miSecuencia.EliminaMayusculas();
	
	// Mostramos la secuencia sin las mayusculas
	cout << endl << "Secuencia sin mayusculas: ";
	for(int i=0; i < miSecuencia.TotalUtilizados();i++)
		cout << miSecuencia.Elemento(i);
		
	cout << endl;
		
	return 0;
}
