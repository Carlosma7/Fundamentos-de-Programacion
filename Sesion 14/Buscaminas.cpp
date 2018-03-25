/***************************************************************************/
// FUNDAMENTOS DE PROGRAMACIÓN
// GRADO EN INGENIERÍA INFORMÁTICA
//  
// CURSO 2015-2016
// (C) CARLOS MORALES AGUILERA
//
// Sesión 14
// Ejercicio Buscaminas
//
/*	 
	Buscaminas es un juego muy conocido cuyo objetivo es
	encontrar todas las minas existentes en un tablero rectangular, sin abrir ninguna. Si el
	jugador abre una mina, pierde la partida.
	Se pide definir la clase TableroBuscaMinas conteniendo lo siguiente:
	
	a) Para representar el tablero se trabajará con una matriz de datos 5030 en la que
	todas las filas tienen el mismo número de columnas y los datos son de tipo bool.
	Contendrá un valor true en caso de haber una mina en la casilla especificada
	y false en caso contrario. Esta matriz será un dato miembro de la clase y al
	principio, todos los valores estarán a false.
	
	b) Un método para incluir una mina en una determinada casilla.
	
	c) Un método que reciba las coordenadas (i; j) de una casilla y devuelva un valor
	entero que indique el número de minas que rodean a la misma (será un número
	entre 0 y 8). En caso de que la casilla contenga una mina, se devolverá el valor
	..1.
	Hay que tener especial cuidado con las casillas que hay en los bordes de la matriz
	ya que la casilla en la posición [0][0], por ejemplo, sólo tiene tres vecinos
	rodeándola.
	
	Incluya un pequeño programa de prueba para asignar algunas minas y obtener las
	minas que hay alrededor de algunas casillas.
	
*/
/***************************************************************************/

#include <iostream>
#include <cstring>

using namespace std;

class TableroBuscaminas{
	private:
		bool matriz[50][30];
		
	public:
		TableroBuscaminas(){
			for(int i=0;i<50;i++)
				for(int j=0;j<30;j++)
					matriz[i][j]=false;	// Inicializamos sin minas
		}
		
		void PonerMina(int fila, int columna){
			matriz[fila][columna]=true;	// Colocamos la mina
		}
		
		double SeleccionaCasilla(int fila, int columna){
			int resultado=0;
			
			if(matriz[fila][columna]==true)
				resultado=-1;
			else{
				for(int i=fila-1;i<=fila+1;i++)
					for(int j=columna-1;j<=columna+1;j++)
						if((i>0) && (i<50) && (j>0) && (j<30))
							if(matriz[i][j]==true)
								resultado++;
			}
			
			
			return resultado;		
		
		}
		
};

int main(){
	// Declaracion de variables
	TableroBuscaminas mi_buscaminas;
	
	// Ponemos minas en 3 puntos (1,2) (2,4) (3,6)
	mi_buscaminas.PonerMina(1,2);
	mi_buscaminas.PonerMina(2,4);
	mi_buscaminas.PonerMina(3,6);
	
	
	cout << endl << endl;  
	// Comprobamos las minas en (1,2) (2,3) (8,8)
	cout << "Minas en (1,2): " << mi_buscaminas.SeleccionaCasilla(1,2) << endl;
	cout << "Minas en (2,3): " << mi_buscaminas.SeleccionaCasilla(2,3) << endl;
	cout << "Minas en (8,8): " << mi_buscaminas.SeleccionaCasilla(8,8) << endl;
			
	return 0;
}
