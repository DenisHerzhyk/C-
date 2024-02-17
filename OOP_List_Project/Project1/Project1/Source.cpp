#include <string>
#include <iostream>

using namespace std;
template <class T>
struct elem
{
	T inf;
	elem <T>* link;
};
template <class T>
class List
{
public:
	List();
	~List();
	void AddAfter(T y, T x);
	void AddBefore(T y, T x);
	int Del_El(T x);
	void Print_list();
	void Del_list();
	void Unique();
	elem <T>* first;
};
template <class T>
List<T>::List()
{
	first = NULL;
}
template <class T>
List<T>::~List()
{
	Del_list();
}
template <class T>
void List<T>::AddAfter(T y, T x)
{
	elem <T>* q = new elem <T>;
	elem <T>* p = first;
	while (p && p->inf != y)p = p->link;
	if (p)
	{
		q->inf = x;
		q->link = p->link;
		p->link = q;
	}
	else
	{
		q->inf = x;
		q->link = first;
		first = q;
	}
}
template <class T>
void List<T>::AddBefore(T y, T x)
{
	elem <T>* q = new elem <T>;
	elem <T>* p = first;
	while (p && p->inf != y)p = p->link;
	if (p)
	{
		*q = *p;
		p->inf = x;
		p->link = q;
	}
	else
	{
		q->inf = x;
		q->link = first;
		first = q;
	}
}
template <class T>
int List <T>::Del_El(T x)
{
	if (first->inf == x)
	{
		elem <T>* q = first;
		first = first->link;
		delete q;
		return 1;
	}
	elem <T>* p = first;
	while (p->link && p->link->inf != x)p = p->link;
	if (!p->link)return 0;
	elem <T>* q = p->link;
	p->link = q->link;
	delete q;
	return 1;
}
template <class T>
void List<T>::Print_list()
{
	elem <T>* p = first;
	while (p)
	{
		cout << p->inf << " ";
		p = p->link;
	}
	cout << endl;
}
template <class T>
void List<T>::Del_list()
{
	elem <T>* p = first, * q;
	while (p)
	{
		q = p; p = p->link;
		delete q;
	}
}
template <class T>
void List<T>::Unique() 
{
	elem<T>* current = first;

    while (current)
    {
        elem<T>* unique = current;
        while (unique->link)
        {
            if (current->inf == unique->link->inf)
            {
                elem<T>* temp = unique->link;
                unique->link = temp->link;
				delete temp;
            }
            else
            {
				unique = unique->link;
            }
        }
        current = current->link;
    }
}

int main()
{
	List<string> lst;
	lst.AddAfter("0", "hi");
	lst.AddAfter("1", "ho");
	lst.AddAfter("2", "h1");
	lst.AddAfter("3", "h");
	lst.AddAfter("4", "bb");
	lst.AddAfter("5", "ho");
	lst.AddAfter("6", "bj");
	lst.AddAfter("7", "h1");
	lst.AddAfter("8", "h");

	lst.Unique();
	
	lst.Print_list();
	return 0;
}