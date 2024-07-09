#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

double vectorDistance() {
    int n;
    cin >> n;

    float* v1 = new float[n];
    float* v2 = new float[n];

    for (int i = 0; i < n; i++) {
        cin >> v1[i] >> v2[i];
    }

    double distance = 0.0;
    for (int i = 0; i < n; i++) {
        double diff = pow((v2[i] - v1[i]), 2);
        distance += diff;
    }
    delete[] v1;
    delete[] v2;
    return sqrt(distance);
}

int main() {
    cout << fixed << setprecision(10) << vectorDistance() << endl;

    return 0;
}