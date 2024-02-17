#include <iostream>
#include <math.h>
using namespace std;
int main()
{
	int m, n;
	cout << "Input rows: " << endl;
	cin >> m;
	cout << "Input colums: " << endl;
	cin >> n;

	int** A = new int* [m];
	int* k = new int[m];

	for (int i = 0; i < m; i++)
	{
		A[i] = new int[n];
		k[i] = 0;
		for (int j = 0; j < n; j++)
		{
			cout << "Input element: " << i << " " << j << ": ";
			cin >> A[i][j];
			if (A[i][j] >= 0)
			{
				k[i] += A[i][j];
			}
		}
	}
	for (int i = 0; i < m; i++)
	{
		cout << "Sum of element in " << i << " row: " << A[i] << endl;
	}
	return 0;
}
