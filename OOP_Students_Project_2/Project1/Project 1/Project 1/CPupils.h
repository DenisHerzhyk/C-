#pragma once
#include"CPersons.h"
using namespace std;

class CPupil : public CPerson {
private:
	string schoolName;
	int grade;
public:
	void getData();
	void display();
};


