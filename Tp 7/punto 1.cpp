#include <iostream>
#include <string>
using namespace std;
int main () {
	//muestra el tama�o de una cadena
	cout<<"ingrese un palabra:";
	string plb1;	getline(cin,plb1);
	cout<<"el tama�o es:"<<plb1.length();
	return 0;
}
