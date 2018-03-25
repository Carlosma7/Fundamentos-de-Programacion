/*********************************************************************/
// FUNDAMENTOS DE PROGRAMACIÓN
// GRADO EN INGENIERÍA INFORMÁTICA
//
// CURSO 2015-2016
// (C) CARLOS MORALES AGUILERA
//
// Sesión 6
// Ejercicio Ventas de una empresa
//
/* Una empresa que tiene tres sucursales decide llevar la contabilidad de las ventas
	de sus productos a lo largo de una semana. Para ello registra cada venta con
	tres números, el identificador de la sucursal (1, 2 o 3), el código del producto codificado
	como un carácter (a, b ó c) y el número de unidades vendidas.
	
	Diseñar un programa que lea desde el teclado una serie de registros compuestos por
	sucursal, producto, unidades y diga cuál es la sucursal que más productos
	ha vendido. La serie de datos termina cuando la sucursal introducida vale -1.
*/

#include <iostream>
#include <cmath>

using namespace std; 


int main() // Programa Principal
{                       

	// Declaración de variables
	
	int identificador_sucursal, unidades_vendidas;
	char codigo_producto;
	
	int acumulado_sucursal_1=0,acumulado_sucursal_2=0,acumulado_sucursal_3=0;
	
	// Lectura adelantada
		cout << "Introduzca identificador de la sucursal (1,2 o 3): ";
		cin >> identificador_sucursal;
	
	
	//Entrada de datos con filtro
	
	while(identificador_sucursal!=-1){
		// Entrada de datos
		cout << "Introduzca el codigo del producto (a,b o c): ";
		cin >> codigo_producto;
		cout << "Introduzca el numero de unidades vendidas: ";
		cin >> unidades_vendidas;
		
		// Computos
		if(identificador_sucursal==1)
			acumulado_sucursal_1=acumulado_sucursal_1+unidades_vendidas;
		else if(identificador_sucursal==2)
			acumulado_sucursal_2=acumulado_sucursal_2+unidades_vendidas;
			else if(identificador_sucursal==3)
			acumulado_sucursal_3=acumulado_sucursal_3+unidades_vendidas;
		
		cout << endl;
		
		cout << "Introduzca identificador de la sucursal (1,2 o 3): ";
		cin >> identificador_sucursal;
	}
	
	
	//Salidas
	cout << endl << "La sucursal con mayor numero de ventas es: " << endl;
	
	if((acumulado_sucursal_1>acumulado_sucursal_2) && (acumulado_sucursal_1>acumulado_sucursal_3)){
		cout << "Sucursal: 1. Numero de unidades vendidas: " << acumulado_sucursal_1 << endl;
		
	}else if(acumulado_sucursal_2>acumulado_sucursal_3){
		cout << "Sucursal: 2. Numero de unidades vendidas: " << acumulado_sucursal_2 << endl;
	}else{
		cout << "Sucursal: 3. Numero de unidades vendidas: " << acumulado_sucursal_3 << endl;
	}
	
	
	
	
	return (0);
}
 
