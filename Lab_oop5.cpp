#include <iostream>
#include "BD.h"

using namespace std;

void func1(Base obj) {
	cout << "func1\n";
}

void func2(Base* obj) {
	cout << "*func2\n";
}

void func3(Base& obj) {
	cout << "&func3\n";
}

int main()
{
	setlocale(LC_ALL, "rus");
	cout << "Передача объектов как параметров в функции:\n\n";
	cout << "Base:\n\n";
	Base base1 = new Base();
	func1(base1);
	cout << endl;
	Base* base2 = new Base();
	func2(base2);
	cout << endl;
	Base base3 = new Base();
	func3(base3);
	cout << endl;

	cout << "Desc:\n\n";
	Base desc1 = new Desc();
	func1(desc1);
	cout << endl;
	Base* desc2 = new Desc();
	func2(desc2);
	cout << endl;
	Base desc3 = new Desc();
	func3(desc3);
	cout << endl;

	return 0;
}