#include <vector>
#include <iostream>

using namespace std;

double calculateEuclideanDistance(vector<float> vector1, vector<float> vector2) {
    double distance = 0;
    for (int i = 0; i < vector1.size(); i++) {
        distance += pow((vector1[i] - vector2[i]), 2);
    }
    return sqrt(distance);
}

int main() {
    int n;
    cin >> n;

    vector<float> vector1(n);
    for (int i = 0; i < n; i++) {
        cin >> vector1[i];
    }

    vector<float> vector2(n);
    for (int i = 0; i < n; i++) {
        cin >> vector2[i];
    }

    double distance = calculateEuclideanDistance(vector1, vector2);

    cout.setprecision(10); // to display the output with high precision
    cout << fixed << distance << endl;

    return 0;
}