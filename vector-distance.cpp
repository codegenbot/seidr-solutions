#include <vector>
#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

double vectorDistance(int n, const vector<float>& v1, const vector<float>& v2) {
    double distance = 0;
    for (int i = 0; i < n; ++i) {
        float diff = v1[i] - v2[i];
        distance += diff * diff;
    }
    return sqrt(distance);
}

int main() {
    int n;
    cin >> n;

    vector<float> v1(n);
    for (float& x : v1) {
        cin >> x;
    }

    vector<float> v2(n);
    for (float& x : v2) {
        cin >> x;
    }

    cout << fixed << setprecision(10) << vectorDistance(n, v1, v2) << endl;

    return 0;
}