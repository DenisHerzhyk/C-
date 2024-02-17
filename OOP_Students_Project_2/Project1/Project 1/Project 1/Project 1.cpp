#include"CPersons.h"
#include"CPupils.h"
#include"CStudents.h"
#include <typeinfo>
using namespace std;


void addPerson(vector <CPerson*> &arr)
{
	int choice;
	cout << "1 - Student" << endl;
	cout << "2 - Pupil" << endl;
	cout << "Choose option: ";cin >> choice;
	cout << endl;

	if (choice == 1)
	{
		CStudent* s = new CStudent;
		s->getData();
		arr.push_back(s);
	}
	else if (choice == 2)
	{
		CPupil* p = new CPupil;
		p->getData();
		arr.push_back(p);
	}
	else 
	{
		cout << "Invalid operation" << endl;
	}
}

void displayAll(vector <CPerson*> &arr) 
{
	for (CPerson* person : arr) 
	{
		if (CStudent* s = dynamic_cast<CStudent*>(person)) 
		{
			s->display();
		}
		else if (CPupil* p = dynamic_cast<CPupil*>(person))
		{
			p->display();
		}
		cout << endl;
	}
}

void displayMaxPoint(const vector <CPerson*> &arr)
{
	int maxP = 0;
	for (CPerson *i : arr) 
	{
		if (maxP < i->getPoint()) 
		{
			maxP = i->getPoint();
		}
	}

	for (CPerson *i : arr) 
	{
		if (maxP == i->getPoint()) 
		{
			i->display();
		}
	}
}

vector<CPerson*> createMoreThan30(vector <CPerson*>& arr) 
{
	vector <CPerson*> more30;
	for (CPerson *i : arr)
	{
		if (i->getPoint()>30 && (int)i->getEGN()[8]%2 != 0)
		{
			if (CPupil* p = dynamic_cast<CPupil*>(i))
			{
				more30.push_back(i);
			}
		}
	}
	return more30;
}



int main() 
{
	vector <CPerson*> persons;
	char swNumber;

	do 
	{
		cout << endl;
		cout << "MENU" << endl;
		cout << "1 - Add the data of new participant: " << endl;
		cout << "2 - Display all info: " << endl;
		cout << "3 - Displays the data of the participant with the most points: " << endl;
		cout << "4 - Creates an array with the data of women pupils with more than 30 points: " << endl;
		cout << "0 - Exit" << endl;
		cout << "Choose an operation: ";cin>>swNumber;
		cout << endl;

		switch (swNumber)
		{
		case '1':
			{
				addPerson(persons);
				break;
			}
		case '2':
			{
				displayAll(persons);
				break;
			}
		case '3':
			{
				displayMaxPoint(persons);
				break;
			}
		case '4':
			{
				vector <CPerson*> x = createMoreThan30(persons);
				for (CPerson* i : x) 
				{
					i->display();
					cout << endl;
				}
				break;
			}
		}
	} while (swNumber != '0');

	return 0;
}