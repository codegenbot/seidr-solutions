#include <vector>
#include <iostream>
#include <cmath>
using namespace std;

double euclideanDistance(const vector<double>& v1, const vector<double>& v2) {
    double sum = 0.0;
    for (int i = 0; i < v1.size(); i++) {
        sum += pow(v1[i] - v2[i], 2);
    }
    return sqrt(sum);
}

int main() {
    int n;
    cin >> n;
    vector<double> v1(n);
    for (int i = 0; i < n; i++) {
        cin >> v1[i];
    }

    cin >> n;
    vector<double> v2(n);
    for (int i = 0; i < n; i++) {
        cin >> v2[i];
    }

    double distance = euclideanDistance(v1, v2);
    cout << distance << endl;

    return 0;
}