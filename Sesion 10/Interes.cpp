/***************************************************************************/
// FUNDAMENTOS DE PROGRAMACI�N
// GRADO EN INGENIER�A INFORM�TICA
//  
// CURSO 2015-2016
// (C) CARLOS MORALES AGUILERA
//
// Sesi�n 10
// Ejercicio Interes
//
/*	 
	Se quiere construir una clase DepositoSimulacion para simular pr�stamos, ofreciendo
	la funcionalidad descrita en los ejercicios 19 (reinvierte capital e inter�s un
	n�mero de a�os) y 20 (reinvierte capital e inter�s hasta obtener el doble de la cantidad
	inicial) de la relaci�n de problemas II (p�gina RP-II.7). Por tanto, la clase debe
	proporcionar, para un capital y unos intereses dados, m�todos para:

	a) Calcular el capital que se obtendr� al cabo de un n�mero de a�os,

	b) Calcular el n�mero de a�os que deben pasar hasta obtener el doble de la cantidad
	inicial.
	
*/
/***************************************************************************/

#include <iostream>
#include <cstring>

using namespace std;

class DepositoSimulacion{
	private:
		// Atributos de la clase
		double interes, capital;
		
	public:
		// Constructor de la clase
		DepositoSimulacion(int capital_deposito,int interes_deposito){
			capital=capital_deposito;
			interes=interes_deposito;
		}
		
		// M�todo que cambia los valores del deposito
		void CambiaDeposito(int capital_deposito, int interes_deposito){
			capital=capital_deposito;
			interes=interes_deposito;
		}
		
		// M�todo que cambia el capital del deposito al pasado
		void CambiaCapital(int capital_deposito){
			capital=capital_deposito;
		}
		
		// M�todo que cambia el inter�s del dep�sito al pasado
		void CambiaInteres(int interes_deposito){
			interes=interes_deposito;
		}
		
		// M�todo que calcula el n�mero de a�os que han de pasar hasta doblar
		// el capital inicial del dep�sito
		int NumeroAniosDoblarInicial(){
			int anios=0;
			int capital_deposito=capital, doble_capital=capital_deposito*2;
			
			while(capital_deposito<=doble_capital){
				capital_deposito += (capital_deposito * (interes/100));
				
				if(capital_deposito<=doble_capital)
					anios++;
			}
			
			return anios;
		}
		
};

int main(){
	// Declaracion de variables
	double interes, capital, doble_capital;
	
	// Entrada de datos
	cout << "Introduzca el valor del capital inicial: ";
	cin >> capital;
	
	cout << "Introduzca el interes que se aplica al capital: ";
	cin >> interes;
	
	
	// Creamos el dep�sito con el capital e inter�s proporcionados
	DepositoSimulacion mi_deposito(capital, interes);
	
	// C�mputos y Salidas de datos
	cout << endl << "El capital inicial es: " << capital << " euros." << endl;
	cout << endl << "Se necesitan " << mi_deposito.NumeroAniosDoblarInicial() << " anios para doblar el capital inicial." << endl;
	cout << "(Capital final = " << capital*2 << " euros.)" << endl;
	
	return 0;
}
