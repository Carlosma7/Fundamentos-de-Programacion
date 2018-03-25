/***************************************************************************/
// FUNDAMENTOS DE PROGRAMACIÓN
// GRADO EN INGENIERÍA INFORMÁTICA
//  
// CURSO 2015-2016
// (C) CARLOS MORALES AGUILERA
//
// Sesión 11
// Ejercicio Palíndromo, invierte y número de mayúsculas dentro de la clase SecuenciaEnteros
//
/*	 
	Añada los métodos EsPalindromo, Invierte y NumeroMayusculas a la clase
	SecuenciaCaracteres que implementen las tareas descritas en el ejercicio 1 de
	esta relación de problemas.

	Incluya un programa principal de prueba similar al del ejercicio 1.
	
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
		
		void ImprimeVector(){
			cout << endl << endl << "[ ";
			for(int i=0;i<total_utilizados;i++)
				cout << vector_privado[i] << " ";
			cout << "]" << endl << endl;
		}
		
		void InvierteVector(){
			char invertido[total_utilizados];
			
			// Copiamos en el vector auxiliar
			for (int i=0;i<total_utilizados;i++)
				invertido[i]=vector_privado[i];
			
			// Invertimos el vector usando el auxiliar
			for(int i1=0, i2=total_utilizados-1; i1<=total_utilizados; i1++, i2--)
				vector_privado[i1]=invertido[i2];
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
	mi_secuencia.ImprimeVector();
	
	// Comprobamos si es palindromo
	mi_secuencia.EsPalindromo();
		
	// Invertimos el vector
	cout << "Mostramos el vector invertido: ";
	
	mi_secuencia.InvierteVector();
	
	mi_secuencia.ImprimeVector();
	
	// Contamos el nº de mayusculas que contiene el vector
	int num_mayus=mi_secuencia.CuentaMayusculas();
			
	cout << "El numero de mayusculas que hay en el vector es " << num_mayus << " mayusculas." << endl << endl;
			
	return 0;
}
