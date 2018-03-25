/***************************************************************************/
// FUNDAMENTOS DE PROGRAMACI覰
// GRADO EN INGENIER虯 INFORM罷ICA
//  
// CURSO 2015-2016
// (C) CARLOS MORALES AGUILERA
//
// Sesi髇 8
// Ejercicio Lee Alternativa
//
/*	 
	Escriba una funci髇 en C++ LeeOpcion2Alternativas que imprima en pantalla
	un mensaje, lea una opci髇 como un car醕ter y s髄o permita aceptar los caracteres
	'S' o 'N' (may鷖cula o min鷖cula).
	
	Aplique esta funci髇 en la soluci髇 del ejercicio 13 (Renta bruta y
	neta) de la relaci髇 de problemas II, para leer si una persona es pensionista o si es
	aut髇omo.
	
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
	
	// Declaraci贸n de variables
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

	// C贸mputos
	if(autonomo=='S'){	//Condici贸n de que sea aut贸nomo
		cout << endl << "Es autonomo." << endl;
		Retencion -= 3;
	}else{
		if(pensionista=='S'){	//Condici贸n de que sea pensionista
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
					cout << endl << "Est谩 casado y con renta superior a 20000 euros." << endl;
					Retencion += 2.5;
				}else{
					if(estado_civil=='S'){	//Condicion de soltero y renta superior a 20000 euros
						cout << endl << "Est谩 soltero y con renta superior a 20000 euros." << endl;
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
