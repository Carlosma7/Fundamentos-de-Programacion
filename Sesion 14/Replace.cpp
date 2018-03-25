/***************************************************************************/
// FUNDAMENTOS DE PROGRAMACI�N
// GRADO EN INGENIER�A INFORM�TICA
//  
// CURSO 2015-2016
// (C) CARLOS MORALES AGUILERA
//
// Sesi�n 14
// Ejercicio Replace
//
/*	 
	Existe un m�todo para la clase string de C++, denominado
	replace, que cambia n caracteres de una cadena cad1, empezando en
	una determinada posici�n pos, por los caracteres presentes en una segunda cadena
	cad2. La llamada al m�todo es cad1.replace(pos, n, cad2). Ejemplos del
	funcionamiento de replace son:
	
	string cad1="Fundamental Programaci�n";
	cad1.replace(9,2,"os de la"); // "al" -> "os de la"
	// Ahora cad1 tiene "Fundamentos de la Programaci�n"
	cad1.replace(12,5,"en"); // "de la" -> "en"
	// Ahora cad1 tiene "Fundamentos en Programaci�n"
	
	Puede observar que, dependiendo de la cadena a insertar y de las posiciones especificadas,
	la secuencia final puede ser m�s grande o m�s peque�a que la original.
	
	
	Se quiere realizar esta tarea pero directamente en el main, trabajando sobre dos
	vectores de corchetes y sin ninguna clase. Se pide construir un programa que leer�
	caracteres hasta el terminador # y los almacenar� en el primer vector y de nuevo leer�
	caracteres hasta llegar a un segundo # y almacenar� los datos en el segundo vector.
	
	A continuaci�n, el programa leer� dos enteros pos y n y proceder� a reemplazar los
	n caracteres que hay a partir de la posici�n pos del primer vector, con los caracteres
	del segundo vector.
	
	Restricciones para este ejercicio: No se puede utilizar la clase string en ninguna
	parte del programa, debe hacerse lo m�s eficiente posible y no puede utilizarse un
	tercer vector en el que se vaya almacenando el resultado, es decir, las modificaciones
	deben hacerse directamente sobre el primer vector.
	
*/
/***************************************************************************/

#include <iostream>
#include <cstring>

using namespace std;

int main(){
	// Declaracion de variables
	char primera [20];
	char segunda [20];
	char caracter;
	int contador=0, n, pos;
	
	cout << "Introduzca la primera secuencia de caracteres (20 caracteres): ";
	cin >> caracter;
	while(caracter!='#' && contador<20){
		primera[contador]=caracter;

		contador++;
		cin >> caracter;
	}
	
	cout << endl << "Introduzca la segunda secuencia de caracteres (20 caracteres): ";
	contador=0;
	cin >> caracter;
	while(caracter!='#' && contador<20){
		segunda[contador]=caracter;

		contador++;
		cin >> caracter;
	}
	
	for(int i=contador;i<20;i++){
		primera[i]=' ';
		segunda[i]=' ';
	}
	
	// Mostramos las dos cadenas
	cout << "Mostramos las cadenas: " << endl;
	for(int i=0; i<20;i++)
		cout << primera[i];
		
	cout << endl;
	for(int i=0; i<20;i++)
		cout << segunda[i];
		
	// Pasamos a hacer el algoritmo de Replace
	cout << endl << endl << "Introduzca desde que posicion desea empezar a copiar: ";
	cin >> pos;
	cout << endl << "Introduzca cuantas posiciones desea copiar: ";
	cin >> n;
	
	contador=0;
	for(int i=pos; contador<n;i++){
		primera[i]=segunda[i];
		contador++;
	}
	
	
	// Mostramos el resultado final
	cout << endl << "Mostramos la cadena final: " << endl;
	for(int i=0; i<20;i++)
		cout << primera[i];
			
	return 0;
}
