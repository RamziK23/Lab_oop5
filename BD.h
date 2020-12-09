#pragma once
#include <iostream>
using namespace std;

class Base {
public:
	Base() {
		cout << "����������� �� ��������� Base\n";
	}

	Base(Base* obj){
		cout << "����������� *obj Base\n";
	}

	Base (Base& obj){
		cout << "����������� &obj Base\n";
	}
	virtual ~Base(){
		cout << "���������� Base\n";
	}
};

class Desc: public Base{
public:
	Desc(){
		cout << "����������� �� ��������� Desc\n";
	}

	Desc(Desc* obj){
		cout << "����������� *obj Desc\n";
	}

	Desc(Desc& obj){
		cout << "����������� &obj Desc\n";
	}
	~Desc(){
		cout << "���������� Desc\n";
	}
};
