#include <vector>
#include <iostream>
using namespace std;

double calculateEuclideanDistance(vector<float> vec1, vector<float> vec2) {
    double distance = 0.0;
    for (int i = 0; i < vec1.size(); ++i) {
        float diff = vec1[i] - vec2[i];
        distance += pow(diff, 2);
    }
    return sqrt(distance);
}

int main() {
    int n;
    cin >> n;

    vector<float> vec1(n), vec2(n);

    for (int i = 0; i < n; ++i) {
        cin >> vec1[i] >> vec2[i];
    }

    double result = calculateEuclideanDistance(vec1, vec2);
    cout << fixed << setprecision(10) << result;
    return 0;
}