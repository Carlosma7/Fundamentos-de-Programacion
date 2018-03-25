/***************************************************************************/
// FUNDAMENTOS DE PROGRAMACIÓN
// GRADO EN INGENIERÍA INFORMÁTICA
//  
// CURSO 2015-2016
// (C) CARLOS MORALES AGUILERA
//
// Sesión 12
// Ejercicio Elimina repetidos
//
/*	 
	Sobre la clase SecuenciaCaracteres, añada un método EliminaRepetidos
	que quite los elementos repetidos, de forma que cada componente sólo aparezca una
	única vez. Se mantendrá la primera aparición, de izquierda a derecha. Por ejemplo, si
	la secuencia contiene
	
	{'b','a','a','h','a','a','a','a','c','a','a','a','g'}
	
	después de quitar los repetidos, se quedaría como sigue:
	
	{'b','a','h','c','g'}
	
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
		
		// Metodo con vector que borra sin el metodo Elimina
		void EliminaRepetidosConVector(){
			char sin_repetidos[TAMANIO];
			int pos=0;
			bool repetido=false;
			
			for (int i=0; i<total_utilizados; i++){
				for (int j=0; j<total_utilizados; j++)
					if(vector_privado[i]==sin_repetidos[j])
						repetido=true;
				
				if(!repetido){
					sin_repetidos[pos]=vector_privado[i];
					pos++;
				}
				
				repetido=false;
			}
			
			
			for(int i=0 ;i<pos; i ++){
				vector_privado[i]=sin_repetidos[i];
			}
			
			int nuevo_tamanio=total_utilizados-pos;
			for(int i=0; i<nuevo_tamanio;i++)
				Elimina(total_utilizados-1);
		}
		
		// Método sin vector que usa el metodo Elimina
		void EliminaRepetidosSinVector(){
			for(int i=1;i<total_utilizados;i++)
				for(int j=0;j<i;j++)
					if(vector_privado[i]==vector_privado[j] || vector_privado[j]==vector_privado[0])
						Elimina(i);
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
	
	// Eliminamos los repetidos
	miSecuencia.EliminaRepetidosSinVector();
	
	// Mostramos la secuencia sin repetidos
	cout << endl << "Secuencia sin repetidos: ";
	for(int i=0; i < miSecuencia.TotalUtilizados();i++)
		cout << miSecuencia.Elemento(i);
		
	cout << endl;
		
	return 0;
}
