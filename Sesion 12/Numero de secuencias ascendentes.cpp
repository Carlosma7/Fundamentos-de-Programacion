/***************************************************************************/
// FUNDAMENTOS DE PROGRAMACIÓN
// GRADO EN INGENIERÍA INFORMÁTICA
//  
// CURSO 2015-2016
// (C) CARLOS MORALES AGUILERA
//
// Sesión 11
// Ejercicio Pinta dígitos
//
/*	 
	Defina la clase SecuenciaEnteros análoga
	a SecuenciaCaracteres. Defina lo que sea necesario para calcular el número
	de secuencias ascendentes del vector. Por ejemplo, el vector {2,4,1,1,7,2,1} tiene
	4 secuencias que son {2,4}, {1,1,7}, {2}, {1}.
	
*/
/***************************************************************************/

#include <iostream>
#include <cstring>
#include <cmath>

using namespace std;

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
		
		void SecuenciasAscendentes(){
			int aux[TAMANIO];
			int total_secuencias=1;
			int pos;
			
			// Lectura adelantada
			aux[0]=vector_privado[0];
			
			for(int i=1;i<total_utilizados;i++){
				aux[pos]=vector_privado[i];
				pos++;
				if(vector_privado[i]>vector_privado[i+1] || i==total_utilizados-1){
					cout << "Se muestra la cadena ascendente " << total_secuencias << ": {";
					for(int j=0; j<pos; j++)
						cout << aux[j]  << ",";
						
					cout << "}" << endl;
					
					total_secuencias++;
					pos=0;
				}
			}
		}
};

int main(){
	// Declaracion de variables
	SecuenciaEnteros miSecuencia;
	int entero;
	
	//Entrada de datos
	cout << "Introduzca una secuencia de enteros(-1 para terminar): ";	// Lectura adelantadas
	cin >> entero;
	
	while(entero!=-1){
		miSecuencia.Aniade(entero);

		cin >> entero;
	}
	
	// Mostramos la secuencia original
	cout << "Secuencia original: {";
	for(int i=0; i<miSecuencia.TotalUtilizados(); i++)
		cout << miSecuencia.Elemento(i) << ",";
	cout << "}";
		
	cout << endl << endl << "Mostramos las subcadenas ascendentes." << endl;
	miSecuencia.SecuenciasAscendentes();
	
	return(0);
}
