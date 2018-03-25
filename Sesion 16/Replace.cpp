/***************************************************************************/
// FUNDAMENTOS DE PROGRAMACIÓN
// GRADO EN INGENIERÍA INFORMÁTICA
//  
// CURSO 2015-2016
// (C) CARLOS MORALES AGUILERA
//
// Sesión 16
// Ejercicio Replace
//
/*	 
	Recupere la solución del ejercicio 32 de la Relación
	de Problemas IV (Replace). Defina sobre la clase SecuenciaCaracteres el
	método Replace para que haga la tarea pedida. Tendrá que pasarle al método
	la posición inicial, el número de caracteres a eliminar y el objeto de la clase
	SecuenciaCaracteres conteniendo la secuencia de caracteres de reemplazo.
	
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
		
		// Métodos constantes para el constructor de copia
		int TotalUtilizados()const{
			return total_utilizados;
		}
		
		// Métodos constantes para el constructor de copia
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
		
		// Método del ejercicio a realizar
		void Replace(SecuenciaCaracteres otra, int inicio, int desplazamiento){
			int contador=0;
			
			for(int i=inicio; contador<desplazamiento;i++){
				vector_privado[i]=otra.Elemento(i);
				contador++;
			}
		}
		
};

int main(){
	// Declaracion de variables
	SecuenciaCaracteres mi_secuencia, sustituye;
	char caracter;
	int n, pos;
	
	// Rellenamos la secuencia inicial
	cout << "Introduzca la primera secuencia de caracteres: ";
	cin >> caracter;
	while(caracter!='#' && contador<20){
		mi_secuencia.Aniade(caracter);

		cin >> caracter;
	}
	
	
	
	// Rellenamos la secuencia inicial
	cout << endl << "Introduzca la segunda secuencia de caracteres: ";
	contador=0;
	cin >> caracter;
	while(caracter!='#' && contador<20){
		sustituye.Aniade(caracter);

		cin >> caracter;
	}
	
	
	// Mostramos las dos cadenas
	cout << "Mostramos las cadenas: " << endl << endl;
	for(int i=0; i<mi_secuencia.TotalUtilizados();i++)
		cout << mi_secuencia.Elemento(i);
		
	cout << endl;
	for(int i=0; i<sustituye.TotalUtilizados();i++)
		cout << sustituye.Elemento(i);
		
	// Pasamos a hacer el algoritmo de Replace
	cout << endl << endl << "Introduzca desde que posicion desea empezar a copiar: ";
	cin >> pos;
	cout << endl << "Introduzca cuantas posiciones desea copiar: ";
	cin >> n;
	
	// Aplicamos el método
	mi_secuencia.Replace(sustituye,pos, n);
	
	
	// Mostramos el resultado final
	cout << endl << "Mostramos la cadena final: " << endl;
	for(int i=0; i<mi_secuencia.TotalUtilizados();i++)
		cout << mi_secuencia.Elemento(i);
			
	return 0;
}
