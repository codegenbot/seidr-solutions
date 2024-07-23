#include <vector>
#include <iostream>

using namespace std;

double calculateEuclideanDistance(const vector<float>& vector1, const vector<float>& vector2) {
    double distance = 0;
    for (int i = 0; i < vector1.size(); i++) {
        distance += pow(vector1[i] - vector2[i], 2);
    }
    return sqrt(distance);
}

int main() {
    int n;
    cin >> n;

    vector<float> vector1(n);
    for (float& val : vector1) {
        cin >> val;
    }

    vector<float> vector2(n);
    for (float& val : vector2) {
        cin >> val;
    }

    double distance = calculateEuclideanDistance(vector1, vector2);

    cout << fixed << setprecision(10) << distance << endl;

    return 0;
}