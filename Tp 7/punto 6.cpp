#include <iostream>
#include <string>
#include <stdlib.h>
using namespace std;
int main () {
	int opcion,contador,contador2=0;	int num1,x=1,y,m;
	string cadena;	string cadenafull;	string caracter; string caracter2;	string reverso;
	cout<<"seleccione una opcion ingresando el numero de la opcion\n"<<endl;
	cout<<"opcion 1: dar la longitud de una cadena\nopcion 2: unir 2 cadenas\nopcion 3: devolver el reverso de una cadena\nopcion 4: dar la cantida de veces que aparece un caracter seleccionado por el usario en una cadena\nopcion 5: salir"<<endl;
	cin>>opcion;
	
	cout<<"\ningresa la cantidad de cadenas que quieres ingresar: ";
	cin>>contador;
	for(int i=1;i<=contador;i++)
	{
		cout<<"\ningresa lo que quieres que halla en la cadena:";
		cin>>cadena;
		cadenafull=cadenafull+cadena;
	}
	
	switch(opcion)
	{
		case 1:
			
			cout<<"\nel tamaño es: "<<cadenafull.size()<<endl<<"\n";
		break;
		case 2:
			cout<<"\n"<<cadenafull<<"\n"<<endl;
		break;
		case 3:
			num1=cadenafull.length();
			for(int y=num1;x<=y;x++)
			{
				cout<<cadenafull[num1-(x)];
			}
			break;
		case 4:
			cout<<"\ningrese el caracter que busca: ";
			cin>>caracter;
			m=cadenafull.length();
			for(int j=0;j<m;j++)
			{	
				caracter2=cadenafull.at(j);
				if(caracter==caracter2)
				{
					contador2++;
				}
			}
			cout<<"\nel caracter que busca aparece "<<contador2<<" veces"<<endl<<"\n";
		break;
		case 5:
			return 0;
		break;
		default:
			cout<<"recuerde que solo puede ingresar las opciones del 1 al 5"<<endl;
		break;
	}
	
	return 0;	
}
