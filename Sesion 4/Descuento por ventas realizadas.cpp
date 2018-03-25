/***************************************************************************/
// FUNDAMENTOS DE PROGRAMACIÓN
// GRADO EN INGENIERÍA INFORMÁTICA
//  
// CURSO 2015-2016
// (C) CARLOS MORALES AGUILERA
//
// Sesión 4
// Ejercicio Descuento por ventas realizadas
//
/*	 
	Programa de ventas, si la cantidad vendida es mayor de 100 unidades, se le
	aplica un descuento del 3 %. Por otra parte, si el precio final de la venta es mayor de
	700 euros, se aplica un descuento del 2 %.

	Sólo se aplicará el descuento del 2 % (por una venta mayor de 700 euros) cuando
	se hayan vendido más de 100 unidades, es decir, para ventas de menos de 100 
	unidades no se aplica el descuento del 2 % aunque el importe sea mayor de 700 euros.
	
*/
/***************************************************************************/

#include <iostream>
#include <cmath>

using namespace std;

int main(){
	
	// Declaración de variables
	const int MINIMO_UNIDADES_PARA_DESCUENTO = 100;
	const double MINIMO_VENTA_GRANDE_PARA_DESCUENTO = 700.0;
	const double DESCUENTO_POR_UNIDADES_VENDIDAS = 0.03;
	const double DESCUENTO_POR_VENTA_GRANDE = 0.02;
	double precio_unitario, total_venta;
	int unidades_vendidas;
	
	
	// Entrada de datos
	cout << "Precio unitario: ";
	cin >> precio_unitario;
	cout << "Unidades vendidas: ";
	cin >> unidades_vendidas;
	
	// Cómputos
	if (unidades_vendidas >= MINIMO_UNIDADES_PARA_DESCUENTO){
		precio_unitario += precio_unitario * DESCUENTO_POR_UNIDADES_VENDIDAS;

		total_venta = precio_unitario * unidades_vendidas;
	
		if (total_venta >= MINIMO_VENTA_GRANDE_PARA_DESCUENTO)
			total_venta += total_venta * DESCUENTO_POR_VENTA_GRANDE;
	}else{
		total_venta = precio_unitario * unidades_vendidas;
	}
	cout << endl << "El precio total de la venta es: " << total_venta << endl << endl;
	
	
	return(0);
	
}
