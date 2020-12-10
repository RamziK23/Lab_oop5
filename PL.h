#pragma once
#include <iostream>
using namespace std;

class Plane {
private:
	string CN = "Plane";
public:
	int wings, wheels, weight;
	string shoot;
	Plane() {
		this->wings = 0;
		this->wheels = 0;
		this->weight = 0;
		this->shoot = "";
		cout << "����������� �� ��������� Plane\n";
	}

	Plane(int a, int b, int c, string d) {
		this->wings = a;
		this->wheels = b;
		this->weight = b;
		this->shoot = d;
		cout << "����������� � ����������� Plane\n";
	}

	Plane(Plane& A) {
		this->wings = A.wings;
		this->wheels = A.wheels;
		this->weight = A.weight;
		this->shoot = A.shoot;
		cout << "����������� ���������� Plane\n";
	}

	virtual bool isA(string classname) {
		cout << "����������� ����� isA Plane\n";
		if (classname == CN)
			return 1;
		else
			return 0;
	}

	virtual string ClassName() {
		cout << "����������� ����� ClassName Plane\n";
		return CN;
	}

	void Method() {
		cout << "����� Plane\n";
	}

	virtual ~Plane() {
		cout << "���������� Plane\n";
	}
};

class Il_2 :public Plane {
private:
	string CN = "Il_2";
public:
	Il_2() {
		this->wings = 2;
		this->wheels = 3;
		this->weight = 0;
		this->shoot = "trrrrr";
		cout << "����������� �� ��������� Il_2\n";
	}

	Il_2(int a, int b, int c, string d) {
		this->wings = a;
		this->wheels = b;
		this->weight = c;
		this->shoot = d;
		cout << "����������� � ����������� Il_2\n";
	}

	Il_2(Il_2& C) {
		this->wings = C.wings;
		this->wheels = C.wheels;
		this->weight = C.weight;
		this->shoot = C.shoot;
		cout << "����������� ���������� Il_2\n";
	}

	bool isA(string classname) {
		cout << "������������� ����� isA Il_2\n";
		if (classname == CN)
			return 1;
		else
			return 0;

	}

	string ClassName() {
		cout << "������������� ����� ClassName Il_2\n";
		return CN;
	}

	void Method() {
		cout << "����� Il_2\n";
	}

	~Il_2() {
		cout << "���������� Il_2\n";
	}
};