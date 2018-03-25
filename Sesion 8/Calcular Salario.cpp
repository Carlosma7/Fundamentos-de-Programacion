/*********************************************************************/
// FUNDAMENTOS DE PROGRAMACIÓN
// GRADO EN INGENIERÍA INFORMÁTICA
//
// CURSO 2015-2016
// (C) CARLOS MORALES AGUILERA
//
// Sesión 8
// Ejercicio Calcular Salario
//
/* 
	A un trabajador le pagan según sus horas trabajadas y la tarifa está a un valor por
	hora. Si la cantidad de horas trabajadas es mayor de 40 horas, la tarifa por hora se
	incrementa en un 50% para las horas extras (las que haya por encima de 40). Construir
	una función que dado el número total de horas trabajadas y el precio por hora,
	devuelva el salario del trabajador.
*/

#include <iostream>
#include <cmath>

using namespace std; 

//Funcion que calcula el salario segun las horas
int CalculaSalario(int tarifa, int horas){
	int salario;
	
	if(horas<=40)
		salario=tarifa*horas;
	else{
		int horas_extra=horas-40;
		int tarifa_aumentada=tarifa+(tarifa*0,5);
		salario=(tarifa*40)+(tarifa_aumentada*horas_extra);
	}
	
	return salario;
}

int main() // Programa Principal
{                       

	// Declaración de variables
	int salario_trabajador,tarifa_hora,horas_trabajadas;
	
	// Lectura adelantada
		cout << "Introduzca la tarifa por cada hora trabajada: ";
		cin >> tarifa_hora;
		cout << "Introduzca el numero de horas trabajadas: ";
		cin >> horas_trabajadas;
		
	
	
	//Computos
	salario_trabajador=CalculaSalario(tarifa_hora,horas_trabajadas);
		
	//Salidas
	cout << endl << "El salario final del trabajador es de " << salario_trabajador << " euros." << endl << endl;	
	
	return (0);
}
 
