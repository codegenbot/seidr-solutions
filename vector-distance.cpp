#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

double euclideanDistance(const vector<double>& v1, const vector<double>& v2) {
    double sumOfSquares = 0.0;
    for (int i = 0; i < v1.size(); i++) {
        double diff = v1[i] - v2[i];
        sumOfSquares += diff * diff;
    }
    return sqrt(sumOfSquares);
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