#include <vector>
#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

double vector_distance(const vector<float>& v1, const vector<float>& v2) {
    double sum = 0.0;
    for (int i = 0; i < v1.size(); i++) {
        sum += pow(v2[i] - v1[i], 2);
    }
    return sqrt(sum);
}

int main() {
    int n;
    cin >> n;
    vector<float> v1(n), v2(n);
    for (int i = 0; i < n; i++) {
        cin >> v1[i] >> v2[i];
    }
    cout << fixed << setprecision(10) << vector_distance(v1, v2) << endl;
    return 0;
}