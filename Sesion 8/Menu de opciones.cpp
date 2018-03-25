/***************************************************************************/
// FUNDAMENTOS DE PROGRAMACI�N
// GRADO EN INGENIER�A INFORM�TICA
//  
// CURSO 2015-2016
// (C) CARLOS MORALES AGUILERA
//
// Sesi�n 8
// Ejercicio Menu de opciones
//
/*	 
	Escribir un programa que lea dos n�meros enteros, escriba en pantalla el men� que
	se muestra a continuaci�n, lea la opci�n seleccionada y muestre el resultado de la
	operaci�n indicada.
	
	----------------
	I. Introducir n�meros
	S. Suma
	P. Producto
	M. M�ximo
	R. SaliR
	----------------
	Introduzca opci�n:
	
	Observe que se permite realizar distintas operaciones (opciones S,P,M) con los mismos
	valores num�ricos (los introducidos en la opci�n I)
	
*/
/***************************************************************************/

#include <iostream>

using namespace std;

int IntroduceNumero(){
	int n1;
	
	cout << "Introduzca el valor del numero: ";
	cin >> n1;
	
	
	return n1;
}

void Suma(int a, int b){
	cout << "La suma de " << a << " + " << b << " es igual a " << a+b << endl;
}

void Producto(int a, int b){
	cout << "El producto de " << a << " x " << b << " es igual a " << a*b << endl;
}

void Maximo(int a, int b){
	if(a>b)
		cout << a << " es mayor que " << b << endl;
	else if(b>a)
			cout << b << " es mayor que " << a << endl;
		else
			cout << a << " y " << b << " son iguales" << endl;
}

void Menu(){
	char opcion;
	int a,b;
	
	do{	//Mantiene el menu activo hasta que se use R
	
	do{
		cout << "----------------" << endl;
		cout <<	"I. Introducir n�meros" << endl;
		cout <<	"S. Suma" << endl;
		cout <<	"P. Producto" << endl;
		cout <<	"M. M�ximo" << endl;
		cout <<	"R. Salir" << endl;
		cout <<	"----------------" << endl;
		cout <<	"Introduzca opci�n:" << endl;
		cin >> opcion;
	}while((opcion!='I') && (opcion!='S') && (opcion!='P') && (opcion!='M') && (opcion!='R'));
	
	switch(opcion){
		
		case 'I' :
         	a=IntroduceNumero();
         	b=IntroduceNumero();
         	break;
      	case 'S' :
      		Suma(a,b);
      		break;
      	case 'P' :
        	Producto(a,b);
        	break;
      	case 'M' :
        	Maximo(a,b);
        	break;
      	case 'R' :
      		break;
	}
	
	}while(opcion!='R');
	
}

int main(){
	//Llamamos a la funcion del menu
	
	Menu();
	
	return(0);
	
}
