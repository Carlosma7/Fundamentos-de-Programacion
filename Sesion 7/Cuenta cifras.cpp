/*********************************************************************/
// FUNDAMENTOS DE PROGRAMACIÓN
// GRADO EN INGENIERÍA INFORMÁTICA
//
// CURSO 2015-2016
// (C) CARLOS MORALES AGUILERA
//
// Sesión 6
// Ejercicio Cuenta cifras
//
/* 
	¿Cuántas veces aparece el dígito 9 en todos los números que hay entre el 1 y el 100? 
	Por ejemplo, el 9 aparece una vez en los números 19 y 92 mientras que aparece dos veces
	en el 99. Pretendemos diseñar un algoritmo que responda a esta sencilla pregunta, pero
	de forma suficientemente generalizada. Para	ello, se pide construir un programa que lea
	una cifra (entre 1 y 9), dos enteros min y max y calcule el número de apariciones del 
	dígito cifra en los números contenidos en el intervalo cerrado [min, max].
*/

#include <iostream>
#include <cmath>

using namespace std;

// Funcion que comprueba si un valor tiene una cifra determinada en uno de sus digitos
int ContieneCifra(int numero, int cifra_buscar){
	int contiene=0;
	
	int digito;
	int contador_digitos=0;
	int indice,resto;
	
	digito= numero;
	
	
	while(digito>0){
		digito=digito/10;
		contador_digitos++;
	}
	
	
	do{
		indice=pow(10,contador_digitos-1);
		digito=numero/indice;
		resto=numero%indice;
		
		contador_digitos--;
		numero=resto;
		
		if(digito==cifra_buscar)
			contiene++;
	}while(contador_digitos>0);
	
	return contiene;
} 


int main() // Programa Principal
{                       

	// Declaración de variables
	
	int min, max, cifra, contador_veces=0;
	
	// Lectura adelantada
	cout << "Introduzca el minimo [min,max]: ";
	cin >> min;
	cout << "Introduzca el maximo [min,max]: ";
	cin >> max;
	
	cout << "Introduzca la cifra a buscar: ";
	cin >> cifra;
	
	
	//Computos
	for(int i=min; i <=max;i++){
		contador_veces+= ContieneCifra(i,cifra);	//Llamada a la funcion contiene cifra
	}
	
	
	//Salidas
	cout << endl << "El numero de veces que aparece el minimo en el intervalo [" << min << "," << max;
	cout << "] es: " << contador_veces << " veces." << endl <<endl;
	
	
	
	
	return (0);
}
 
