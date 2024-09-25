#include <iostream>
#include <string>
using namespace std;
int main () {
	//unir 2 cadenas
	cout<<"ingrese dos palabras"<<endl;
	cout<<"ingrese una palabra:";
	string plb1;	cin>>plb1;
	cout<<"ingrese una segunda palabra:";
	string plb2;	cin>>plb2;
	string plbfull;	plbfull=plb1+plb2;
	cout<<plbfull;
	return 0;
}
