#include <iostream>
using namespace std;

int main (){
	int calificacion1, calificacion2, calificacion3, total;
	cout <<"Ingrese calificacion 1: ";
	cin >> calificacion1;
	cout <<"Ingrese calificacion 2: ";
	cin >> calificacion2;
	cout <<"Ingrese calificacion 3: ";
	cin >> calificacion3;
	total = calificacion1 + calificacion2 + calificacion3;
	
	if (total >= 70){
		cout << "El alumno esta aprobado"<< endl;
	} else { 
		cout <<"El alumno esta desaprobado" << endl;
	}	
	return 0;		
	
}