#include <vector>
#include <iostream>
using namespace std;

double calculateEuclideanDistance(vector<float> vector1, vector<float> vector2) {
    double distance = 0;
    for (int i = 0; i < vector1.size(); i++) {
        distance += pow(vector1[i] - vector2[i], 2);
    }
    return sqrt(distance);
}

int main() {
    int n;
    cin >> n;
    vector<float> vector1(n), vector2(n);

    for (int i = 0; i < n; i++) {
        cin >> vector1[i] >> vector2[i];
    }

    cout << fixed << setprecision(10) << calculateEuclideanDistance(vector1, vector2) << endl;

    return 0;
}