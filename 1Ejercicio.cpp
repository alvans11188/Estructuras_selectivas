#include <iostream>
using namespace std;

int main (){
	int c1, c2, c3, t;
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
