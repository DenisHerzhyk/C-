#include "CPupils.h"
#include"CPersons.h"
using namespace std;

void CPupil::getData() 
{
	CPerson::getData();
	cin.ignore();
	cout << "Enter school name: "; getline(cin,schoolName);
	cout << "Enter grade: "; cin >> grade;
}

void CPupil::display() 
{
	CPerson::display();
	cout << "School name: " << schoolName << endl;
	cout << "Grade: " << grade << endl;
}