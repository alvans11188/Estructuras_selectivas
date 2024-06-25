/*
14. Si las vocales se representan con números del 1 al 5, lea un número e indique que vocal 
es.
*/

#include <iostream>
using namespace std;

void vocal( int a ) {
	switch(a){
		case 1: 
			cout << "La volcal es : a"; 
			break; 
		case 2: 
			cout << "La volcal es : e";
			break; 
		case 3:
			cout << "La volcal es : i";
			break; 
		case 4: 
			cout << "La volcal es : o";
			break; 
		case 5: 
			cout << "La volcal es : u";
			break; 
		default: 
			cout << "El numero ingresado es incorrecto";
	}
}

int main() {
	int n;
	cout << "Ingresa un numero del 1 al 5 para determinar que vocal representa: ";
	cin >> n;
	vocal( n );
	return 0;
}
