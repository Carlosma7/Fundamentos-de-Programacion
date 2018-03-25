/***************************************************************************/
// FUNDAMENTOS DE PROGRAMACIÓN
// GRADO EN INGENIERÍA INFORMÁTICA
//  
// CURSO 2015-2016
// (C) CARLOS MORALES AGUILERA
//
// Sesión 11
// Ejercicio Intercambia Componentes
//
/*	 
	Añada el método IntercambiaComponentes para intercambiar dos componentes
	de la secuencia. Por ejemplo, si la secuencia contiene {'h','o','l','a'}, después
	de intercambiar las componentes 1 y 3, se quedaría con {'h','a','l','o'}.

	¿Qué debería hacer este método si los índices no son correctos?

	Modifique la implementación del método Invierte del ejercicio 4, para que lo haga
	llamando a IntercambiaComponentes.

	Imprima las componentes de la secuencia desde el main, antes y después
	de llamar a dicho método. Para ello, use el método ToString() de la clase
	SecuenciaCaracteres.
	
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
		
		void EsPalindromo(){
			bool es_palindromo=true;
			int j=0, k=total_utilizados-1;
	
			while(j<=total_utilizados && j>=0){
				if(vector_privado[j]!=vector_privado[k])
					es_palindromo=false;
		
				j++;
				k--;
			}
	
			if(es_palindromo)
				cout << "El vector es palindromo." << endl;
			else
				cout << "El vector no es palindromo." << endl;
		}
		
		void ToString(){
			cout << endl << endl << "[ ";
			for(int i=0;i<total_utilizados;i++)
				cout << vector_privado[i] << " ";
			cout << "]" << endl << endl;
		}
		
		void IntercambiaComponentes(int posicion1, int posicion2){
			char aux;
			
			if (posicion1 >= 0 && posicion1 < total_utilizados)
				if (posicion2 >= 0 && posicion2 < total_utilizados){
					aux = vector_privado[posicion1];
					vector_privado[posicion1]=vector_privado[posicion2];
					vector_privado[posicion2]=aux;
				}
		}
		
		void InvierteVector(){			
			// Invertimos el vector usando el auxiliar
			for(int i1=0, i2=total_utilizados-1; i1<total_utilizados/2; i1++, i2--){
				IntercambiaComponentes(i1,i2);
			}
		}
		
		int CuentaMayusculas(){
			int num_mayus=0;
			
			for(int i=0; i<total_utilizados;i++)
				if(vector_privado[i]>='A' && vector_privado[i]<='Z')
					num_mayus++;
					
			return num_mayus;
		}
};

int main(){
	// Declaracion de variables
	SecuenciaCaracteres mi_secuencia; 		//Declaramos un vector de tamaño 100
	char car_introducido;
	
	// Entrada de datos
	cout << "Introduzca un caracter (# para terminar): ";
	cin >> car_introducido;
	
	while(car_introducido!='#'){
		mi_secuencia.Aniade(car_introducido);
		
		cout << "Introduzca un caracter (# para terminar): ";
		cin >> car_introducido;
	}
	
	// Mostramos el vector
	cout << "Mostramos el vector: ";
	mi_secuencia.ToString();
		
	// Invertimos el vector
	cout << "Mostramos el vector invertido: ";
	
	mi_secuencia.InvierteVector();
	mi_secuencia.ToString();
			
	return 0;
}
