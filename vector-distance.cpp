#include <vector>
#include <iostream>

using namespace std;

double calculateEuclideanDistance(const vector<float>& vec1, const vector<float>& vec2) {
    int n = vec1.size();
    double distance = 0.0;
    
    for (int i = 0; i < n; ++i) {
        float diff = vec1[i] - vec2[i];
        distance += diff * diff;
    }
    
    return sqrt(distance);
}

int main() {
    int n;
    cin >> n;

    vector<float> vec1(n);
    for (int i = 0; i < n; ++i) {
        cin >> vec1[i];
    }

    vector<float> vec2(n);
    for (int i = 0; i < n; ++i) {
        cin >> vec2[i];
    }

    cout << fixed << setprecision(10) << calculateEuclideanDistance(vec1, vec2) << endl;

    return 0;
}