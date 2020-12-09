#pragma once
#include <iostream>
using namespace std;

class Base {
public:
	Base() {
		cout << "Конструктор по умолчанию Base\n";
	}

	Base(Base* obj){
		cout << "Конструктор *obj Base\n";
	}

	Base (Base& obj){
		cout << "Конструктор &obj Base\n";
	}
	virtual ~Base(){
		cout << "Деструктор Base\n";
	}
};

class Desc: public Base{
public:
	Desc(){
		cout << "Конструктор по умолчанию Desc\n";
	}

	Desc(Desc* obj){
		cout << "Конструктор *obj Desc\n";
	}

	Desc(Desc& obj){
		cout << "Конструктор &obj Desc\n";
	}
	~Desc(){
		cout << "Деструктор Desc\n";
	}
};
