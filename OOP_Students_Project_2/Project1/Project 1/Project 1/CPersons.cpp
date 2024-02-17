#include "CPersons.h"

void CPerson::getData()
{
	cout << "Enter name: "; cin >> name;
	cout << "Enter EGN: "; cin >> EGN;
	cout << "Enter points: "; cin >> points;
}

void CPerson::display() 
{
	cout << "Name: " << name << endl;
	cout << "EGN: " << EGN << endl;
	cout << "Points: " << points << endl;
}

