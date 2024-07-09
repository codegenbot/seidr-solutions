#include <vector>
#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

double vectorDistance() {
    int dim1, dim2;
    cin >> dim1 >> dim2;

    float v1[dim1];
    float v2[dim2];

    for (int i = 0; i < dim1; i++) {
        cin >> v1[i] >> v2[i];
    }

    double distance = 0.0;
    for (int i = 0; i < dim1; i++) {
        double diff = pow(v2[i] - v1[i], 2);
        distance += diff;
    }
    return sqrt(distance);
}

int main() {
    cout << fixed << setprecision(10) << vectorDistance() << endl;

    return 0;
}