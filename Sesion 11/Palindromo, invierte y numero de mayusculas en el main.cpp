/***************************************************************************/
// FUNDAMENTOS DE PROGRAMACI�N
// GRADO EN INGENIER�A INFORM�TICA
//  
// CURSO 2015-2016
// (C) CARLOS MORALES AGUILERA
//
// Sesi�n 11
// Ejercicio Pal�ndromo, invierte y n�mero de may�sculas en el main
//
/*	 
	En este ejercicio trabajaremos con un vector directamente en el main, sin utilizar
	clases.
	
	Declare un vector de caracteres de tama�o 100. Lea las componentes considerando
	como terminador el car�cter # (�ste no forma parte de la secuencia) y que no se
	introduzcan m�s de 100 caracteres. Las componentes le�das ocupar�n las primeras
	posiciones contiguas del vector. El resto de las posiciones se quedar�n con el valor
	indeterminado (basura) que el compilador le asignase al principio. Para conocer cu�ntas
	componentes se est�n utilizando, utilice una variable total_utilizados (que,
	obviamente, deber� ser menor de 100 en todo momento)

	Implemente algoritmos para realizar las siguientes tareas:

	a) Comprobar si el vector es un pal�ndromo, es decir, que se lee igual de izquierda a
	derecha que de derecha a izquierda. Por ejemplo, {'a','b','b','a'} ser�a
	un pal�ndromo, pero {'a','c','b','a'} no lo ser�a. Si la secuencia tiene un
	n�mero impar de componentes, la que ocupa la posici�n central es descartada,
	por lo que {'a','b','j','b','a'} ser�a un pal�ndromo.

	b) Invertir el vector. Si �ste conten�a, por ejemplo, los caracteres
	{'m','u','n','d','o'}, despu�s de llamar al m�todo se quedar� con
	{'o','d','n','u','m'}.

	c) Contar el n�mero de may�sculas que contiene.
	
*/
/***************************************************************************/

#include <iostream>
#include <cstring>

using namespace std;

void ImprimeVector(char v[], int tamanio){
	cout << endl << endl << "[ ";
	for(int i=0;i<tamanio;i++)
		cout << v[i] << " ";
	cout << "]" << endl << endl;
}

void InvierteVector(char v[], int tamanio){
	char invertido[tamanio];
	
	// Copiamos en el vector auxiliar
	for (int i=0;i<tamanio;i++)
		invertido[i]=v[i];
	
	// Invertimos el vector usando el auxiliar
	for(int i1=0, i2=tamanio-1; i1<=tamanio; i1++, i2--)
		v[i1]=invertido[i2];
}

int main(){
	// Declaracion de variables
	const int TAM=100;
	char mi_vector[TAM]; 		//Declaramos un vector de tama�o 100
	int total_utilizados=0;
	char car_introducido;
	
	// Entrada de datos
	cout << "Introduzca un caracter (# para terminar): ";
	cin >> car_introducido;
	
	while(car_introducido!='#' && total_utilizados<100){
		mi_vector[total_utilizados]=car_introducido;
		total_utilizados++;
		
		cout << "Introduzca un caracter (# para terminar): ";
		cin >> car_introducido;
	}
	
	// Mostramos el vector
	cout << "Mostramos el vector: ";
	ImprimeVector(mi_vector, total_utilizados);
	
	// Comprobamos si es palindromo
	bool es_palindromo=true;
	int j=0, k=total_utilizados-1;
	
	while(j<=total_utilizados && j>=0){
		if(mi_vector[j]!=mi_vector[k])
			es_palindromo=false;
		
		j++;
		k--;
	}
	
	if(es_palindromo)
		cout << "El vector es palindromo." << endl;
	else
		cout << "El vector no es palindromo." << endl;
		
	// Invertimos el vector
	cout << "Mostramos el vector invertido: ";
	
	InvierteVector(mi_vector,total_utilizados);
	
	ImprimeVector(mi_vector, total_utilizados);
	
	// Contamos el n� de mayusculas que contiene el vector
	int num_mayus=0;
	
	for(int i=0; i<total_utilizados;i++)
		if(mi_vector[i]>='A' && mi_vector[i]<='Z')
			num_mayus++;
			
	cout << "El numero de mayusculas que hay en el vector es " << num_mayus << " mayusculas." << endl << endl;
			
	return 0;
}
