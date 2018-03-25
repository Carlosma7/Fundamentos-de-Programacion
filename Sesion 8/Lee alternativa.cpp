/***************************************************************************/
// FUNDAMENTOS DE PROGRAMACI�N
// GRADO EN INGENIER�A INFORM�TICA
//  
// CURSO 2015-2016
// (C) CARLOS MORALES AGUILERA
//
// Sesi�n 8
// Ejercicio Lee Alternativa
//
/*	 
	Escriba una funci�n en C++ LeeOpcion2Alternativas que imprima en pantalla
	un mensaje, lea una opci�n como un car�cter y s�lo permita aceptar los caracteres
	'S' o 'N' (may�scula o min�scula).
	
	Aplique esta funci�n en la soluci�n del ejercicio 13 (Renta bruta y
	neta) de la relaci�n de problemas II, para leer si una persona es pensionista o si es
	aut�nomo.
	
*/
/***************************************************************************/

#include <iostream>
#include <cmath>

using namespace std;

char LeeOpcion2Alternativas(){
	char opcion;
	
	do{
		cout << "(S/N): ";
		cin >> opcion;
		
		opcion=toupper(opcion);
		
	}while((opcion!='S') && (opcion!='N'));
	
	
	
	return opcion;
}

int main(){
	
	// Declaración de variables
	char autonomo, pensionista, estado_civil;
	double Renta_neta, Renta_bruta, Retencion;
	
	// Entrada de Datos
	cout << "Introduzca si es autonomo ";
	autonomo=LeeOpcion2Alternativas();
	
	cout << "Introduzca si es pensionista ";
	pensionista=LeeOpcion2Alternativas();

	cout << "Introduzca el estado civil(C=Casado/S=Soltero): ";
	cin >> estado_civil;
	
	cout << "Introduzca el valor de renta bruta: ";
	cin >> Renta_bruta;

	cout << "Introduzca el valor de la Retencion: ";
	cin >> Retencion;

	// Cómputos
	if(autonomo=='S'){	//Condición de que sea autónomo
		cout << endl << "Es autonomo." << endl;
		Retencion -= 3;
	}else{
		if(pensionista=='S'){	//Condición de que sea pensionista
			cout << endl << "Es pensionista." << endl;
			Retencion += 1;
		}else{
			cout << endl << "No es autonomo ni pensionista." << endl;
			Retencion += 2;
			
			if(Renta_bruta<20000){	//Condicion de renta bruta inferior a 20000 euros
				cout << endl << "Tiene renta bruta inferior a 20000 euros." << endl;
				Retencion +=2;
			}else{
				if(estado_civil=='C'){	//Condicion de casado y renta superior a 20000 euros
					cout << endl << "Está casado y con renta superior a 20000 euros." << endl;
					Retencion += 2.5;
				}else{
					if(estado_civil=='S'){	//Condicion de soltero y renta superior a 20000 euros
						cout << endl << "Está soltero y con renta superior a 20000 euros." << endl;
						Retencion += 3;
					}
				}
			}
		}
	}

	Renta_neta = Renta_bruta - (Renta_bruta * (Retencion/ 100));
	
	// Salida de datos
	cout << endl << "La renta neta es: " << Renta_neta << " euros." << endl << endl;
	
	
	
	return(0);
	
}
