#include <iostream>
#include <string>
using namespace std;
int main () {
	//devolver el reverso de una cadena
	int num1,x;
	cout<<"ingrese un palabra:";
	string plb1;	getline(cin,plb1);
	num1=plb1.length();
	for(int y=num1;x<=y;x++)
	{
		cout << plb1[num1-(x)];
	}
	return 0;
}
