#include <iostream>
#include <string.h>
#include <cctype>
using namespace std;
int main () {
	//dar la cantida de letras que tiene una cadena
	int x,contador=0;
	string txt="abcdefghijklmnopqrstuvwxyz";
	cout<<"ingrese una palabra: ";
	string plb1,plb2;	getline(cin,plb1);
	x=plb1.length();	string caracter,caracter2;
	
	//hace que plb1 pase de mayuscula a minuscula
	for (int x=0;x<plb1.size();x++)
    {
		caracter=tolower(plb1.at(x));
	    plb2+=caracter;
    }
    
    //este for se encarga de ver las posiciones de plb2 y decir si es o no un letra
	for(int i=0;i!=x;i++)
	{	
		caracter=plb2.at(i);
		for(int x=0;x!=26;x++)
		{
			caracter2=txt.at(x);
			if(caracter==caracter2)
			{
				contador++;
			}
		}
	}
	
	cout<<"\nen la palabra que ingreso hay "<<contador<<" caracteres"<<endl;
	return 0;
}
