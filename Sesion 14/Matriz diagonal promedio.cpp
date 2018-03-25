/***************************************************************************/
// FUNDAMENTOS DE PROGRAMACIÓN
// GRADO EN INGENIERÍA INFORMÁTICA
//  
// CURSO 2015-2016
// (C) CARLOS MORALES AGUILERA
//
// Sesión 14
// Ejercicio Matriz diagonal promedio.
//
/*	 
	En este ejercicio no hay que construir ninguna función o
	clase. Todo se programará en el main. Defina dos matrices de reales original
	y suavizada de tamaño 50 x 30. Lea desde teclado los valores de la matriz
	original, obligando a que sea simétrica. Para ello, lea el número de filas n y a
	continuación introduzca los n  n datos de la matriz.
	
	Construya la matriz suavizada acorde a las siguientes indicaciones:
	
	a) La tabla resultante será simétrica.
	
	b) Los valores de la diagonal principal de la tabla resultante serán iguales a los de
	la tabla original.
	
	c) Los valores del triángulo superior de la tabla resultante se calculan de la siguiente
	manera: si (i; j) es una posición en el triángulo superior de la tabla resultante,
	su valor es el valor medio de los valores que ocupan las posiciones de
	las columnas j; j + 1; : : : ; n .. 1 en la fila i de la tabla original.
	
*/
/***************************************************************************/

#include <iostream>
#include <cstring>

using namespace std;

int main(){
	// Declaracion de variables
	double original[5][5];
	double suavizada[5][5];
	
	int numero_aux=0, media,suma, contador=0;
	
	// Entrada de datos
    for(int i = 0; i < 5; i++) 	// Rellenamos la original
        for(int j = 0; j < 5; j++){
        	numero_aux++;
			original[i][j]=numero_aux;
			original[j][i]=numero_aux;
    	}
        
    for(int i=0;i<5;i++){			// Mostramos la original
    	for(int j=0;j<5;j++)
    		cout << original[i][j] << " ";
    	cout << endl;
    }
    
    // Suavizada
    for(int i = 0; i < 5; i++) 	// Rellenamos la suavizada
        for(int j = i+1; j < 5; j++){
        	suma=0;
        	contador=0;
        	for(int k=j; k<5;k++){
        		contador++;
        		suma+=original[i][k];
			}
			
			suavizada[i][j]=suma/contador;
			suavizada[j][i]=suavizada[i][j];
		}
        	
    for(int i = 0; i < 5; i++) 	// Rellenamos la diagonal de la suavizada
        suavizada[i][i]=original[i][i];
        
        
    cout << endl << endl << endl << endl << endl;
    for(int i=0;i<5;i++){			// Mostramos la suavizada
    	for(int j=0;j<5;j++)
    		cout << suavizada[i][j] << " ";
    	cout << endl;
    }
						
	return 0;
}
