#include<iostream>
#include<cmath>
using namespace std;

int main() {
	srand(time(0));
	struct circle {
		int r;
		int Ox;
		int Oy;
	};
	struct point {
		int x, y;
	};

	int a = rand() % 50;
	circle* circles = new circle[a];
	for (int i = 0;i < a;i++) {
		int r = rand() % 10;
		int Ox = rand() % 20;
		int Oy = rand() % 20;
		circle circ = { r,Ox,Oy };
		circles[i] = circ;
	}

	int b = rand() % 20;
	point* points = new point[b];
	for (int i = 0;i < b;i++) {
		int x = rand() % 20;
		int y = rand() % 20;
		point pnt = { x,y };
		points[i] = pnt;
	}

	for (int i = 0; i < a;i++) {
		int countOfPoints = 0;
		for (int j = 0;j < b;j++) {
			if ((pow(points[j].x - circles[i].Ox, 2) + pow(points[j].y - circles[i].Oy, 2)) < pow(circles[i].r, 2)) {
				countOfPoints++;
			}
		}
		cout << "In circle No " << i << " has " << countOfPoints << " points" << endl;
	}

	delete[] circles;
	delete[] points;
	return 0;
}
