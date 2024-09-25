#include <iostream>
#include <string>
using namespace std;
int main () {
	//dar la cantida de veces que aparece un caracter seleccionado por el usario en una cadena
	int x,contador=0;
	cout<<"ingrese una palabra:";
	string plb1;	cin>>plb1;
	cout<<"ingrese el caracter que busca:";
	string caracter; cin>>caracter;
	x=plb1.length();	string caracter2;
	for(int i=0;i<x;i++)
	{	
		caracter2=plb1.at(i);
		if(caracter==caracter2)
		{
			contador++;
		}
	}
	cout<<"el caracter que busca aparece "<<contador<<" veces"<<endl;
	return 0;
}
