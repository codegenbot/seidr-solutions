#include <vector>
#include <iostream>
#include <cmath>

double distance(const vector<float>& v1, const vector<float>& v2) {
    double sum = 0;
    for (int i = 0; i < v1.size(); i++) {
        sum += pow(v1[i] - v2[i], 2);
    }
    return sqrt(sum);
}

int main() {
    vector<float> v1, v2;
    int n;
    cin >> n;
    v1.resize(n);
    v2.resize(n);
    for (int i = 0; i < n; i++) {
        cin >> v1[i] >> v2[i];
    }
    cout << distance(v1, v2) << endl;
}