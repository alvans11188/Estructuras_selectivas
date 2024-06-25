/*
1. Determinar si un alumno aprueba o reprueba un curso, sabiendo que aprobara si su 
promedio de tres calificaciones es mayor o igual a 70; reprueba en caso contrario.
*/

#include <iostream>
using namespace std;

double funcion(double x, double y, double z){
	double t;
	t = ( x + y + z ) / 3;
	return t;
}

void aprobo( double r ) {
	if ( r >= 70 ) {
		cout << "El alumno esta aprobado"<< endl;
	} else {
		cout <<"El alumno esta desaprobado" << endl;
	}
}

int main (){
	double c1, c2, c3, t, r;
	cout << "Mediante el siguiente programa se determinara si el alumno esta aprobado desaprobado" << endl;
	cout <<"Ingrese calificacion 1: ", cin >> c1;
	cout <<"Ingrese calificacion 2: ", cin >> c2;
	cout <<"Ingrese calificacion 3: ", cin >> c3;
	if (c1 >= 0 & c2 >= 0 & c3 >= 0){
		r=funcion(c1,c2,c3);
		aprobo( r );	
	} else {
		cout << "Los datos ingresados son invalidos, intente volver a escribir los numeros"<< endl;
	}
	return 0;		
	
}
