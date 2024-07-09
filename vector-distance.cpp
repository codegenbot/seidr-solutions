#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

double vectorDistance() {
    int n;
    cin >> n;

    float v[2][n];

    for (int i = 0; i < n; i++) {
        cin >> v[0][i] >> v[1][i];
    }

    double distance = 0.0;
    for (int i = 0; i < n; i++) {
        double diff = pow((v[1][i] - v[0][i]), 2);
        distance += diff;
    }
    return sqrt(distance);
}

int main() {
    cout << fixed << setprecision(10) << vectorDistance() << endl;

    return 0;
}