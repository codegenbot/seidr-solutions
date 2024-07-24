#include <vector>
#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

double calculateEuclideanDistance(int n, vector<float> v1, vector<float> v2) {
    double distance = 0;
    for (int i = 0; i < n; i++) {
        distance += pow(v1[i] - v2[i], 2);
    }
    return sqrt(distance);
}

int main() {
    int n;
    cin >> n;

    vector<float> v1(n), v2(n);

    for (int i = 0; i < n; i++) {
        float val;
        cin >> val;
        v1[i] = v2[i] = val;
    }

    double result = calculateEuclideanDistance(n, v1, v2);
    cout << fixed << setprecision(10) << result << endl;

    return 0;
}