#include <vector>
#include <iostream>
using namespace std;

double vectorDistance(int n, const vector<float>& v1, const vector<float>& v2) {
    double sum = 0;
    for (int i = 0; i < n; i++) {
        float diff = v1[i] - v2[i];
        sum += diff * diff;
    }
    return sqrt(sum);
}

int main() {
    int n;
    cin >> n;

    vector<float> v1(n);
    for (float& f : v1) cin >> f;

    cin >> n;

    vector<float> v2(n);
    for (float& f : v2) cin >> f;

    cout << fixed << setprecision(10) << vectorDistance(n, v1, v2) << endl;

    return 0;
}