/***************************************************************************/
// FUNDAMENTOS DE PROGRAMACIÓN
// GRADO EN INGENIERÍA INFORMÁTICA
//  
// CURSO 2015-2016
// (C) CARLOS MORALES AGUILERA
//
// Sesión 10
// Ejercicio Empresa
//
/*	 
	Recuperad la solución del ejercicio 30 de la Relación de Problemas II (Empresa). Reescribid
	el programa principal usando una clase Ventas para gestionar los cómputos
	de las ventas realizadas. Únicamente se pide que se indiquen las cabeceras de los
	métodos públicos de la clase y las llamadas a éstos en el programa principal. No hay
	que implementar ninguno de los métodos.

	Debe suponer que la clase gestionará las ventas de exactamente tres sucursales. Los
	códigos de dichas sucursales son enteros cualesquiera (no necesariamente 1, 2, 3,
	como ocurría en el ejercicio 30 de la Relación de Problemas II)
	
*/
/***************************************************************************/

#include <iostream>
#include <cstring>

using namespace std;

class Ventas{
	private:
		// Atributos de la clase
		int identificador_sucursal_1, identificador_sucursal_2, identificador_sucursal_3;
		int unidades_vendidas_1, unidades_vendidas_2, unidades_vendidas_3;
	
	public:
		// Constructor de la clase
		Ventas(){
			// Obtenemos los identificadores de las sucursales
			identificador_sucursal_1=0;
			identificador_sucursal_2=0;
			identificador_sucursal_3=0;
			
			// Unidades vendidas de cada sucursal
			unidades_vendidas_1=0;
			unidades_vendidas_2=0;
			unidades_vendidas_3=0;
		}
		
		// Método para establecer las sucursales que usaremos
		void SetSucursales(int id_1, int id_2, int id_3){
			// Obtenemos los identificadores de las sucursales
			identificador_sucursal_1=id_1;
			identificador_sucursal_2=id_2;
			identificador_sucursal_3=id_3;
		}
		
		// Método que dado un identificador de sucursal, le suma a esa misma una cantidad
		// de unidades
		void SumaSucursal(int id, int unidades){
			if(id==identificador_sucursal_1){
				unidades_vendidas_1+=unidades;
			}else{
				if(id==identificador_sucursal_2)
					unidades_vendidas_2+=unidades;
				if(id==identificador_sucursal_3)
					unidades_vendidas_3+=unidades;
			}
		}
		
		// Método que devuelve la sucursal con mas ventas de la empresa
		int SucursalMasVentas(){
			int sucursal_mas_ventas;
			
			if(unidades_vendidas_1>unidades_vendidas_2 && unidades_vendidas_1>unidades_vendidas_3)
				sucursal_mas_ventas=identificador_sucursal_1;
			else{
				if(unidades_vendidas_2>unidades_vendidas_3)
					sucursal_mas_ventas=identificador_sucursal_2;
				else
					sucursal_mas_ventas=identificador_sucursal_3;
			}
			
			return sucursal_mas_ventas;
		}
		
		// Método que devuelve la cantidad de ventas de la sucursal con mas ventas
		int NumVentasMejorSucursal(){
			int num_ventas;
			
			if(unidades_vendidas_1>unidades_vendidas_2 && unidades_vendidas_1>unidades_vendidas_3)
				num_ventas=unidades_vendidas_1;
			else{
				if(unidades_vendidas_2>unidades_vendidas_3)
					num_ventas=unidades_vendidas_2;
				else
					num_ventas=unidades_vendidas_3;
			}
			
			return num_ventas;
		}
		
};

int main(){
	// Declaracion de variables
	int TERMINADOR=-1, identif_sucursal, unidades_vendidas, identificador1, identificador2, identificador3;
	char cod_producto;
	
	// Creamos el objeto Ventas
	Ventas ventas_empresa;
	
	
	// Entrada de datos
	cout << "Introduzca el identificador de la primera sucursal: ";
	cin >> identificador1;
	
	cout << "Introduzca el identificador de la segunda sucursal: ";
	cin >> identificador2;
	
	cout << "Introduzca el identificador de la tercera sucursal: ";
	cin >> identificador3;
	
	// Establecemos las sucursales obtenidas
	ventas_empresa.SetSucursales(identificador1, identificador2, identificador3);
	
	// Entrada de datos en bucle con terminados '#'
	cout << endl << "Introduzca el identificador, codigo producto y unidades vendidas: ";
	cin >> identif_sucursal;
	
	while (identif_sucursal != TERMINADOR){
		cin >> cod_producto;
		cin >> unidades_vendidas;
		
		// A cada sucursal se le suma la cantidad de unidades vendidas que le corresponde
		ventas_empresa.SumaSucursal(identif_sucursal,unidades_vendidas);
		
		cout << endl << "Introduzca el identificador, codigo producto y unidades vendidas: ";
		cin >> identif_sucursal;
	}
	
	// Salida de datos
	cout << "La sucursal con mayor numero de ventas es la sucursal " << ventas_empresa.SucursalMasVentas();
	cout << " con " << ventas_empresa.NumVentasMejorSucursal() << " unidades.";
	
	
	return 0;
}
