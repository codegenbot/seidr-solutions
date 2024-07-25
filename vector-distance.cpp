#include <vector>
#include <iostream>

using namespace std;

double calculateEuclideanDistance(const vector<float>& v1, const vector<float>& v2) {
    double distance = 0;
    for (int i = 0; i < v1.size(); i++) {
        distance += pow(v1[i] - v2[i], 2);
    }
    return sqrt(distance);
}

int main() {
    int n;
    cin >> n;

    vector<float> v1(n);
    for (float& val : v1) {
        cin >> val;
    }

    vector<float> v2(n);
    for (float& val : v2) {
        cin >> val;
    }

    double distance = calculateEuclideanDistance(v1, v2);

    cout << fixed << setprecision(10) << distance << endl;

    return 0;
}