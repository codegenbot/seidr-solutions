#include <vector>
#include <iostream>
using namespace std;

double vectorDistance(int n, const vector<float>& v1, const vector<float>& v2) {
    double distance = 0;
    for (int i = 0; i < n; i++) {
        float diff = v1[i] - v2[i];
        distance += diff * diff;
    }
    return sqrt(distance);
}

int main() {
    int n;
    cin >> n;

    vector<float> v1(n);
    for (float& f : v1) {
        cin >> f;
    }

    vector<float> v2(n);
    for (float& f : v2) {
        cin >> f;
    }

    cout << setprecision(10) << fixed << vectorDistance(n, v1, v2) << endl;

    return 0;
}