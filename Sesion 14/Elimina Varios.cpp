/***************************************************************************/
// FUNDAMENTOS DE PROGRAMACIÓN
// GRADO EN INGENIERÍA INFORMÁTICA
//  
// CURSO 2015-2016
// (C) CARLOS MORALES AGUILERA
//
// Sesión 14
// Ejercicio Elimina Varios
//
/*	 
	Defina la clase SecuenciaEnteros análoga a SecuenciaCaracteres pero para
	que trabaje sobre enteros. Defina en el main un vector clásico de corchetes de tipo de
	dato char. Lea desde el main varios caracteres y asígnelos al vector de char. Lea
	también varios enteros y asígnelos a un objeto de la clase SecuenciaEnteros.
	Implemente ahora directamente en el main un algoritmo para que elimine eficientemente
	todas las posiciones indicadas en la secuencia de enteros. Por ejemplo, si
	el vector de caracteres contiene Fundamentos, después de eliminar el conjunto de
	posiciones dado por 2 5 3, el vector se quedará como Fuaentos.
	
	
	Observe que una posibilidad sería sustituir los caracteres a borrar por un carácter especial,
	por ejemplo # y luego pasarle un algoritmo que eliminase todas las ocurrencias
	de #. Sin embargo, nunca debemos recurrir a esta técnica ya que no podemos presuponer
	que tenemos la posibilidad de elegir tal carácter especial, ya que puede ser un
	carácter válido de la secuencia.
	
	
	Se recomienda implementar el siguiente algoritmo:
	
	Utilizar dos índices: pos_escritura y pos_lectura que marquen
	las posiciones de lectura y escritura en el vector de char
	
	Ordenar la secuencia de enteros
	
	Recorrer con pos_lectura los caracteres del vector de char
	
	Si el carácter actual no está en una posición a borrar,
	colocarlo en pos_escritura.
	
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
		
		bool Contiene(int numero){
			bool contenido=false;
			
			for(int i=0; i<total_utilizados;i++)
				if(numero==vector_privado[i])
					contenido=true;
					
			return contenido;
		}
		
		
};

int main(){
	// Declaracion de variables
	char palabra[10];
	char aux[10];
	char caracter,contador=0;
	SecuenciaEnteros miSecuencia;
	int entero,num_aux=0;
	
	//Entrada de datos
	cout << "Introduzca una palabra: ";	// Formamos la palabra
	cin >> caracter;
	while(caracter!='.' && contador<10){
		palabra[contador]=caracter;

		contador++;
		cin >> caracter;
	}
	
	for(int i=contador;i<10;i++)
		palabra[i]=' ';
		
	cout << "Introduzca una secuencia de enteros(-1 para terminar): ";	// Lectura adelantada
	cin >> entero;														// Formamos la secuencia de enteros
	
	while(entero!=-1){
		miSecuencia.Aniade(entero);

		cin >> entero;
	}
	
	// Mostramos la palabra antes de eliminar
	cout << "Palabra antes de eliminar letras: ";
	for(int i=0;i<10;i++)
		cout << palabra[i];
		
	// Eliminamos las letras de la secuencia de enteros dada
	for(int i=0;i<10;i++)
		if(!miSecuencia.Contiene(i)){
			aux[num_aux]=palabra[i];
			num_aux++;
		}
		
	// Copiamos el resultado en palabra[] y vaciamos el resto
	for(int i=0;i<num_aux;i++)
		palabra[i]=aux[i];
		
	for(int i=num_aux;i<10;i++)
		palabra[i]=' ';
		
	// Mostramos la palabra después de eliminar
	cout << endl << "Palabra despues de eliminar letras: ";
	for(int i=0;i<10;i++)
		cout << palabra[i];
			
	
	return(0);
}
