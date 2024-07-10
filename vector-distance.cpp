#include <vector>
#include <iostream>
using namespace std;

double calculateEuclideanDistance(const vector<float>& vec1, const vector<float>& vec2) {
    double distance = 0.0;
    if (vec1.size() != vec2.size()) {
        cout << "Error: Vectors must be the same size." << endl;
        return -1.0; // Return an error value
    }
    
    for (int i = 0; i < vec1.size(); i++) {
        distance += pow(vec1[i] - vec2[i], 2);
    }

    return sqrt(distance);
}

int main() {
    int n;
    cin >> n;

    vector<float> v1(n), v2(n);

    for (int i = 0; i < n; i++) {
        cin >> v1[i] >> v2[i];
    }

    cout << fixed << setprecision(10) << calculateEuclideanDistance(v1, v2) << endl;

    return 0;
}