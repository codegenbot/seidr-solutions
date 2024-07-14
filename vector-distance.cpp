#include <vector>
#include <iostream>
using namespace std;

double calculateEuclideanDistance(const vector<float>& v1, const vector<float>& v2) {
    double distance = 0.0;
    for (int i = 0; i < v1.size(); ++i) {
        double diff = v1[i] - v2[i];
        distance += diff * diff;
    }
    return sqrt(distance);
}

int main() {
    int n;
    cin >> n;

    vector<float> v1(n), v2(n);

    for (int i = 0; i < n; ++i) {
        cin >> v1[i] >> v2[i];
    }

    cout << fixed << setprecision(10);
    cout << calculateEuclideanDistance(v1, v2) << endl;

    return 0;
}