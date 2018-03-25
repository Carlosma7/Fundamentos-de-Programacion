/***************************************************************************/
// FUNDAMENTOS DE PROGRAMACIÓN
// GRADO EN INGENIERÍA INFORMÁTICA
//  
// CURSO 2015-2016
// (C) CARLOS MORALES AGUILERA
//
// Sesión 13
// Ejercicio Login automático
//
/*	 
	Se está diseñando un sistema web que recolecta datos
	personales de un usuario y, en un momento dado, debe sugerirle un nombre de
	usuario (login). Dicho login estará basado en el nombre y los apellidos; en concreto
	estará formado por los N primeros caracteres de cada nombre y apellido
	(en minúsculas, unidos y sin espacios en blanco). Por ejemplo, si el nombre es
	"Antonio Francisco Molina Ortega" y N=2, el nombre de usuario sugerido
	será "anfrmoor".
	
	Debe tener en cuenta que el número de palabras que forman el nombre y los apellidos
	puede ser cualquiera. Además, si N es mayor que alguna de las palabras que
	aparecen en el nombre, se incluirá la palabra completa. Por ejemplo, si el nombre
	es "Ana CAMPOS de la Blanca" y N=4, entonces la sugerencia será "anacampdelablan" 
	(observe que se pueden utilizar varios espacios en blanco para separar palabras).
	
	Implemente la clase Login que tendrá como único dato miembro el tamaño N. Hay
	que definir el método Codifica que recibirá una cadena de caracteres (tipo string)
	formada por el nombre y apellidos (separados por uno o más espacios en blanco) y
	devuelva otra cadena con la sugerencia de login.
	
	class Login{
		private:
		
			int num_caracteres_a_coger;
			
		public:
		
			Login (int numero_caracteres_a_coger)
				:num_caracteres_a_coger(numero_caracteres_a_coger)
				{ }
			
			string Codifica(string nombre_completo){
				......
			}
	};
	
	Los únicos métodos que necesita usar de la clase string son size y push_back.
	Para probar el programa lea los caracteres de la cadena
	
*/
/***************************************************************************/

#include <iostream>
#include <cstring>

using namespace std;

class Login{
	private:
		int num_caracteres_a_coger;
		
	public:
		Login (int numero_caracteres_a_coger)
			:num_caracteres_a_coger(numero_caracteres_a_coger)
			{ }
			
		string Codifica(string nombre_completo){
			string resultado;
			char caracter;
			int i=0;
			
			// Lectura adelantada
			for(int j=0;j<num_caracteres_a_coger;j++){
				resultado.push_back(nombre_completo[i]);
				i++;
			}
			
			// Vemos el caracter
			caracter=nombre_completo[i];
			
			// Fin de la lectura
			while(caracter!='.'){
				// Separamos cada palabra
				if(caracter==' '){
					i++;
					for(int j=0;j<num_caracteres_a_coger;j++){	// Sumamos caracteres
						resultado.push_back(nombre_completo[i]);
						i++;
					}
				}else{
					i++;
				}
				
				caracter=nombre_completo[i];
			}
			
				
			return resultado;
		}
			
};

int main(){
	// Declaracion de variables
	string nombre,login_nombre;
	int n;
	
	// Entrada de datos
	cout << "Introduzca un nombre (. para finalizar): ";
	getline(cin,nombre);
	
	cout << "Introduzca un numero de primeros caracteres del nombre: ";
	cin >> n;
	
	// Declaracion del login
	Login mi_login(n);
	
	// Codificamos el Login a partir del nombre proporcionado
	login_nombre=mi_login.Codifica(nombre);
	
	cout << endl << endl << "El login del usuario " << nombre << " es: " << login_nombre;
			
	return 0;
}
