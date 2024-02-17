#include<iostream>
using namespace std;
int main() {
	int S;
	int x, y, z;
	cout << "enter x,y,z: " << endl;
	cin >> x >> y >> z;
	if (x >= y && x >= z) {
		S = y * z;
	}
	else if (y >= x && y >= z) {
		S = x * z;
	}
	else if (z >= x && z >= y) {
		S = x * y;
	}
	cout << S << endl;
}
