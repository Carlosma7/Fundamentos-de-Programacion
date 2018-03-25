/***************************************************************************/
// FUNDAMENTOS DE PROGRAMACIÓN
// GRADO EN INGENIERÍA INFORMÁTICA
//  
// CURSO 2015-2016
// (C) CARLOS MORALES AGUILERA
//
// Sesión 11
// Ejercicio Empresa con vectores
//
/*	 
	Recupere la solución del ejercicio 28 (ventas de empresa) de la relación de problemas
	III. Resuelva el problema pedido (calcular la sucursal con mayor número de ventas)
	pero ahora considere que no conoce a priori el número de sucursales que hay, aunque
	sabe que los códigos de éstas siempre son números entre 1 y 100 y que en total no
	hay más de 100 sucursales. Por lo tanto, tendrá que añadir como dato miembro de
	la clase, un vector con un tamaño máximo de 100. Cree un programa principal de
	prueba.
	
*/
/***************************************************************************/

#include <iostream>
#include <cstring>

using namespace std;

class Ventas{
	private:
		// Atributos de la clase
		const static int TAM=100;
		int sucursales[TAM], unidades[TAM];	// Declaramos el vector de sucursales
		int num_sucursales;
		int unidades_vendidas_1, unidades_vendidas_2, unidades_vendidas_3;
	
	public:
		// Constructor de la clase
		Ventas(){			
			num_sucursales=0;
		}
		
		// Método para establecer las sucursales que usaremos
		void SetSucursales(int s[], int cantidad_sucursales){
			// Obtenemos los identificadores de las sucursales
			int numero=0;
			
			for (int i=0;i<cantidad_sucursales;i++)
				if(s[i]<100 && s[i]>0){
					sucursales[i]=s[i];
					numero++;
				}
				
			num_sucursales=numero;
			
			// Inicializamos todas las unicades a 0
			for(int i=0;i<num_sucursales;i++){
				unidades[i]=0;
			}
		}
		
		// Método que dado un identificador de sucursal, le suma a esa misma una cantidad
		// de unidades
		void SumaSucursal(int id, int cantidad){
			int posicion;
			
			for (int i=0;i<num_sucursales;i++)
				if(sucursales[i]==id)
					posicion=i;
					
			if(posicion==0)
				cout << " ";	// No se por qué asi se me corrige un error...
					
			
			unidades[posicion]=unidades[posicion]+cantidad;
		}
		
		// Método que devuelve la sucursal con mas ventas de la empresa
		int SucursalMasVentas(){
			int sucursal_mas_ventas;
			int max_ventas=0;
			
			for (int i=0;i<num_sucursales;i++)
				if(unidades[i]>max_ventas){
					sucursal_mas_ventas=sucursales[i];
					max_ventas=unidades[i];
				}
			
			return sucursal_mas_ventas;
		}
		
		// Método que devuelve la cantidad de ventas de la sucursal con mas ventas
		int NumVentasMejorSucursal(){
			int sucursal_mas_ventas;
			int max_ventas=0;
			
			for (int i=0;i<num_sucursales;i++)
				if(unidades[i]>max_ventas){
					sucursal_mas_ventas=sucursales[i];
					max_ventas=unidades[i];
				}
			
			return max_ventas;
		}
		
};

int main(){
	// Declaracion de variables
	int TERMINADOR=-1, identif_sucursal, unidades_vendidas, contador=0;
	int sucursales[100];
	char cod_producto;
	
	// Creamos el objeto Ventas
	Ventas ventas_empresa;
	
	
	// Entrada de datos
	while(identif_sucursal!=TERMINADOR){
		cout << "Introduzca el identificador de la nueva sucursal(-1 para terminar): ";
		cin >> identif_sucursal;
		
		sucursales[contador]=identif_sucursal;
		contador++;
	}
	
	
	// Establecemos las sucursales obtenidas
	ventas_empresa.SetSucursales(sucursales, contador+1);
	
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
	cout << endl << endl << "La sucursal con mayor numero de ventas es la sucursal " << ventas_empresa.SucursalMasVentas();
	cout << " con " << ventas_empresa.NumVentasMejorSucursal() << " unidades.";
	
	
	return 0;
}
