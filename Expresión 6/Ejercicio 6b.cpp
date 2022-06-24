/*
Ejercicio 6: Escriba un programa que lea la nota final de cuatro
alumnos y calcule la nota final media de los cuatro alumnos.
*/

#include <iostream>
using namespace std;

int main()
{
	float alumno1, alumno2, alumno3, alumno4, promedio;

	cout << "Introduzca la nota final del primer alumno: \n"; cin >> alumno1;
	cout << "Introduzca la nota final del segundo alumno: \n"; cin >> alumno2;
	cout << "Introduzca la nota final del tercer alumno: \n"; cin >> alumno3;
	cout << "Introduzca la nota final del cuarto alumno: \n"; cin >> alumno4;

	//recordando que el promedio es: (sumatoria a1, a2, a3...)/n.
	promedio = (alumno1 + alumno2 + alumno3 + alumno4) / 4;

	cout.precision(5);
	cout << "La nota final media de los cuatros alumnos es: \n" << promedio << endl;

	return 0;
}