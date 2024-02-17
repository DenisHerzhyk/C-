#include "CStudents.h"
#include"CPersons.h"
using namespace std;

void CStudent::getData()
{
    CPerson::getData();
    cin.ignore();
    cout << "Enter university: "; getline(cin, university);
    cout << "Enter faculty: "; getline(cin, faculty);
    cout << "Enter speciality: "; getline(cin, speciality);
}

void CStudent::display()
{
    CPerson::display();
    cout << "University: " << university << endl;
    cout << "Faculty: " << faculty << endl;
    cout << "Speciality: " << speciality << endl;
}
