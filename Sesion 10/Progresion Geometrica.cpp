/***************************************************************************/
// FUNDAMENTOS DE PROGRAMACI�N
// GRADO EN INGENIER�A INFORM�TICA
//  
// CURSO 2015-2016
// (C) CARLOS MORALES AGUILERA
//
// Sesi�n 10
// Ejercicio Progresi�n Geom�trica
//
/*	 
	En el ejercicio 7 de esta relaci�n de problemas se definieron varias funciones para
	operar sobre una progresi�n geom�trica. Definid ahora una clase para representar
	una progresi�n geom�trica.
	
	Clase que representa una Progresi�n Geom�trica
	
*/
/***************************************************************************/

#include <iostream>
#include <cstring>
#include <cmath>

using namespace std;

class ProgresionGeometrica{
	private:
		// Atributos de la clase
		int r, k, ai;
		
	public:
		// Constructor de la clase
		ProgresionGeometrica(int razon, int elem_k, int a_inicial){
			r=razon;
			k=elem_k;
			ai=a_inicial;
		}
		
		// M�todo que calcula la suma hasta el t�rmino k, desde el
		// t�rmino ai, con una raz�n r
		int SumaHasta(int ai, int r, int k){
			int progresion=0;
			int a_actual;
			
			for (int i=1; i<=k; i++){	//ai+1 = ai * r
				a_actual=ai*r;
				progresion+=a_actual;
				
				ai=a_actual;
			}
			
			return progresion;
		}

		// M�todo que calcula el producto hasta el t�rmino k, desde el
		// t�rmino ai, con una raz�n r
		int MultiplicaHasta(int ai,int r, int k){
			int producto;
			int ak,ai_bucle=ai;
			
			for(int i=1; i<=k;i++){
				ak=ai_bucle*r;
				
				ai_bucle=ak;
			}
			
			
			producto=sqrt(pow(ai*ak,k));
			
			return producto;
		}
		
		// M�todo que calcula la suma hasta el elemento k_esimo
		int Termino(int k_esimo){
			return SumaHasta(ai, r , k_esimo);
		}
		
		// M�todo que calcula la suma de la progresi�n hasta infinito
		int SumaHastaInfinito(int ai,int r){
			int producto;
			producto=ai/(1-r);
			
			return producto;
		}
		
};

int main(){
	// Declaracion de variables
	int r, k, ai,tope;
	
	// Entrada de datos
	cout << "Introduzca el primer elemento a1: ";
	cin >> ai;
	cout << "Introduzca la razon de la progresion r: ";
	cin >> r;
	cout << "Introduzca el tope k: ";
	cin >> k;
	
	// Creamos el objeto ProgresionGeometrica con los valores obtenidos
	ProgresionGeometrica mi_progresion(r, k, ai);
	
	// Entrada del tope
	cout << "Introduzca el numero tope: ";
	cin >> tope;
	
	//lea un entero tope e imprima los tope
	//primeros t�rminos de la progresi�n, as� como la suma hasta tope de dichos t�rminos.
	for(int i=ai; i<=tope; i++){
		cout << endl << mi_progresion.Termino(i);
	}
	
	return 0;
}
