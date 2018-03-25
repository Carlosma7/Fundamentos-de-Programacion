/***************************************************************************/
// FUNDAMENTOS DE PROGRAMACIÓN
// GRADO EN INGENIERÍA INFORMÁTICA
//  
// CURSO 2015-2016
// (C) CARLOS MORALES AGUILERA
//
// Sesión 10
// Ejercicio Progresión Geométrica
//
/*	 
	En el ejercicio 7 de esta relación de problemas se definieron varias funciones para
	operar sobre una progresión geométrica. Definid ahora una clase para representar
	una progresión geométrica.
	
	Clase que representa una Progresión Geométrica
	
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
		
		// Método que calcula la suma hasta el término k, desde el
		// término ai, con una razón r
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

		// Método que calcula el producto hasta el término k, desde el
		// término ai, con una razón r
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
		
		// Método que calcula la suma hasta el elemento k_esimo
		int Termino(int k_esimo){
			return SumaHasta(ai, r , k_esimo);
		}
		
		// Método que calcula la suma de la progresión hasta infinito
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
	//primeros términos de la progresión, así como la suma hasta tope de dichos términos.
	for(int i=ai; i<=tope; i++){
		cout << endl << mi_progresion.Termino(i);
	}
	
	return 0;
}
