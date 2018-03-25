/***************************************************************************/
// FUNDAMENTOS DE PROGRAMACIÓN
// GRADO EN INGENIERÍA INFORMÁTICA
//  
// CURSO 2015-2016
// (C) CARLOS MORALES AGUILERA
//
// Sesión 10
// Ejercicio Salario con horas extraordinarias
//
/*	 
	Recupere la solución del ejercicio 6 de esta relación de problemas (cómputo del salario
	en función de las horas trabajadas) Defina una clase Nomina para gestionar el
	cómputo del salario final. 
	
	Suponga que el porcentaje de incremento en la cuantía de
	las horas extras (50 %) y el número de horas que no se tarifan como extra (40) son
	valores que podrían cambiar, aunque no de forma continua. El número de horas trabajadas
	y la cuantía a la que se paga cada hora extraordinaria, sí son cantidades que
	varían de un trabajador a otro.
	
*/
/***************************************************************************/

#include <iostream>
#include <cstring>

using namespace std;

class Nomina{
	private:
		// Atributos de la clase
		int tarifa_hora,horas_trabajadas;
		const int horas_no_extra=40;
		const int incremento_horas_extra=1.5;
		
	public:
		// Constructor de la clase
		Nomina(int tarifa, int horas){
			tarifa_hora=tarifa;
			horas_trabajadas=horas;
			
			const int horas_no_extra=40;
			const int incremento_horas_extra=1.5;
		}
		
		// Método que devuelve el salario del trabajador
		int CalculaSalario(){
			int salario;
			
			if(horas_trabajadas<=horas_no_extra)
				salario=tarifa_hora*horas_trabajadas;
			else{
				int horas_extra=horas_trabajadas-40;
				int tarifa_aumentada=tarifa_hora+(tarifa_hora*incremento_horas_extra);
				salario=(tarifa_hora*40)+(tarifa_aumentada*horas_extra);
			}
			
			return salario;
		}
};

int main(){
	// Declaracion de variables
	int tarifa_hora,horas_trabajadas;
	
	// Entrada de datos
	cout << "Introduzca la tarifa por cada hora trabajada: ";
	cin >> tarifa_hora;
	cout << "Introduzca el numero de horas trabajadas: ";
	cin >> horas_trabajadas;
	
	// Creamos el objeto Nomina con la tarifa y cantidad de horas obtenidas	
	Nomina salario_trabajador(tarifa_hora, horas_trabajadas);
	
		
	// Salida de datos
	cout << endl << "El salario final del trabajador es de " << salario_trabajador.CalculaSalario() << " euros." << endl << endl;
	
	
	return 0;
}
