/*
14. Si las vocales se representan con números del 1 al 5, lea un número e indique que vocal 
es.
*/

#include <iostream>
using namespace std;
int main (){
	int n;
	cout << "Ingrese un numero del 1 al 5";
	cin >> n;
	if (n==1){
		cout << "La vocal es a";
	}else{
		if (n==2){
			cout << "la vocal es e";
		}else{
			if (n==3){
				cout << "la vocal es i";
			}else{
				if (n==4){
					cout << "la vocal es o";
				}else{
					if (n==5){
						cout << "la vocal es u";
					}else{
						cout << "se ingreso un valor invalido";
					}
				}
			}
		}
	}
	
	return 0;
}
