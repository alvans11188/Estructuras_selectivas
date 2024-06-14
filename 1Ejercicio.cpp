/*
1. Determinar si un alumno aprueba o reprueba un curso, sabiendo que aprobara si su 
promedio de tres calificaciones es mayor o igual a 70; reprueba en caso contrario.
*/

#include <iostream>
using namespace std;

int main (){
	int c1, c2, c3, t;
	cout << "Mediante el siguiente programa se determinara si el alumno esta aprobado desaprobado" << endl;
	cout <<"Ingrese calificacion 1: ";
	cin >> c1;
	cout <<"Ingrese calificacion 2: ";
	cin >> c2;
	cout <<"Ingrese calificacion 3: ";
	cin >> c3;
	t = c1 + c2+ c3;
	
	if (t >= 70){
		cout << "El alumno esta aprobado"<< endl;
	} else { 
		cout <<"El alumno esta desaprobado" << endl;
	}	
	return 0;		
	
}
