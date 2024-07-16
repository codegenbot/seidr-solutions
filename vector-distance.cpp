#include <vector>
#include <iostream>

using namespace std;

double calculateEuclideanDistance(const vector<float>& vector1, const vector<float>& vector2) {
    double distance = 0.0;
    for (int i = 0; i < vector1.size(); i++) {
        distance += pow(vector1[i] - vector2[i], 2);
    }
    return sqrt(distance);
}

int main() {
    int n;
    cin >> n;

    vector<float> vec1(n), vec2(n);

    for (int i = 0; i < n; i++) {
        cin >> vec1[i] >> vec2[i];
    }

    double distance = calculateEuclideanDistance(vec1, vec2);
    cout << fixed << setprecision(10) << distance << endl;

    return 0;
}