/***************************************************************************/
// FUNDAMENTOS DE PROGRAMACIÓN
// GRADO EN INGENIERÍA INFORMÁTICA
//  
// CURSO 2015-2016
// (C) CARLOS MORALES AGUILERA
//
// Sesión 10
// Ejercicio Interes
//
/*	 
	Se quiere construir una clase DepositoSimulacion para simular préstamos, ofreciendo
	la funcionalidad descrita en los ejercicios 19 (reinvierte capital e interés un
	número de años) y 20 (reinvierte capital e interés hasta obtener el doble de la cantidad
	inicial) de la relación de problemas II (página RP-II.7). Por tanto, la clase debe
	proporcionar, para un capital y unos intereses dados, métodos para:

	a) Calcular el capital que se obtendrá al cabo de un número de años,

	b) Calcular el número de años que deben pasar hasta obtener el doble de la cantidad
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
		
		// Método que cambia los valores del deposito
		void CambiaDeposito(int capital_deposito, int interes_deposito){
			capital=capital_deposito;
			interes=interes_deposito;
		}
		
		// Método que cambia el capital del deposito al pasado
		void CambiaCapital(int capital_deposito){
			capital=capital_deposito;
		}
		
		// Método que cambia el interés del depósito al pasado
		void CambiaInteres(int interes_deposito){
			interes=interes_deposito;
		}
		
		// Método que calcula el número de años que han de pasar hasta doblar
		// el capital inicial del depósito
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
	
	
	// Creamos el depósito con el capital e interés proporcionados
	DepositoSimulacion mi_deposito(capital, interes);
	
	// Cómputos y Salidas de datos
	cout << endl << "El capital inicial es: " << capital << " euros." << endl;
	cout << endl << "Se necesitan " << mi_deposito.NumeroAniosDoblarInicial() << " anios para doblar el capital inicial." << endl;
	cout << "(Capital final = " << capital*2 << " euros.)" << endl;
	
	return 0;
}
