/***************************************************************************/
// FUNDAMENTOS DE PROGRAMACIÓN
// GRADO EN INGENIERÍA INFORMÁTICA
//  
// CURSO 2015-2016
// (C) CARLOS MORALES AGUILERA
//
// Sesión 4
// Ejercicio Renta bruta y neta
//
/*	 
	Cread un programa que lea los datos fiscales da una persona, reajuste su renta bruta
	según el criterio que se indica posteriormente e imprima su renta neta final.

	• La renta bruta es la cantidad de dinero íntegra que el trabajador gana.

	• La retención fiscal es el tanto por ciento que el gobierno se queda.

	• La renta neta es la cantidad que le queda al trabajador después de quitarle el
	porcentaje de retención fiscal, es decir:
	Renta_neta = Renta_bruta - Renta_bruta * Retención final / 100
	
*/
/***************************************************************************/

#include <iostream>
#include <cmath>

using namespace std;

int main(){
	
	// Declaración de variables
	char autonomo, pensionista, estado_civil;
	double Renta_neta, Renta_bruta, Retencion;
	
	// Entrada de Datos
	cout << "Introduzca si es autonomo(A=Autonomo/N=No Autonomo): ";
	cin >> autonomo;
	
	cout << "Introduzca si es pensionista(P=Pensionista/N=No Pensionista): ";
	cin >> pensionista;

	cout << "Introduzca el estado civil(C=Casado/S=Soltero): ";
	cin >> estado_civil;
	
	cout << "Introduzca el valor de renta bruta: ";
	cin >> Renta_bruta;

	cout << "Introduzca el valor de la Retencion: ";
	cin >> Retencion;

	// Cómputos
	if(autonomo=='A'){	//Condición de que sea autónomo
		cout << endl << "Es autonomo." << endl;
		Retencion -= 3;
	}else{
		if(pensionista=='P'){	//Condición de que sea pensionista
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
