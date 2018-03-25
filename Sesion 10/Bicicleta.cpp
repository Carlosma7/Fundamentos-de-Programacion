/***************************************************************************/
// FUNDAMENTOS DE PROGRAMACIÓN
// GRADO EN INGENIERÍA INFORMÁTICA
//  
// CURSO 2015-2016
// (C) CARLOS MORALES AGUILERA
//
// Sesión 10
// Ejercicio Bicicleta
//
/*	 
	Se quiere construir una clase para representar la tracción de una bicicleta, es decir, el
	conjunto de estrella (engranaje delantero), cadena y piñón (engranaje trasero). Supondremos
	que la estrella tiene tres posiciones (numeradas de 1 a 3, siendo 1 la estrella
	más pequeña) y el piñón siete (numeradas de 1 a 7, siendo 1 el piñón más grande).
	La posición inicial de marcha es estrella = 1 y piñón = 1.

	La clase debe proporcionar métodos para cambiar la estrella y el piñón, sabiendo que
	la estrella avanza o retrocede de 1 en 1 y los piñones cambian a saltos de uno o de
	dos. Si ha llegado al límite superior (inferior) y se llama al método para subir (bajar) la
	estrella, la posición de ésta no variará. Lo mismo se aplica al piñón.

	Cread un programa principal que lea desde un fichero externo los movimientos realizados
	e imprima la situación final de la estrella y piñón. Los datos se leerán en el
	siguiente formato: tipo de plato (piñón o estrella) seguido del tipo de movimiento. Para
	codificar esta información se usarán las siguientes letras: E indica una estrella, P un piñón,
	S para subir una posición, B para bajar una posición, T para subir dos posiciones
	y C para bajar dos posiciones. T y C sólo se aplicarán sobre los piñones.


	E S P S P S P S P C E S E B #


	En este ejemplo los movimientos serían: la estrella sube, el piñón sube en tres ocasiones
	sucesivas, el piñón baja dos posiciones de golpe, la estrella sube y vuelve a
	bajar. Supondremos siempre que la posición inicial de la estrella es 1 y la del piñón 1.
	Así pues, la posición final será Estrella=1 y Piñón=2.

	Mejorad la clase para que no permita cambiar la marcha (con la estrella o el piñón)
	cuando haya riesgo de que se rompa la cadena. Este riesgo se produce cuando la
	marcha a la que queremos cambiar es de la siguiente forma:

	 Estrella igual a 1 y piñón mayor o igual que 5
	 Estrella igual a 2 y piñón o bien igual a 1 o bien igual a 7
	 Estrella igual a 3 y piñón menor o igual que 3
	
*/
/***************************************************************************/

#include <iostream>
#include <cstring>

using namespace std;

class Bicicleta{
	private:
		// Atributos de la clase
		int estrella, pinion;
		
	public:
		// Constructor de la clase
		Bicicleta(){
			estrella=1;
			pinion=1;
		}
		
		// Método que sube 1 marcha a la Estrella
		void SubirEstrella(){
			estrella++;
			
			if(estrella>3)
				estrella=3;
		}
		
		// Método que baja 1 marcha a la Estrella
		void BajarEstrella(){
			estrella--;
			
			if(estrella<1)
				estrella=1;
		}
		
		// Método que sube 1 marcha al Piñon
		void SubirPinion(int subida){
			int pinion_actual=pinion;
			
			pinion+=subida;
			
			// Para no romper la cadena
			if((estrella==1 && pinion>=5) || (estrella==2 && pinion==7))
				pinion=pinion_actual;
			
			if(pinion>7)
				pinion=7;
		}
		
		// Método que baja 1 marcha al Piñon
		void BajarPinion(int bajada){
			int pinion_actual=pinion;
			
			pinion-=bajada;
			
			// Para no romper la cadena
			if((estrella==3 && pinion<=3) || (estrella==2 && pinion==1))
				pinion=pinion_actual;
			
			if(pinion<1)
				pinion=1;
		}
		
		// Método que cambia las marchas
		void CambiaMarchas(char plato, char cantidad){
			if(plato=='E'){
				if(cantidad=='S')
					SubirEstrella();
				if(cantidad=='B')
					BajarEstrella();
			}
			
			if(plato=='P'){
				if(cantidad=='S')
					SubirPinion(1);
				if(cantidad=='B')
					BajarPinion(1);
				if(cantidad=='T')
					SubirPinion(2);
				if(cantidad=='C')
					BajarPinion(2);
			}
			
		}
		
		int GetEstrella(){
			return estrella;
		}
		
		int GetPinion(){
			return pinion;
		}
		
};

int main(){
	// Declaracion de variables
	char marcha;	// Estrella o Piñón
	char cambio;	// Cambio de la marcha(subida o bajada)
	
	Bicicleta mi_bicicleta;	// Creamos el objeto Bicicleta
	
	cout << "Introduzca la seria de cambios de subidas y bajadas de marchas: ";
	cin >> marcha;
	
	while (marcha != '#'){
		cin >> cambio;
		
		mi_bicicleta.CambiaMarchas(marcha,cambio);
		
		cin >> marcha;
	}
	
	
	cout << "Las marchas son: ESTRELLA: " << mi_bicicleta.GetEstrella() << ". PINON: ";
	cout << mi_bicicleta.GetPinion() << endl << endl; 
	
	return 0;
}
