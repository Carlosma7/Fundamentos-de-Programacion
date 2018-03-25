/***************************************************************************/
// FUNDAMENTOS DE PROGRAMACIÓN
// GRADO EN INGENIERÍA INFORMÁTICA
//  
// CURSO 2015-2016
// (C) CARLOS MORALES AGUILERA
//
// Sesión 13
// Ejercicio Matrices. Sólo apartados a) Traspuesta y d) Multiplicación
//
/*	 
	En este ejercicio, no hay que construir ninguna clase ni función. Es un ejercicio sobre
	recorridos de una matriz declarada directamente en el main.
	Leed desde teclado dos variables util_filas y util_columnas y leed los datos
	de una matriz de enteros de tamaño util_filas x util_columnas. Sobre dicha
	matriz, se pide lo siguiente:
	
	a) Calcular la traspuesta de la matriz, almacenando el resultado en otra matriz.
	
	d) Leer los datos de otra matriz y multiplicar ambas matrices (las dimensiones de la
	segunda matriz han de ser compatibles con las de la primera para poder hacer la
	multiplicación)
	
*/
/***************************************************************************/

#include <iostream>
#include <cstring>

using namespace std;

int main(){
	// Declaracion de variables
	int util_filas, util_columnas;
	
	// Entrada de datos
	cout << "Introduzca el numero de filas: ";
	cin >> util_filas;
	cout << "Introduzca el numero de columnas: ";
	cin >> util_columnas;
	
	// Declaramos la matriz
	int matriz[util_filas][util_columnas];
	
	// Introducción de datos en la matriz
	int n=1;
	for(int i=0;i<util_filas;i++)
		for(int j=0;j<util_columnas;j++){
			matriz[i][j]=n;
			n++;
		}
	
	// Mostramos la matriz
	cout << "Matriz inicial: " << endl;
	for(int i=0;i<util_filas;i++){
		for(int j=0;j<util_columnas;j++)
			cout << matriz[i][j] << " ";
			
		cout << endl;
	}
	
	
	// a) Calculo de la traspuesta
	cout << endl << "Matriz traspuesta: " << endl;
	for(int i=0;i<util_filas;i++){
		for(int j=0;j<util_columnas;j++)
			cout << matriz[j][i] << " ";
			
		cout << endl;
	}
	
	// d) Multiplicacion de matrices
	int matriz_multiplicar[util_filas][util_columnas];
	
	// Introducción de datos en la matriz_multiplicar
	int a=1;
	for(int i=0;i<util_filas;i++)
		for(int j=0;j<util_columnas;j++){
			matriz_multiplicar[i][j]=a;
			a+=2;
		}
		
		
	// Mostramos la matriz a multiplicar
	cout << endl << "Matriz a multiplicar: " << endl;
	for(int i=0;i<util_filas;i++){
		for(int j=0;j<util_columnas;j++)
			cout << matriz_multiplicar[i][j] << " ";
			
		cout << endl;
	}
	
	// Multiplicamos las matrices
	int matriz_multiplicada[util_filas][util_columnas];
	
	// Inicializamos todas sus casillas a 0
	for(int i=0;i<util_filas;i++)
		for(int j=0;j<util_columnas;j++)
			matriz_multiplicada[i][j]=0;
		
	// Realizamos la multiplicación
	for(int i=0; i<util_filas; i++)
        for(int j=0; j<util_columnas; j++)
            for(int z=0; z<util_filas; z++)
                matriz_multiplicada[i][j] += matriz[i][z] * matriz_multiplicar[z][j];
	
	// Mostramos la matriz resultado de la multiplicacion
	cout << endl << "Matriz multiplicacion: " << endl;
	for(int i=0;i<util_filas;i++){
		for(int j=0;j<util_columnas;j++)
			cout << matriz_multiplicada[i][j] << " ";
			
		cout << endl;
	}
						
	return 0;
}
