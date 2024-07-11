#include <vector>
#include <iostream>

using namespace std;

double calculateEuclideanDistance(const vector<float>& vec1, const vector<float>& vec2) {
    double distance = 0;
    for (int i = 0; i < vec1.size(); i++) {
        float diff = vec1[i] - vec2[i];
        distance += pow(diff, 2);
    }
    return sqrt(distance);
}

int main() {
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

    double distance = calculateEuclideanDistance(vec1, vec2);

    cout << fixed << setprecision(10) << distance << endl;

    return 0;
}