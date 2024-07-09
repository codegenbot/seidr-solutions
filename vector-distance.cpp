#include <vector>
#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

double vectorDistance() {
    int dim;
    cin >> dim;

    float v1[dim];
    float v2[dim];

    for (int i = 0; i < dim; i++) {
        cin >> v1[i] >> v2[i];
    }

    double distance = 0.0;
    for (int i = 0; i < dim; i++) {
        double diff = pow(v2[i] - v1[i], 2);
        distance += diff;
    }
    return sqrt(distance);
}

int main() {
    cout << fixed << setprecision(10) << vectorDistance() << endl;

    return 0;
}