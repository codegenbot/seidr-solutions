#include <vector>
#include <iostream>

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

    vector<float> v1(n), v2(n);

    for (float& val : v1) {
        cin >> val;
    }

    for (float& val : v2) {
        cin >> val;
    }

    double result = vectorDistance(n, v1, v2);
    cout << fixed << setprecision(10) << result << endl;

    return 0;
}