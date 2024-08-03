#include <vector>
#include <iostream>

using namespace std;

double vectorDistance(int n) {
    double v1[n];
    double v2[n];

    // Read the vectors
    for (int i = 0; i < n; i++) {
        cin >> v1[i] >> v2[i];
    }

    double distance = 0.0;
    for (int i = 0; i < n; i++) {
        distance += pow(v2[i] - v1[i], 2);
    }
    return sqrt(distance);
}

int main() {
    int n;

    // Read the number of dimensions
    cin >> n;

    cout << fixed << setprecision(10) << vectorDistance(n) << endl;

    return 0;
}