#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

double euclideanDistance(const vector<double>& vec1, const vector<double>& vec2) {
    long double sum = 0.0;
    for (int i = 0; i < vec1.size(); i++) {
        long double diff = vec1[i] - vec2[i];
        sum += diff * diff;
    }
    return sqrt(sum);
}

int main() {
    int n;
    cin >> n;

    vector<double> vec1(n);
    for (int i = 0; i < n; i++) {
        cin >> vec1[i];
    }

    cin >> n;

    vector<double> vec2(n);
    for (int i = 0; i < n; i++) {
        cin >> vec2[i];
    }

    double distance = euclideanDistance(vec1, vec2);
    cout << distance << endl;

    return 0;
}