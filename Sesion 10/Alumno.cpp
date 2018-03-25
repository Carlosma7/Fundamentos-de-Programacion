/***************************************************************************/
// FUNDAMENTOS DE PROGRAMACIÓN
// GRADO EN INGENIERÍA INFORMÁTICA
//  
// CURSO 2015-2016
// (C) CARLOS MORALES AGUILERA
//
// Sesión 10
// Ejercicio Alumno
//
/*	 
	Definir la clase AlumnoFP, que almacene el nombre, el primer apellido, el DNI del
	alumno y cada una de las partes consideradas en la evaluación de la asignatura: teoría,
	parcial_pract1, parcial_pract2, participación_clase. La escala utilizada para evaluar
	cada parte es de 0 a 10.
	
*/
/***************************************************************************/

#include <iostream>
#include <cstring>

using namespace std;

class AlumnoFP{
	private:
		// Atributos de la clase
		string nombre,apellido,dni;
		double teoria,parcial_pract1, parcial_pract2, participacion_clase;
		
	public:
		// Constructor de la clase
		AlumnoFP(string nombre_al, string apellido_al,string dni_al){
			// Asignamos datos alumno
			nombre=nombre_al;
			apellido=apellido_al;
			dni=dni_al;
		}
		
		// Método que inserta las notas del Alumno
		void InsertaNotas(){
			// Asignamos sus notas
			do{
				cout << "Introduzca la nota de teoria (Entre 0 y 10): ";
				cin >> teoria;
			}while(teoria<0.0 || teoria>10.0);
			
			do{
				cout << "Introduzca la nota del primer parcial (Entre 0 y 10): ";
				cin >> parcial_pract1;
			}while(parcial_pract1<0.0 || parcial_pract1>10.0);
			
			do{
				cout << "Introduzca la nota del segundo parcial (Entre 0 y 10): ";
				cin >> parcial_pract2;
			}while(parcial_pract2<0.0 || parcial_pract2>10.0);
			
			do{
				cout << "Introduzca la nota de participacion en clase (Entre 0 y 10): ";
				cin >> participacion_clase;
			}while(participacion_clase<0.0 || participacion_clase>10.0);
		}
		
		// Método que calcula y devuelve la nota final del alumno bajo unos criterios de calificación
		double NotaFinal(){
			double nota=(teoria*0.7)+(parcial_pract1*0.05)+(parcial_pract2*0.15)+(participacion_clase*0.1);
			
			return nota;
		}
		
		// Método que indica que partes de la asignatura tiene suspensa el alumno
		void ParteSuspensa(){
			if(teoria<5.0)
				cout << endl << "La teoria esta suspensa con un: " << teoria << endl;
				
			if(parcial_pract1<5.0)
				cout << endl << "El primer parcial esta suspenso con un: " << parcial_pract1 << endl;
				
			if(parcial_pract2<5.0)
				cout << endl << "El segundo parcial esta suspenso con un: " << parcial_pract2 << endl;
				
			if(participacion_clase<5.0)
				cout << endl << "La participacion en clase esta suspensa con un: " << participacion_clase << endl;
		}
};

int main(){
	// Declaracion de variables
	string nombre;
	string apellido;
	string dni;
	
	// Entrada de datos
	cout << "Introduzca el nombre del alumno: ";
	cin >> nombre;
	
	cout << "Introduzca el apellido del alumno: ";
	cin >> apellido;
	
	cout << "Introduzca el dni del alumno: ";
	cin >> dni;
	
	// Creamos el objeto Alumno con sus datos personales
	AlumnoFP mi_alumno(nombre, apellido, dni);
	
	// Insertamos las notas
	mi_alumno.InsertaNotas();
	
	// Comprobamos si hemos suspendido alguna parte
	mi_alumno.ParteSuspensa();
	
	// Salida de datos
	// Mostramos la nota final
	cout << endl << "La nota final del alumno " << nombre << " es: " << mi_alumno.NotaFinal() << endl << endl;
	
	
	return 0;
}
