#include <iostream>
#include <vector>
using namespace std;

double vectorDistance(int n) {
    double x1, y1;
    cin >> x1;
    for (int i = 0; i < n; i++) {
        cin >> y1;
    }
    double x2, y2;
    cin >> x2;
    for (int i = 0; i < n; i++) {
        cin >> y2;
    }

    double distance = 0.0;
    for (int i = 0; i < n; i++) {
        distance += pow(y1 - y2, 2);
    }
    return sqrt(distance);
}

int main() {
    int n;
    cin >> n;

    cout << fixed << setprecision(10) << vectorDistance(n) << endl;

    return 0;
}