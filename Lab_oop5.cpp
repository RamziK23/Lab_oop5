#include <iostream>
#include "PL.h"
#include "BD.h"
using namespace std;

void func1(Base obj) { //принимает объект
	cout << "func1\n";
}

void func2(Base* obj) {//принимает указатель на объект
	cout << "*func2\n";
}

void func3(Base& obj) {//принимает ссылку на объект
	cout << "&func3\n";
}

int main()
{
	setlocale(LC_ALL, "rus");

	Plane* plane1 = new Plane();
	Il_2* shtur1 = new Il_2();
	Plane* plane2 = new Il_2();

	cout <<"Проверка на принадлежность\n" ;
	cout << "\nС помощью метода Classname:\n";
	cout << plane1->ClassName() << endl;
	cout << shtur1->ClassName() << endl;
	cout << plane2->ClassName() << endl;

	cout << "\nС помощью метода isA:\n";
	cout << plane1->isA("Plane") << endl;
	cout << shtur1->isA("Il_2") << endl;
	cout << plane2->isA("Plane") << endl<<endl;

	cout << "Проверка типов ДИНАМИК КАСТ:\n";

	Il_2* shtur2 = dynamic_cast<Il_2*>(plane2);
	cout << shtur2->ClassName() << endl;
	shtur2->Method();
	plane2->Method();
	cout << endl;

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