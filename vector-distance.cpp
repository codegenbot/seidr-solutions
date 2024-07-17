#include <iostream>
#include <vector>
using namespace std;

double euclideanDistance(const vector<float>& v1, const vector<float>& v2) {
    if (v1.size() != v2.size()) {
        return -1; // or throw an exception
    }

    double distance = 0.0;
    for (int i = 0; i < v1.size(); i++) {
        distance += pow(v1[i] - v2[i], 2);
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

    cout << fixed << setprecision(10) << euclideanDistance(v1, v2) << endl;

    return 0;
}