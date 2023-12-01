#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

double calculateDistance(const vector<double>& vector1, const vector<double>& vector2) {
    double sum = 0;
    for (int i = 0; i < vector1.size(); i++) {
        sum += pow(vector1[i] - vector2[i], 2);
    }
    return sqrt(sum);
}

int main() {
    int n;
    cin >> n;
    vector<double> vector1(n);
    for (int i = 0; i < n; i++) {
        cin >> vector1[i];
    }

    cin >> n;
    vector<double> vector2(n);
    for (int i = 0; i < n; i++) {
        cin >> vector2[i];
    }

    double distance = calculateDistance(vector1, vector2);
    cout << distance << endl;

    return 0;
}