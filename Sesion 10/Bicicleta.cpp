/***************************************************************************/
// FUNDAMENTOS DE PROGRAMACI�N
// GRADO EN INGENIER�A INFORM�TICA
//  
// CURSO 2015-2016
// (C) CARLOS MORALES AGUILERA
//
// Sesi�n 10
// Ejercicio Bicicleta
//
/*	 
	Se quiere construir una clase para representar la tracci�n de una bicicleta, es decir, el
	conjunto de estrella (engranaje delantero), cadena y pi��n (engranaje trasero). Supondremos
	que la estrella tiene tres posiciones (numeradas de 1 a 3, siendo 1 la estrella
	m�s peque�a) y el pi��n siete (numeradas de 1 a 7, siendo 1 el pi��n m�s grande).
	La posici�n inicial de marcha es estrella = 1 y pi��n = 1.

	La clase debe proporcionar m�todos para cambiar la estrella y el pi��n, sabiendo que
	la estrella avanza o retrocede de 1 en 1 y los pi�ones cambian a saltos de uno o de
	dos. Si ha llegado al l�mite superior (inferior) y se llama al m�todo para subir (bajar) la
	estrella, la posici�n de �sta no variar�. Lo mismo se aplica al pi��n.

	Cread un programa principal que lea desde un fichero externo los movimientos realizados
	e imprima la situaci�n final de la estrella y pi��n. Los datos se leer�n en el
	siguiente formato: tipo de plato (pi��n o estrella) seguido del tipo de movimiento. Para
	codificar esta informaci�n se usar�n las siguientes letras: E indica una estrella, P un pi��n,
	S para subir una posici�n, B para bajar una posici�n, T para subir dos posiciones
	y C para bajar dos posiciones. T y C s�lo se aplicar�n sobre los pi�ones.


	E S P S P S P S P C E S E B #


	En este ejemplo los movimientos ser�an: la estrella sube, el pi��n sube en tres ocasiones
	sucesivas, el pi��n baja dos posiciones de golpe, la estrella sube y vuelve a
	bajar. Supondremos siempre que la posici�n inicial de la estrella es 1 y la del pi��n 1.
	As� pues, la posici�n final ser� Estrella=1 y Pi��n=2.

	Mejorad la clase para que no permita cambiar la marcha (con la estrella o el pi��n)
	cuando haya riesgo de que se rompa la cadena. Este riesgo se produce cuando la
	marcha a la que queremos cambiar es de la siguiente forma:

	 Estrella igual a 1 y pi��n mayor o igual que 5
	 Estrella igual a 2 y pi��n o bien igual a 1 o bien igual a 7
	 Estrella igual a 3 y pi��n menor o igual que 3
	
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
		
		// M�todo que sube 1 marcha a la Estrella
		void SubirEstrella(){
			estrella++;
			
			if(estrella>3)
				estrella=3;
		}
		
		// M�todo que baja 1 marcha a la Estrella
		void BajarEstrella(){
			estrella--;
			
			if(estrella<1)
				estrella=1;
		}
		
		// M�todo que sube 1 marcha al Pi�on
		void SubirPinion(int subida){
			int pinion_actual=pinion;
			
			pinion+=subida;
			
			// Para no romper la cadena
			if((estrella==1 && pinion>=5) || (estrella==2 && pinion==7))
				pinion=pinion_actual;
			
			if(pinion>7)
				pinion=7;
		}
		
		// M�todo que baja 1 marcha al Pi�on
		void BajarPinion(int bajada){
			int pinion_actual=pinion;
			
			pinion-=bajada;
			
			// Para no romper la cadena
			if((estrella==3 && pinion<=3) || (estrella==2 && pinion==1))
				pinion=pinion_actual;
			
			if(pinion<1)
				pinion=1;
		}
		
		// M�todo que cambia las marchas
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
	char marcha;	// Estrella o Pi��n
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
