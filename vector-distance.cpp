#include <iostream>
#include <cmath>

using namespace std;

double vectorDistance() {
    int n;
    cin >> n; 

    double x1 = 0, y1 = 0;
    for (int i = 0; i < n; i++) {
        double x, y;
        cin >> x >> y;
        x1 += pow(x, 2);
        y1 += pow(y, 2);
    }
    return sqrt((x1) * (x1) + (y1) * (y1));
}