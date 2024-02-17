#pragma once
#include"CPersons.h"
using namespace std;


class CStudent : public CPerson 
{
private:
	string university, faculty, speciality;
public:
	void getData();
	void display();
};
