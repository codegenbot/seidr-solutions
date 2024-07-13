#include <vector>
#include <iostream>

using namespace std;

double vectorDistance(int n, vector<float> v1, vector<float> v2) {
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
    for (int i = 0; i < n; i++) {
        cin >> v1[i];
    }

    cin >> n;

    vector<float> v2(n);
    for (int i = 0; i < n; i++) {
        cin >> v2[i];
    }

    double result = vectorDistance(n, v1, v2);

    cout.setprecision(10);
    cout << fixed << result << endl;

    return 0;
}