//m - общо
//n – в защрихована област

#include<iostream>
#include<math.h>
using namespace std;

int main() {
    srand(time(0));
    int m, n, r, a;
    int totalPoints = 0, pointsInArea = 0;

    cout << "Input m,n, a, r: " << endl;
    cin >> m >> n >> a >> r;

    while (totalPoints < m && pointsInArea < n) {
        int x, y;
        x = rand() % 1000 - 500;
        y = rand() % 1000 - 500;

        if (y < a && sqrt(x * x + y * y) < r) {
            pointsInArea++;
        }
        totalPoints++;
    }
    cout << "Points in area : " << pointsInArea << endl;
    cout << pointsInArea * 100.f / totalPoints << endl;
}
