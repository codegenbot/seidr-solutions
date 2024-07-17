#include <vector>
#include <iostream>
using namespace std;

double calculateEuclideanDistance() {
    int n;
    cin >> n;

    vector<float> vec1(n);
    for (int i = 0; i < n; i++) {
        cin >> vec1[i];
    }

    vector<float> vec2(n);
    for (int i = 0; i < n; i++) {
        cin >> vec2[i];
    }

    double distance = 0.0;
    for (int i = 0; i < n; i++) {
        distance += pow(vec1[i] - vec2[i], 2);
    }
    distance = sqrt(distance);

    cout << fixed << setprecision(10) << distance << endl;

    return 0.0;
}

int main() {
    calculateEuclideanDistance();
    return 0;
}